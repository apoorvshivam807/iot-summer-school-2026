## Project Title
Establish Tx|Rx between two Arduino? UART?\
UART (Universal Asynchronous Receiver-Transmitter) is a fundamental
hardware communication protocol that allows devices to exchange serial data
asynchronously using just two wires (Transmit and Receive) alongside a
common ground.\
Tx(3)-Rx(2)

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week2 direct signaling directory structure`
* **Details:** This version sets up the structural workspace dependencies for the dual-node digital signaling module.

### Step 2: Core Hardware Deployment
* **Version Name:** `feat: implement point to point digital signal master transmitter` and `feat: implement point to point digital signal slave receiver mirror`
* **Details:** This final version deploys two discrete scripts tracking basic asynchronous bit actions, routing an unmodulated control channel from a master interface out to an indicator node.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/9mjqRWkOxcU-uart?sharecode=9kYm68zDu0JMcGAKusj8Lkoz1tlvNtYbPZKDkHtcBr8]

---

## Project Screenshots

<img width="1918" height="910" alt="Screenshot 2026-06-28 144912" src="https://github.com/user-attachments/assets/f5146542-d50d-4498-a173-40032098134c" />
<img width="1918" height="908" alt="Screenshot 2026-06-28 144931" src="https://github.com/user-attachments/assets/e733f56f-87ac-48db-91cb-abbb46d7b61e" />

---

## Hardware Required

### List of Components
* Two Arduino UNO boards (Designated as TX Transmitter and RX Receiver)
* One Push Button
* One 10k ohm Resistor (Button pull-down setup)
* One 220 ohm resistor.
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### Communication Data Lines
The boards communicate asynchronously across a simple wire interface:
* **TX Pin 3 (Master)** connects directly via a jumper wire to **RX Pin 2 (Slave)**.

### Common Reference Loop
A heavy black jumper wire bridges the **GND** terminal of the transmitter board straight to a **GND** terminal of the receiver board. This link is vital to keep the electrical voltage levels steady between both processors.

### Button Control Layout
The master push button links its input path directly to Digital Pin 2 through a standard 10k ohm pull-down resistor configuration connected to Ground.

---

## How to Upload Code

### Tinkercad Simulation Process
1. Access your workspace panel containing the dual-microcontroller direct link framework.
2. Open the **Code Panel**, click on **Arduino 1 (Transmitter)**, and paste the code from `tx_master.ino`.
3. Click on **Arduino 2 (Receiver)**, change its code space view to Text, and paste the code from `rx_slave.ino`.
4. Click **Start Simulation**. Click the push button on the master board to watch the slave's built-in pin 13 LED respond instantly.

---

## Troubleshooting Tips

### The Slave LED Stays Constantly Blinking or Dimly Flickering
If the LED behaves erratically or glitched when you aren't touching the button, your common ground link is missing or disconnected. Ensure a ground wire securely bridges the GND slots on both Arduinos together.

### Floating Inverted Logic Actions
If the Slave LED turns off when you press the button and turns on when you release it, check your resistor setup. Ensure the master button uses a proper pull-down routing to keep the pin at a clean 0V state when idle.
