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
The green text stream inside your Velxio console window will output these exact boot messages every 5 seconds. Notice how the counter counts up continuously because it is securely written to the RTC memory segment:
```text
load:0x3fff0030,len:1184
load:0x40078000,len:12928
load:0x40080400,len:3036
entry 0x400805e4
Boot number: 1
Setup ESP32 DevKit V1 to sleep for 5 Seconds
Going to deep sleep now...
(5 Second Power-Down Pause)
load:0x3fff0030,len:1184
load:0x40078000,len:12928
load:0x40080400,len:3036
entry 0x400805e4
Boot number: 2
Setup ESP32 DevKit V1 to sleep for 5 Seconds
Going to deep sleep now...
