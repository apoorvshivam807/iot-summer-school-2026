## Project Title
Analog Light Sensing with Threshold Alarm

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week3 ldr threshold alarm directory structure`
* **Details:** This version sets up the repository paths for the analog light monitoring subsystem on GitHub.

### Step 2: Production Build Deployment
* **Version Name:** `feat: implement LDR analog input read and conditional piezo alarm tracking`
* **Details:** This final version deploys the complete sensor parsing architecture inside ldr_alarm.ino, establishing operational continuous telemetry logging.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/3x3NDp7Gm6C-ldrthreshold?sharecode=ISITyYsPnnoTAKre277U8WLi5u2B9k5kAbrZeAPoWQE]

---

## Project Screenshots
<img width="1918" height="903" alt="Screenshot 2026-06-28 211804" src="https://github.com/user-attachments/assets/c18be73f-af56-4a93-8cf7-7e1247cf3755" />
<img width="1918" height="911" alt="Screenshot 2026-06-28 211821" src="https://github.com/user-attachments/assets/5e2c59df-3d14-436f-b7c7-c8c23da87800" />
<img width="1918" height="912" alt="Screenshot 2026-06-28 211830" src="https://github.com/user-attachments/assets/97f0ce5b-f900-4e62-94fa-d1411e905fe3" />
<img width="1918" height="917" alt="Screenshot 2026-06-28 211845" src="https://github.com/user-attachments/assets/e533ef88-eed5-4207-8354-fb8921394dd2" />






---

## Hardware Required

### List of Components
* One Arduino UNO board
* One Photoresistor (LDR Sensor)
* One Piezo Buzzer
* One 10k ohm Resistor (Voltage divider configuration)
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### Analog Sensor Network
The photoresistor varies its internal resistance dynamically based on localized lux shifts. Operating inside a 10k ohm voltage divider array, this resistance fluctuation produces an changing voltage drop captured cleanly by the internal 10-bit Analog-to-Digital Converter (ADC) on **Analog Input A0**.

### Alarm Output Configuration
The acoustic warning payload consists of a piezo element wired directly between **Digital PWM Pin 9** and the universal **GND** terminal rail, enabling sound generations via rapid clock duty cycles.

---

## How to Upload Code

### Tinkercad Simulation Process
1. Access your web browser dashboard and open your custom Q17 layout workspace design canvas.
2. Select the **Code** icon located in the upper right workspace action bar.
3. Choose the **Text** format option in the editor layout selection box.
4. Replace the base code lines by pasting the contents of `ldr_alarm.ino` into the screen panel.
5. Click **Start Simulation**. Click directly on the photoresistor component to shift its virtual light handle slider, and watch the console monitor trace changing values.

---

## Expected Output

### System Behavior
When the simulation kicks off, the Arduino polls the A0 data node every 200 milliseconds and streams the numbers down the serial line. When the virtual slider is moved towards full brightness, the values rise high (above 400) and the buzzer remains completely quiet. When the light slider drops down low into dark coverage conditions ($\le 400$), the code matches the logic threshold, immediately triggering Pin 9 to pulse a 1000Hz alert warning beep.

### Serial Logging Printouts
```text
--- LDR Monitor & Alarm System Initialized ---
Ambient Light Level: 685
Ambient Light Level: 590
Ambient Light Level: 320
Ambient Light Level: 210
