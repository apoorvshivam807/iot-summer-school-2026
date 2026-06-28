## Project Title
Precision Temperature Monitoring Telemetry via Analog Voltage Conversion

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week3 temperature telemetry directory structure`
* **Details:** This version structures the target asset paths for the localized temperature profiling grid on GitHub.

### Step 2: Production Firmware Integration
* **Version Name:** `feat: implement TMP36 temperature sensor ADC scaling and celsius conversion math`
* **Details:** This final version deploys the mathematical calculation loops inside temperature_logs.ino, translating millivolt potentials into standard Celsius metrics.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/bcYodN7s2Mn-temp?sharecode=gcHTcAXd2kaiOmmzL5hdQGfl_UJUcwK9OdWT99edt3w]

---

## Project Screenshots
<img width="1918" height="911" alt="Screenshot 2026-06-28 213832" src="https://github.com/user-attachments/assets/5878b266-b509-47a2-889c-de002f5d247b" />
<img width="1918" height="911" alt="Screenshot 2026-06-28 213855" src="https://github.com/user-attachments/assets/7b3cd8c9-d8eb-4c33-8382-3849556008f5" />

---

## Hardware Required

### List of Components
* One Arduino UNO board
* One TMP36 (or LM35) Analog Temperature Sensor
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### Analog Signal Acquisition
The TMP36 utilizes an internal solid-state temperature diode matrix that expands its bandgap voltage linearly at a rate of precisely $10\text{mV}$ per degree Celsius ($10\text{mV}/^\circ\text{C}$). The center signal pin feeds this unmodulated voltage line straight to the Arduino’s **Analog Pin A1**, where the internal microcontroller successive-approximation hardware digitizes the potential into a 10-bit integer scalar.

---

## How to Upload Code

### Tinkercad Simulation Process
1. Open your web workspace browser tab and enter your active Q18 prototyping canvas.
2. Click the **Code** icon located in the upper right workspace layout tray.
3. Alter the workspace layout formatting view choice to **Text**.
4. Discard any baseline startup code lines and paste your compiled `temperature_logs.ino` script.
5. Click **Start Simulation**. Click with your mouse on the virtual temperature chip package to activate its slider handle, dragging it up and down to change temperature parameters in real time.

---

## Expected Output

### System Behavior
Once initialized, the microchip polls the physical A1 node every 1 second, converts the digitized raw value into its voltage equivalent, applies the specific calibration scaling matrix, and logs a clean string to the monitor terminal.

### Serial Logging Printouts
```text
--- Precision Temperature Telemetry Logger Initialized ---
Raw ADC Value: 153  |  Sensor Voltage: 0.747 V  |  Temperature: 24.7 °C
Raw ADC Value: 154  |  Sensor Voltage: 0.752 V  |  Temperature: 25.2 °C
Raw ADC Value: 205  |  Sensor Voltage: 1.001 V  |  Temperature: 50.1 °C
