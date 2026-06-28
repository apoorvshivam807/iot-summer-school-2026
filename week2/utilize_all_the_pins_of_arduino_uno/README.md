## Project Title
Utilize all pins of Arduino UNO\
Self-Driving Vehicle with Multi-Sensor

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week2 pin-maximization car directory structure`
* **Details:** This version sets up the structural workspace dependencies for the dual-node autonomous robotics module on GitHub.

### Step 2: Full System Deployment
* **Version Name:** `feat: implement pin maximized obstacle avoidance master telemetry engine` and `feat: implement I2C state text parser receiver display map`
* **Details:** This final version deploys the complete robotic system, mapping 100% of available master I/O lines (Pins 0–13 and A0–A5) to manage an multi-directional spatial scanner loop feeding real-time string data updates down to a secondary display slave.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/hW6EHiHFinN-robocar?sharecode=TlkYTtYEUbqVpgDJPIsOQHN55zD3p2SiekQvpiYafGg]

---

## Project Screenshots
<img width="1918" height="846" alt="Screenshot 2026-06-28 143327" src="https://github.com/user-attachments/assets/a9991e54-deee-4224-a73c-87763694741c" />
<img width="1918" height="906" alt="Screenshot 2026-06-28 143347" src="https://github.com/user-attachments/assets/04a27b9c-d8f9-4a1e-b872-9162e3437566" />
<img width="1918" height="910" alt="Screenshot 2026-06-28 143416" src="https://github.com/user-attachments/assets/a1785dd6-8656-4938-99db-f494ee98dd90" />
<img width="1918" height="906" alt="Screenshot 2026-06-28 143427" src="https://github.com/user-attachments/assets/c61b64aa-4f5d-4c69-a437-c6fba3882fc7" />

---

## Hardware Pin Allocation Map (100% Utilization)

### Arduino 1 (Main Autonomous Brain)
| Pin Designation | Component Connection | Input/Output Type |
| :--- | :--- | :--- |
| **Digital Pin 0 & 1** | Standard Hardware USB Debugging Serial Line | UART TX / RX |
| **Digital Pin 2 & 3** | Motor Driver Direction Pins (`in1`, `in2`) | Digital OUTPUT |
| **Digital Pin 4 & 5** | Right Ultrasonic Distance Sensor (`trir`, `echor`) | Trigger OUTPUT / Echo INPUT |
| **Digital Pin 6 & 7** | Back Ultrasonic Distance Sensor (`trib`, `echob`) | Trigger OUTPUT / Echo INPUT |
| **Digital Pin 8** | Software Serial Inbound Rx Tracking | Input Bus Link |
| **Digital Pin 9 & 10**| Motor Driver Speed Controller Links (`ep1`, `ep2`) | PWM Analog OUTPUT |
| **Digital Pin 11** | Servo Navigation Steering Drive Signal | PWM Servo Channel |
| **Digital Pin 12 & 13**| Front Ultrasonic Distance Sensor (`trif`, `echof`) | Trigger OUTPUT / Echo INPUT |
| **Analog Pin A0 & A1** | Left Ultrasonic Distance Sensor (`tril`, `echol`) | Reconfigured Digital Out/In |
| **Analog Pin A2** | Software Serial Data Outbound Tx to Screen Controller | Output Bus Link |
| **Analog Pin A3** | Leftover Floating Reference Guard Node | Ground Guard Latched |
| **Analog Pins A4 & A5**| Reserved I2C Expansion Rail Paths | High Impedance Pull-ups |

### Arduino 2 (Dedicated Display Controller)
* **Pins 8 & 9:** Software Serial Data link from main brain.
* **Pins A4 & A5:** Specialized $I^2C$ communication bus lines linked directly to a $16 \times 2$ character Liquid Crystal Display backpack.

---

## How to Upload Code

### Tinkercad Simulation Process
1. Access your workspace panel containing the dual-microcontroller car network.
2. Open the **Code Panel**, click on **Arduino 1 (The Brain)**, and paste the code from `master.ino`.
3. Click on **Arduino 2 (The Screen)**, change its code space view to Text, and paste the code from `slave.ino`.
4. Run **Start Simulation** and interact with the distance overlays on each sonar head to watch the vehicle react and message the display.

---

## Troubleshooting Tips

### Display Output Lag or Dropped Text Characters
If text messages on the LCD update slowly or miss state transitions, the software serial links are missing pulses. Ensure both scripts are configured to a stable communication speed of **9600 baud**. 

### Analog Sensor Read Anomalies
If the Left sonar head (plugged into `A0` and `A1`) keeps logging flat `999cm` error states, make sure you did not leave the pins declared as analog reads. Since it acts as a digital sensor, `pinMode(tril, OUTPUT)` and `pinMode(echol, INPUT)` must be explicitly called inside your setup blocks to reconfigure the internal pin registers.
