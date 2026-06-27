## Project Title
Digital Piano Keyboard with Audio Tone Control

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Starter Code
* **Version Name:** `docs: create week2 digital piano directory structure`
* **Details:** This version sets up the working directory structure under week2 by initializing the project repository branch.

### Step 2: Version 1.0
* **Version Name:** `feat: initialize pin assignments and note frequency constants for digital piano`
* **Details:** This version maps the input buttons and output buzzer pins while establishing the constant integer values for musical pitches.

### Step 3: Version 1.1
* **Version Name:** `feat: integrate tone and noTone output logic for audio playback`
* **Details:** This finalized version adds audio tone control to play specific frequencies on the buzzer and mutes sound upon release.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/kNa76SkIP4P-digitalpiano?sharecode=0iqIdvQNr4MbgKFIgv_L77_NOByshBt24dZ5Am50vcg]

---

## Project Screenshots

### Screenshot
<img width="1168" height="850" alt="Screenshot 2026-06-27 173747" src="https://github.com/user-attachments/assets/dced14e0-ef77-44c8-a677-d28625571289" />


### Serial Monitor Output Screenshot
<img width="1918" height="922" alt="Screenshot 2026-06-27 173741" src="https://github.com/user-attachments/assets/2682b531-5f5c-4e21-b173-979b3389edf0" />

---

## Hardware Required

### List of Components
* One Arduino UNO board
* One Piezo Buzzer
* Three Pushbuttons
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### Power Connections
The breadboard power rails are connected directly to the Arduino board. A red wire links the 5V pin to the positive rail, and a black wire links the GND pin to the negative rail.

### Potentiometer Wiring
Note that a potentiometer is not utilized in this project module layout configuration.

### LED and Resistor Wiring
Note that LEDs and current-limiting resistors are not utilized in this specific audio circuit layout.

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
Once running, the circuit behaves like a mini electronic musical instrument. Pressing the first button plays note C4 at 262 Hz, the second button plays note E4 at 330 Hz, and the third button plays note G4 at 392 Hz. Releasing all keys instantly terminates audio output to maintain a quiet idle state.

### Serial Logging
The system continuously prints active musical notes to your console panel interface. The output displays timestamp strings following this explicit configuration structure showing system uptime brackets.

---

## Troubleshooting Tips

### Serial Monitor Issues
If you see unreadable characters or weird question marks scrolling on your screen, your connection speeds are misaligned. Make sure your Serial Monitor window speed setting matches your code configuration.

### Buzzer Hardware Failures
If no sound generates during execution, verify the polarity orientation of the buzzer terminals. Ensure the negative pin maps directly to the common ground rail and the positive pin shares a solid path back to Pin 9.

### Pushbutton Failures
If pressing a key plays nothing, ensure that the active signal lines sit on opposite terminal columns across the physical divider break channel. Double-check that your button input uses the internal pull-up resistor framework.
