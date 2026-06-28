## Project Title
Ultrasonic Radar Distance 

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week3 ultrasonic range finder directory structure`
* **Details:** This version structures the target asset paths for the localized distance mapping layout on GitHub.

### Step 2: Production Firmware Integration
* **Version Name:** `feat: implement HC-SR04 ultrasonic trigger pulsing and echo duration tracking logic`
* **Details:** This final version deploys the sonar time-of-flight mathematical logging architecture inside ultrasonic_radar.ino.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/kLCRJw3yYk1-ultsonic?sharecode=_97gAr_cXo0vqoooPwIxnAVML-3ioFXDv0Ui_zhRli8]

---

## Project Screenshots
<img width="1918" height="908" alt="Screenshot 2026-06-28 215643" src="https://github.com/user-attachments/assets/4f093c76-7c0a-43df-a54e-e9a953fef332" />
<img width="1918" height="933" alt="Screenshot 2026-06-28 215710" src="https://github.com/user-attachments/assets/02c2f7c7-59dc-4de1-91a7-bfa176048cfb" />
<img width="1917" height="906" alt="Screenshot 2026-06-28 215721" src="https://github.com/user-attachments/assets/1bbaee79-06b6-43f7-b201-a987bba928d3" />
<img width="1918" height="907" alt="Screenshot 2026-06-28 215735" src="https://github.com/user-attachments/assets/b249e82b-9051-450b-9533-b99c652f698a" />
<img width="1918" height="912" alt="Screenshot 2026-06-28 215751" src="https://github.com/user-attachments/assets/dc46eb1f-14a6-4dee-bd2d-c26262d54452" />

---

## Hardware Required

### List of Components
* One Arduino UNO board
* One HC-SR04 Ultrasonic Distance Sensor
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### Sonar Time-of-Flight Physics
The HC-SR04 handles distance tracking through physical sound wave projection. When **Digital Pin 12 (Trig)** receives a $10\,\mu\text{s}$ pulse from the code, it excites the module's sonic transducer to emit an 8-cycle burst of ultrasound at $40\text{ kHz}$. Concurrently, the module drives **Digital Pin 13 (Echo) HIGH**. This pin stays HIGH until the reflected sound waves hit the receiver transducer, allowing the `pulseIn()` block to measure the exact microsecond duration delta.

---

## How to Upload Code

### Tinkercad Simulation Process
1. Open your web workspace browser tab and enter your active Q19 prototyping canvas.
2. Click the **Code** icon located in the upper right workspace layout tray.
3. Alter the workspace layout formatting view choice to **Text**.
4. Discard any baseline startup code lines and paste your compiled `ultrasonic_radar.ino` script.
5. Click **Start Simulation**. Click with your mouse on the virtual ultrasonic sensor package to pull up its interactive conical range bubble, dragging the green dot up and down to simulate objects.

---

## Expected Output

### System Behavior
Once the workspace engine fires up, the module scans the field every 300 milliseconds. The values dynamically shift in step with your mouse adjustments inside the visual target bubble.

### Serial Logging Printouts
```text
--- Ultrasonic Radar Distance Logger Initialized ---
Target Distance: 124.5 cm
Target Distance: 82.1 cm
Target Distance: 45.0 cm
Target Status: Out of Range / No Echo Intercepted
