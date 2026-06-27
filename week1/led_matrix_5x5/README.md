## Project Title
5x5 LED Matrix
---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `feat: create week1 led matrix directory structure`
* **Details:** This version initializes the working directory setup under week1 by establishing the documentation path.

### Step 2: Full Implementation
* **Version Name:** `feat: implement full 5x5 LED matrix alphabet display`
* **Details:** This final version deploys the complete non-blocking multiplexing sketch in `ledmatrix5x5.ino`. It configures a 2D binary font matrix for letters A-Z and executes microsecond row scanning sweeps using bit extraction methods to prevent overlapping ghost artifacts.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/lT2SpR6kMZw-ledmatrix5x5?sharecode=IVDZJACajM1ZU9blA_T99-nDtGiHwrBtuyZcpjO_QWQ]

---

## Project Screenshots

### Screenshot
<img width="1918" height="785" alt="Screenshot 2026-06-27 183513" src="https://github.com/user-attachments/assets/9fbe8f99-98f0-4fd7-b35a-465e362b641a" />
<img width="1577" height="912" alt="Screenshot 2026-06-27 183349" src="https://github.com/user-attachments/assets/5bd25e69-0814-4663-bcea-b6d78253b726" />


---

## Hardware Required

### List of Components
* One Arduino UNO board
* Twenty-Five LEDs (or one integrated 5x5 Matrix shield)
* Five 220 ohm Resistors (on Column lines)
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### Power Connections
The power configurations run directly via active output pins on the microcontroller matrix. Rows serve as high sources while columns link down towards sink rails.

### Potentiometer Wiring
Note that a potentiometer is not utilized in this project module layout configuration.

### LED and Resistor Wiring
The array is wired using a common anode row format. Five 220-ohm resistors protect the column pin sinks, protecting individual junction segments from power spikes during fast sweep cycles.

---

## How to Upload Code

### Tinkercad Simulation Process
1. Open your web browser and navigate to your active Tinkercad Circuits workspace.
2. Select your circuit design and click on the Code button located in the top-right toolbar.
3. Switch the editor interface dropdown from Blocks to Text and click continue.
4. Paste the specific version code into the editor window and click Start Simulation to run the virtual hardware.

### Arduino IDE Desktop Application Process
1. Connect your physical Arduino UNO board to your laptop using a standard USB interface cable.
2. Launch your desktop Arduino IDE application and open a clean sketch window.
3. Copy the complete finalized source code from your GitHub repository file and paste it directly into the IDE editor.
4. Navigate to the top menu toolbar, select Tools, hover over Board, and select Arduino UNO.
5. Go back to Tools, hover over Port, and click on the active COM Port matching your plugged-in board.
6. Click the Verify icon in the top-left corner to compile your code and check for errors.
7. Click the Upload icon right next to it to flash the firmware directly into your microcontroller.

---

## Expected Output

### System Behavior
Once active, the matrix initiates rapid scanning rows, lighting up custom shapes sequentially. The display spells out characters A through Z smoothly for 800ms intervals, executing clean 200ms blank intervals between transitions.

### Serial Logging
Note that serial terminal telemetry reporting functions are not implemented in this version layout block.

---

## Troubleshooting Tips

### Visual Mirroring Errors
If your letters display upside down or backward, your loop indexes or bit tracking orders are reversed. Flipping the bit tracking coordinates easily re-aligns row text sweeps.

### Ghosting Failures
If faint character patterns appear behind active glyph configurations, turn columns completely OFF (HIGH) before switching the row index to ensure complete pixel discharges.
