## Project Title
LED Blink

---

## Student Details
**Student Name:** Apoorv Shivam 


## Development Version Sequence

### Step 1: Starter Code

* **Version Name:** `feat: add LED blink starter code`
* **Details:** This version runs a basic digital output script on Pin 13 at a standard 1000ms delay interval.

### Step 2: Version 1.0

* **Version Name:** `feat: v1.0 - change LED blink interval to 500ms`
* **Details:** This version reduces the time execution loop down to a tight 500ms interval to double the flashing frequency.

### Step 3: Version 1.1

* **Version Name:** `feat: v1.1 - add serial print tracking for blink count`
* **Details:** This version opens a 9600 baud serial interface to print the total execution count down the tracking monitor.

### Step 4: Version 1.2

* **Version Name:** `feat: v1.2 - read a potentiometer to control blink speed`
* **Details:** This version links a 10k ohm potentiometer on Pin A0 to pass raw analog values directly into the millisecond timing loops.

### Step 5: Version 1.3

* **Version Name:** `docs: v1.3 - add professional comment header block`
* **Details:** This final version adds a formalized engineering header containing the author attributes, date, and core code descriptions.

## 🔗 Project Links

* **Live Tinkercad Link Step 1 (Starter):** [https://www.tinkercad.com/things/68bBu42b1bd-week1start?sharecode=WLkR7bjPWespUeLswM2LNWWoYRW2ZyZzGEkLW8rEhP0](https://www.tinkercad.com/things/68bBu42b1bd-week1start?sharecode=WLkR7bjPWespUeLswM2LNWWoYRW2ZyZzGEkLW8rEhP0)
* **Live Tinkercad Link Step 2 (v1.0):** [https://www.tinkercad.com/things/kpmjXyGpbgN-week1v0?sharecode=WEbetGgLg7nhprRBxfxcmF4OrKIsQ78ul_REaeR55Ko](https://www.tinkercad.com/things/kpmjXyGpbgN-week1v0?sharecode=WEbetGgLg7nhprRBxfxcmF4OrKIsQ78ul_REaeR55Ko)
* **Live Tinkercad Link Step 3 (v1.1):** [https://www.tinkercad.com/things/ffJVPuiMM29-week1v1?sharecode=XHZbpZWA7ZNntyCqm1ChiM82qPAaV3x-5l6tzoKCKo8](https://www.tinkercad.com/things/ffJVPuiMM29-week1v1?sharecode=XHZbpZWA7ZNntyCqm1ChiM82qPAaV3x-5l6tzoKCKo8)
* **Live Tinkercad Link Step 4 (v1.2 ):** [https://www.tinkercad.com/things/1GMPt1s3OHM-week1v2?sharecode=bknZGdb-3goMCaAh3LS_gjW_DSsxS5OUcRlbl-M3KBI](https://www.tinkercad.com/things/1GMPt1s3OHM-week1v2?sharecode=bknZGdb-3goMCaAh3LS_gjW_DSsxS5OUcRlbl-M3KBI)

---

## Project Screenshots

### Screenshot
<img width="1918" height="911" alt="Screenshot 2026-06-27 155257" src="https://github.com/user-attachments/assets/662138ee-b55a-4be6-8fa9-3b990d3ee44f" />
<img width="1918" height="917" alt="Screenshot 2026-06-27 154737" src="https://github.com/user-attachments/assets/cc9f4690-f2b2-48fd-b818-7c38b59ab9ca" />


### Serial Monitor Output Screenshot
<img width="1918" height="913" alt="Screenshot 2026-06-27 155930" src="https://github.com/user-attachments/assets/6ebae50e-bdbb-4db5-b8f8-262ae67f509d" />
<img width="1918" height="907" alt="Screenshot 2026-06-27 155606" src="https://github.com/user-attachments/assets/ae3ec59b-a821-494d-83ef-b1cfd9b5dd3b" />



---

## Hardware Required

### List of Components

* One Arduino UNO board 


* One 10k ohm Potentiometer 


* One Red LED 


* One 220 ohm Resistor 


* One Breadboard and Jumper wires 



---

## Circuit Diagram Description

### Power Connections

The breadboard power rails are connected directly to the Arduino board. A red wire links the 5V pin to the positive rail, and a black wire links the GND pin to the negative rail.

### Potentiometer Wiring

The potentiometer is mounted onto the breadboard to supply variable analog voltage. Terminal 1 connects to the ground rail, Terminal 2 connects to the 5V power rail, and the middle wiper pin routes straight to Analog Input pin A0.

### LED and Resistor Wiring

The LED serves as our physical output indicator indicator. The long positive leg connects directly to Arduino Digital Pin 13, while the short negative leg connects through a 220 ohm resistor down to the ground rail.

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
2. Launch your desktop **Arduino IDE** application and open a clean sketch window.
3. Copy the complete finalized source code from your GitHub repository file and paste it directly into the IDE editor.
4. Navigate to the top menu toolbar, select **Tools**, hover over **Board**, and select **Arduino UNO**.
5. Go back to **Tools**, hover over **Port**, and click on the active **COM Port** matching your plugged-in board.
6. Click the **Verify** icon (checkmark button) in the top-left corner to compile your code and check for errors.
7. Click the **Upload** icon (right arrow button) right next to it to flash the firmware directly into your microcontroller.
8. Open the **Serial Monitor** tool by clicking the magnifying glass icon in the top right corner, and verify that the speed dropdown menu is set to **9600 baud**.
## Expected Output

### System Behavior

Once running, the LED will flash at a speed dictated completely by the position of your potentiometer dial. Rotating the dial to one side lowers the internal interval delay, forcing the LED to flash rapidly like a strobe. Rotating the dial to the opposite side extends the internal delay to full 1-second gaps, which slows down the blinking rate noticeably.

### Serial Logging

The system continuously logs data to your terminal while running. The Serial Monitor panel will display a rolling text log showing your current total blink count alongside your live potentiometer interval value.

---

## Troubleshooting Tips

### Serial Monitor Issues

If you see unreadable characters or weird question marks scrolling on your screen, your connection speeds are misaligned. Make sure your Serial Monitor window speed setting matches your code configuration.

### LED Hardware Failures

If your LED remains completely dark, it might be plugged in backward since current only moves one way through it. Confirm that the longer leg is wired directly to digital output pin 13.

### Potentiometer Failures

If turning the knob changes nothing, your analog input layout is loose or mapped incorrectly. Check your connection paths to ensure the center wire feeds clean data straight to Analog Pin A0.
