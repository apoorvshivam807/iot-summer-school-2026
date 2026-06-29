#  Push Button-Controlled LED Blinker using ESP32

A responsive microcontroller application that utilizes an embedded GPIO pin configured with an internal pull-up resistor to monitor a physical push button state, triggering a continuous $250\text{ Hz}$ blinking cycle while held.

---

## 🛠️ Hardware Requirements

* **Microcontroller:** ESP32 / ESP8266 or Arduino UNO Development Board
* **Actuator:** 1x Light Emitting Diode (LED)
* **Current-Limiting Resistor:** 1x $220\Omega$ Resistor (for LED protection)
* **Input Device:** 1x Momentary Tactile Push Button
* **Prototyping Gear:** Breadboard and Jumper Wires

---

## 🎛️ Circuit Architecture & Description

Instead of requiring an external physical pull-down resistor, this circuit takes advantage of the chip's internal silicon-level hardware. The input pin is pulled up to logic HIGH ($V_{CC}$) internally when floating.

### Component Connections:
1. **Push Button:** Connected between **GPIO 4** and **GND** (Ground).
2. **LED Actuator:** Connected from **GPIO 15** through a $220\Omega$ current-limiting resistor to **GND**.

*When the tactile button is open (unpressed), GPIO 4 reads a constant stable `HIGH`. When the button closes (pressed), it creates a direct path to ground, pulling the signal down to an explicit logic `LOW`.*

---

## Photos

<img width="960" height="1280" alt="WhatsApp Image 2026-06-29 at 6 29 45 PM" src="https://github.com/user-attachments/assets/33ba3835-479e-4f0e-b533-1bb94ac67ec9" />
<img width="1280" height="960" alt="WhatsApp Image 2026-06-29 at 6 28 25 PM (1)" src="https://github.com/user-attachments/assets/791d1139-c18f-4ec0-8010-9ae1b10f0daf" />


## 🚀 How to Upload Code

1. **Setup IDE:** Open the **Arduino IDE** or **VS Code (with PlatformIO)**.
2. **Connect Hardware:** Attach your development board to your computer using a reliable USB data cable.
3. **Configure Targets:** Go to `Tools` $\rightarrow$ `Board` and select your specific board model. Choose the matching interface port under `Tools` $\rightarrow$ `Port`.
4. **Compile & Flash:** Copy the provided sketch code into your editor workspace, then click the **Upload** arrow button (or press `Ctrl + U`).

---

## 📊 Expected Output

* **Idle State:** When the button is left untouched, the input reads `HIGH`. The execution skips the conditional block, enforcing a steady `digitalWrite(LED_PIN, LOW)` command to keep the indicator dark.
* **Active State:** The absolute millisecond the button is depressed, the logic shifts to `LOW`. The conditional check triggers, initiating an alternating `HIGH` and `LOW` block that produces a clean pulse effect ($200\text{ms}$ ON / $200\text{ms}$ OFF) as long as physical contact remains maintained.

---

## 🛠️ Troubleshooting Tips (Minimum 3 Points)

1. **LED Stays Completely Unresponsive:** Double-check the physical polarity of your LED component. The longer positive leg (Anode) must interface directly with the GPIO 15 line, while the shorter flat-edged leg (Cathode) must bind back to Ground (`GND`).
2. **The Button Logic Feels Inverted:** If the blinking happens when unpressed and stops when pressed, confirm that your button leads are plugged diagonally across the breadboard divider channel rather than along the same connected structural plate.
3. **Floating Signal Noise or Erratic Toggling:** Ensure that your setup explicitly uses `INPUT_PULLUP` inside `pinMode()`. Changing this command accidentally to a standard `INPUT` parameter leaves the pin floating without a voltage baseline, picking up environmental electromagnetic noise.
