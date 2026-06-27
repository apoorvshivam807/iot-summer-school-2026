## Project Title
Smart Street Light System using LDR Sensor Threshold

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Algorithm

_First, initialize the system by setting Pin 2 (the LED) as an OUTPUT and Pin A0 (the LDR) as an INPUT. Next, open serial communication at a baud rate of 9600 to view data on the monitor. Read the analog data coming from the LDR pin and save it inside a variable named LDR_value. Print this current LDR_value to the Serial Monitor to observe the light levels. Check the condition: if the LDR_value is less than or equal to 300, send a HIGH signal to the LED pin to turn the light on. Otherwise, send a LOW signal to the LED pin to keep the light turned off. Repeat the process of reading values and adjusting the light continuously._
---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week1 smart street light directory structure`
* **Details:** This version sets up the initial working directory paths for the smart lighting automation log module on GitHub.

### Step 2: Full Implementation
* **Version Name:** `feat: implement smart street light LDR analog threshold control logic`
* **Details:** This final version deploys the complete conditional execution sketch in smart_street_light.ino, monitoring LDR values on analog input Pin A0 to automate Pin 2 LED state controls.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/5DLwIjBzzy0-smartstreetlight?sharecode=Hygg_xLA1q0nx3iDh0e93EpykX2tPyMa-6WZ8Yk3k70]

---

## Project Screenshots

### Screenshot
<img width="1915" height="912" alt="Screenshot 2026-06-27 185543" src="https://github.com/user-attachments/assets/4a7958e7-bce4-4ead-9cab-2947a7f1b32b" />



### Serial Monitor Output Screenshot
<img width="1918" height="905" alt="Screenshot 2026-06-27 185610" src="https://github.com/user-attachments/assets/813956d4-eaff-4394-b8a0-743e5ffda30e" />
<img width="1916" height="910" alt="Screenshot 2026-06-27 185558" src="https://github.com/user-attachments/assets/73dcfb5f-60f2-4588-bd34-ad3e7f795867" />

---

## Hardware Required

### List of Components
* One Arduino UNO board
* One Photoresistor (LDR Sensor)
* One LED (Street Light Indicator)
* One 220 ohm Resistor (LED Current Limiter)
* One 10k ohm Resistor (LDR Voltage Divider setup)
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### Power Connections
The breadboard power rails link directly to the Arduino interface. A red wire connects the 5V pin to the positive rail, and a black wire connects the GND pin to the negative rail.

### Potentiometer Wiring
Note that a potentiometer is not utilized in this project module layout configuration.

### LED and Resistor Wiring
The LED serves as our automated output indicator. The short negative cathode leg connects through a 220 ohm resistor down to the ground rail, while the long positive anode leg paths directly back to Digital Pin 2. The LDR sensor forms a voltage divider network with a 10k ohm resistor tied to Ground, routing its variable midpoint junction straight to Analog Pin A0.

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
Once active, the microcontroller samples ambient light vectors using the LDR sensor. When the sensor environment is obscured (dropping LDR value data to 300 or lower), the controller fires Digital Pin 2 HIGH to activate the street light indicator. When lighting values scale above 300, the pin triggers LOW to cut system load overhead.

### Serial Logging
The system continuously streams raw raw analog values down to your screen monitor. The tracking output displays sequential data matching this structure:
`245`
`580`

---

## Troubleshooting Tips

### Serial Monitor Issues
If you see unreadable characters or weird question marks scrolling on your screen, your connection speeds are misaligned. Make sure your Serial Monitor window speed setting matches your code configuration.

### Inverted Lighting Logic
If your LED activates during bright environments instead of darkness, your conditional operators are flipped or your voltage divider rails are reversed. Ensure your code checks for values less than or equal to 300.

### Fixed Sensor Stuck Values
If your sensor logs remain completely flat despite lighting adjustments, check your fixed 10k ohm resistor ground links. Ensure the raw analog junction cleanly splits back to pin A0 without open loops.
