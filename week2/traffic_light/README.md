## Project Title
Traffic Light Controller with Pedestrian Override

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Starter Code
* **Version Name:** `feat: create week2 traffic light directory structure`
* **Details:** This version sets up the working directory structure under week2 by initializing the project repository branch.

### Step 2: Version 1.0
* **Version Name:** `feat: initialize pin mapping and state structures for traffic controller`
* **Details:** This version maps the hardware microcontroller pin connections and initializes the system enum array tracking logic.

### Step 3: Version 1.1
* **Version Name:** `feat: add core automated timed state logic for light switching`
* **Details:** This version builds the time-slice transitions using millis to cycle automatically between Red, Yellow, and Green lights.

### Step 4: Version 1.2
* **Version Name:** `feat: integrate pedestrian button override hardware logic`
* **Details:** This finalized version adds the interrupt polling switch loop to immediately trigger an 8-second safety hold on the Red LED.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/iX9nV7P7W3U-trafficlight?sharecode=zloxtKA5b6G7naX5iYS-N8mmyH3A9piGEzHXTXGwLYw

https://www.tinkercad.com/things/1rTgZ12uRfa-trafficlightv2?sharecode=N7OcmTBlC4dqj-rWyX6bol3sqPC5EoRYWZzxGf1ScwU

]

---

## Project Screenshots

### Screenshot
<img width="1918" height="913" alt="Screenshot 2026-06-27 170158" src="https://github.com/user-attachments/assets/e1f20a8b-58cc-4ee5-82a1-bd650d0bdfe2" />

### Serial Monitor Output Screenshot
<img width="1918" height="908" alt="Screenshot 2026-06-27 170943" src="https://github.com/user-attachments/assets/9c4bd210-781f-40fd-95ff-673dc9245074" />
<img width="1918" height="915" alt="Screenshot 2026-06-27 170311" src="https://github.com/user-attachments/assets/12ecc13c-c22e-4243-a13d-9ff5d86af34b" />


---

## Hardware Required

### List of Components
* One Arduino UNO board 
* One Pushbutton 
* One Red LED 
* One Yellow LED 
* One Green LED 
* Three 220 ohm Resistors 
* One Breadboard and Jumper wires 

---

## Circuit Diagram Description

### Power Connections
The breadboard power rails are connected directly to the Arduino board. A red wire links the 5V pin to the positive rail, and a black wire links the GND pin to the negative rail.

### Potentiometer Wiring
Note that a potentiometer is not utilized in this project module layout configuration.

### LED and Resistor Wiring
The three LEDs serve as visual indicators for the traffic lights. Each LED's straight negative leg connects through an independent 220 ohm resistor down to the common ground rail, while their respective long positive legs connect to digital output pins 12, 11, and 10.

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
Once running, the system stays locked inside a timed loop advancing automatically through standard intervals: Red for 5 seconds, Yellow for 2 seconds, and Green for 4 seconds. Whenever the push button on Pin 7 is tapped, the sequence instantly breaks its existing track, illuminating the Red LED immediately for a continuous 8-second pedestrian clear safety interval before resuming normal cycles.

### Serial Logging
The system continuously prints active timing states to your console panel interface. The output displays timestamp strings following this explicit configuration structure showing system uptime brackets.

---

## Troubleshooting Tips

### Serial Monitor Issues
If you see unreadable characters or weird question marks scrolling on your screen, your connection speeds are misaligned. Make sure your Serial Monitor window speed setting matches your code configuration.

### LED Hardware Failures
If your LED remains completely dark, it might be plugged in backward since current only moves one way through it. Confirm that the longer leg is wired directly to your designated digital output pins.

### Pushbutton Failures
If the button fails to break standard cycles, ensure that the active signal lines sit on opposite terminal columns across the physical divider break channel. Double-check that your button input uses the internal pull-up resistor framework.
