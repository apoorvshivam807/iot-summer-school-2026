## Project Title
Serial Command Interface LED Controller

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Starter Code
* **Version Name:** `feat: initialize serial communication protocols and command strings`
* **Details:** This initial version sets up the digital output configuration for Pin 13, opens the 9600 baud serial rate, and establishes the basic global string structures to hold terminal command strings.

### Step 2: Version 1.0
* **Version Name:** `feat: build serial stream parsing logic to capture incoming characters`
* **Details:** This version builds the iterative buffer parsing logic using continuous stream polling loops to check for active incoming characters on the internal hardware data bus.

### Step 3: Version 1.1
* **Version Name:** `feat: implement conditional command validation for ON and OFF states`
* **Details:** This version integrates structural conditional branching statements to check parsed terminal string buffers against raw text inputs.

### Step 4: Version 1.2
* **Version Name:** `final working code`
* **Details:** This finalized version optimizes the data capture engine by integrating robust stream reading functions, fixing terminal processing execution, and stabilizing case-insensitive string parsing.
---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/3hdVK27lqWG-serialinterference?sharecode=VQl5OAqwKr_wPAkqQ6QMtP2wh4LEhQwvDJYUcHd-uPU]

---

## Project Screenshots

### Screenshot
<img width="1163" height="912" alt="Screenshot 2026-06-27 181159" src="https://github.com/user-attachments/assets/54a213fd-c032-48b8-9cc4-a92b9ee8c072" />


### Serial Monitor Output Screenshot
<img width="1917" height="906" alt="Screenshot 2026-06-27 181153" src="https://github.com/user-attachments/assets/ff41cfe6-99bc-484a-baea-1b614a819eab" />
<img width="1918" height="906" alt="Screenshot 2026-06-27 181213" src="https://github.com/user-attachments/assets/47adfb47-9076-44e3-938a-247eae25888d" />


---

## Hardware Required

### List of Components
* One Arduino UNO board
* One LED
* One 220 ohm Resistor
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### Power Connections
The breadboard power rails are connected directly to the Arduino board. A red wire links the 5V pin to the positive rail, and a black wire links the GND pin to the negative rail.

### Potentiometer Wiring
Note that a potentiometer is not utilized in this project module layout configuration.

### LED and Resistor Wiring
The LED serves as our physical output status indicator. The straight negative cathode leg connects through a 220 ohm resistor down to the ground rail, while the long positive anode leg routes straight back into digital output pin 13.

---

## How to Upload Code

### Tinkercad Simulation Process
1. Open your web browser and navigate to your active Tinkercad Circuits workspace.
2. Select your circuit design and click on the Code button located in the top-right toolbar.
3. Switch the editor interface dropdown from Blocks to Text and click continue.
4. Paste the specific version code into the editor window and click Start Simulation to run the virtual hardware.
5. Click the Serial Monitor tab at the bottom of the code panel to view live runtime logging data.

### Arduino IDE Desktop Application Process
1. Connect your physical Arduino UNO board to your laptop using a standard USB interface cable.
2. Launch your desktop Arduino IDE application and open a clean sketch window.
3. Copy the complete finalized source code from your GitHub repository file and paste it directly into the IDE editor.
4. Navigate to the top menu toolbar, select Tools, hover over Board, and select Arduino UNO.
5. Go back to Tools, hover over Port, and click on the active COM Port matching your plugged-in board.
6. Click the Verify icon in the top-left corner to compile your code and check for errors.
7. Click the Upload icon right next to it to flash the firmware directly into your microcontroller.
8. Open the Serial Monitor tool by clicking the magnifying glass icon in the top right corner, and verify that the speed dropdown menu is set to 9600 baud.

---

## Expected Output

### System Behavior
Once running, the microcontroller idles while monitoring the serial connection. Typing the uppercase or lowercase command string ON instantly sets digital Pin 13 to HIGH, lighting up the LED. Typing the command string OFF cuts power to the pin, instantly turning the LED indicator light off.

### Serial Logging
The system continuously prints active timing states to your console panel interface. The output displays timestamp strings following this explicit configuration structure showing system uptime brackets.

---

## Troubleshooting Tips

### Serial Monitor Issues
If you see unreadable characters or weird question marks scrolling on your screen, your connection speeds are misaligned. Make sure your Serial Monitor window speed setting matches your code configuration.

### LED Hardware Failures
If your LED remains completely dark, it might be plugged in backward since current only moves one way through it. Confirm that the longer leg is wired directly to your designated digital output pins.

### Command Execution Failures
If the terminal returns error logs for valid entries, ensure trailing whitespace or hidden carriage return strings are wiped. Utilizing the built-in trim function handles data filtering cleanly.
