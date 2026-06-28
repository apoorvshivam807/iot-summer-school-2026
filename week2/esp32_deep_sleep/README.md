## Project Title
ESP32 Deep Sleep 

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week2 esp32 deep sleep directory structure`
* **Details:** This version sets up the initial working directory paths for the ESP32 power management framework.

### Step 2: Full Implementation
* **Version Name:** `feat: implement ESP32 timer wakeup deep sleep with RTC boot counter`
* **Details:** This final version deploys the low-power execution sketch inside the Velxio web simulation workspace, utilizing hardware sleep timers and verifying that data persists across deep sleep cycles using specialized RTC memory attributes.

---

## 🔗 Project Links
* **Live Velxio Simulation Link:** [https://velxio.dev/apoorvshivam807/esp32deepsleep]

---

## Project Screenshots
<img width="1917" height="871" alt="Screenshot 2026-06-28 150745" src="https://github.com/user-attachments/assets/ae2c086b-6469-4077-bb62-7455f260230d" />
<img width="1067" height="510" alt="Screenshot 2026-06-28 150757" src="https://github.com/user-attachments/assets/ead5982a-486d-4609-a830-fe8b2ad0146d" />


---

## Hardware Required

### List of Components
* One ESP32 DevKit V1 Board (Emulated via Velxio simulation engine workspace)
* Virtual Serial Monitor Interface Connection Bus

---

## Circuit Diagram Description

### Power Configurations
The system runs via a standard internal 3.3V power routing template. During deep sleep execution, the main CPU core, Wi-Fi/Bluetooth radio buses, and standard RAM cells are completely powered down to save energy. Only the ultra-low-power RTC (Real-Time Clock) controller and fast RTC memory blocks stay powered to track background timers and preserve designated state variables.

---

## How to Run the Simulation

### Velxio Workspace Process
1. Open your web browser and log into your active **Velxio** workspace.
2. Select your `sketch.ino` file inside the left file hierarchy explorer pane.
3. Paste the completed production C++ source code directly into the code editing window.
4. Locate the top center control panel and click the **green play button (Start Simulation)**.
5. Watch the active **ESP32 Terminal Monitor panel** located in the bottom right frame to observe execution logging frames.

---

## Expected Output

### System Behavior
Upon code execution, the ESP32 initializes, increments the persistent boot counter variable, schedules a timer-driven wakeup flag for exactly $5\text{ seconds}$, and transitions cleanly into deep sleep. After the $5\text{ second}$ pause expires, the low-power timer fires an internal reset flag, triggering the board to reboot and run the `setup()` block from scratch.

### Serial Logging (Velxio Output Window)
The green text stream inside your Velxio console window will output these exact boot messages every 5 seconds. Notice how the counter counts up continuously because it is securely written to the RTC memory segment:\

load:0x3fff0030,len:1184\
load:0x40078000,len:12928\
load:0x40080400,len:3036\
entry 0x400805e4\
Boot number: 1\
Setup ESP32 DevKit V1 to sleep for 5 Seconds\
Going to deep sleep now...\
(5 Second Power-Down Pause)\
load:0x3fff0030,len:1184\
load:0x40078000,len:12928\
load:0x40080400,len:3036\
entry 0x400805e4\
Boot number: 2\
Setup ESP32 DevKit V1 to sleep for 5 Seconds\
Going to deep sleep now...\


 ## Troubleshooting guide for debugging ESP32 Deep Sleep and RTC memory tracking issues, organized by common symptoms:

---

## 🔍 1. The Boot Counter is Stuck at 1

**Symptom:** Every time the ESP32 wakes up, the console prints `Boot number: 1` instead of counting up continuously.

* **The Cause:** The variable is being stored in standard volatile RAM, which is completely powered off and cleared during deep sleep.
* **The Fix:** Ensure you have prefixed your global variable with the specific attribute `RTC_DATA_ATTR`.
```cpp
// ❌ WRONG (Resets every sleep cycle)
int bootCount = 0; 

//  RIGHT (Survives deep sleep)
RTC_DATA_ATTR int bootCount = 0; 

```


* **Hardware Check:** Ensure you aren't accidentally hitting the physical **EN/RST button** or dropping the main power supply line during sleep, as a hard power-cut wipes even the RTC memory.

---

## 🔁 2. Immediate Infinite Boot Loops (No 5-Second Pause)

**Symptom:** The ESP32 prints your setup text constantly without waiting or entering the low-power sleep state.

* **The Cause:** The microsecond math conversion is overflowing a standard 32-bit integer, resulting in a sleep time of zero.
* **The Fix:** Force the compiler to treat the conversion factor as an explicit 64-bit unsigned long long literal by appending the `ULL` suffix.
```cpp
// ❌ WRONG (Integer overflow risk)
#define uS_TO_S_FACTOR 1000000 

//  RIGHT (Forces 64-bit precision)
#define uS_TO_S_FACTOR 1000000ULL 

```



---

## 🖨️ 3. Corrupted Serial Output / Garbage Characters

**Symptom:** Upon waking up, the Serial Monitor streams unreadable symbols (`⸮⸮⸮`) or gibberish text.

* **The Cause:** The default ESP32 bootloader outputs initial internal ROM messages at a hardware rate of **115200 baud**. If your code switches back to a slower speed (like 9600), the terminal can glitch during the wake-up transition.
* **The Fix:** Set your code's serial initialization and your terminal emulator window exclusively to **115200 baud**.
```cpp
Serial.begin(115200);

```


* **Missing Clear Buffer:** Add a `Serial.flush();` immediately before calling `esp_deep_sleep_start()`. This forces the chip to completely push out all remaining text characters over the serial Tx line before the hardware clock turns off.

---

## 🔋 4. High Current Draw During Deep Sleep (Power Not Dropping)

**Symptom:** The chip is logically in deep sleep, but your multimeter indicates it is still drawing several milliamps instead of microamps.

* **The Cause:** Connected peripheral module pins are left "floating" or driving current, or the onboard development board regulator/USB-to-UART chip is drawing power.
* **The Fix:** * Isolate development board overhead. Standard DevKits (like the NodeMCU ESP32) have an onboard red power LED and an unisolated CP2102 USB chip that constantly draws 5–10mA, even if the main chip is asleep. For true low-power deployment, those trace components must be desoldered or a bare module must be used.
* Explicitly isolate external pins before sleeping using:
```cpp
rtc_gpio_isolate(GPIO_NUM_X);

```





---

## ⏰ 5. External GPIO Wake-up Triggers Instantly

**Symptom:** When using an external pin (like a push-button) as an `ext0` or `ext1` wake-up trigger, the chip wakes up the instant it enters deep sleep, without a button press.

* **The Cause:** The trigger pin lacks a proper pull-up or pull-down resistor, causing the line to float erratically and trigger a false hardware interrupt.
* **The Fix:** If your trigger condition is set to `1` (HIGH), ensure you have a physical 10kΩ pull-down resistor pulling that pin to Ground when idle. Alternatively, use the internal RTC pull-up structures before starting deep sleep:
```cpp
esp_sleep_enable_ext0_wakeup(GPIO_NUM_4, 1); // Wake on HIGH
rtc_gpio_pullup_dis(GPIO_NUM_4);
rtc_gpio_pulldown_en(GPIO_NUM_4); // Force internal pull-down active

```
