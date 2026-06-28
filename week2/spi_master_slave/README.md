## Project Title
SPI Synchronous Master-Slave Dual-Microcontroller Communication
---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week2 spi master slave directory structure`
* **Details:** This version sets up the initial working directory paths for the dual-node SPI communication framework on GitHub.

### Step 2: Full Simulation Implementation
* **Version Name:** `feat: implement software bit-banging SPI master and slave logic`
* **Details:** This final version deploys two separate functional sketches: spi_master.ino (manually driving the clock and data lines) and spi_slave.ino (polling pin states sequentially). This software bit-banging approach bypasses virtual simulator hardware register constraints to enable verified real-time data transmission in Tinkercad.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/fYB5TeKu3dn-spimslave?sharecode=glE55NLcTn2z187DjuTwU0c1eK_Eme_KFqmlgFJ1Dkk]

---

## Project Screenshots
<img width="1918" height="912" alt="Screenshot 2026-06-28 140006" src="https://github.com/user-attachments/assets/23688d7a-8824-486c-8ef4-0ab1834638c9" />
<img width="1918" height="912" alt="Screenshot 2026-06-28 140024" src="https://github.com/user-attachments/assets/6e02ef9c-ca4d-4ea1-9f50-11da479e8117" />
<img width="1918" height="908" alt="Screenshot 2026-06-28 140034" src="https://github.com/user-attachments/assets/88db9d5c-888d-4938-9356-4ce21521496c" />


---

## Hardware Required

### List of Components
* Two Arduino UNO boards (Designated as Master and Slave)
* One Green LED (Connected to Slave Pin 6)
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### Synchronous SPI Bus Lines
The communication network links four parallel data paths directly between the two microcontrollers:
* **MOSI (Pin 11 to Pin 11):** Serial Data Line used by the Master to send character bytes ('1' and '0') down to the Slave input.
* **MISO (Pin 12 to Pin 12):** Serial Data Line reserved for sending feedback data from the Slave back up to the Master.
* **SCK (Pin 13 to Pin 13):** Serial Clock Line driven exclusively by the Master to synchronize bit transmission timing.
* **SS (Pin 10 to Pin 10):** Slave Select Line pulled LOW by the Master to initiate communication and raised HIGH to clear the bus.

### Common Electrical Reference
A heavy black jumper wire connects a **GND** pin on the Master board directly to a **GND** pin on the Slave board. This shared ground reference stabilizes the data pulses across the bus wires.

---

## How to Upload Code

### Tinkercad Simulation Process
1. Navigate to your Tinkercad Circuits project workspace.
2. Open the **Code** panel in the toolbar.
3. Click on the **Top Arduino Uno (Master)**, ensure the dropdown menu is set to **Text**, and paste your `spi_master.ino` code block.
4. Next, click on the **Bottom Arduino Uno (Slave)**, ensure the view is set to text, and paste your `spi_slave.ino` code block.
5. Click **Start Simulation**. Click on either microcontroller to toggle its dedicated Serial Monitor panel and view the active data streams.

---

## Expected Output

### System Behavior
Once the simulation starts, the Master Arduino selects the Slave board, manually shifts out the 8 bits for character '1' over the MOSI line while pulsing the SCK line, and releases the Slave. The Slave polls the bus, collects the bits sequentially, prints the character, and drives **Digital Pin 6 HIGH** to turn on the green LED. One second later, the Master transmits character '0', causing the Slave to turn the LED off.

### Serial Logging
* **Master Serial Monitor Panel:**
  ```text
  --- SPI Master Initialized ---
  Master Sent: 1 (Turn LED ON)
  Master Sent: 0 (Turn LED OFF)

  Slave Serial Monitor Panel:


--- SPI Slave Initialized & Listening ---
------
Slave Received: 1\
Slave Received: 0
---
### Troubleshooting Tips
LED Remains Completely Static
If the Serial Monitors print the text frames perfectly but the physical LED stays dark, check your wire alignment on the bottom board. Ensure your red wire is plugged squarely into Digital Pin 6 (matching the LED_PIN variable) and that the short leg (Cathode) of the LED connects directly to an active GND terminal.
