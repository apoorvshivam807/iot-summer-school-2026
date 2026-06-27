## Project Title
An IoT system contains 4 sensor nodes arranged in rows and columns. Using nested loops, print:

---
### Serial Logging
The system outputs a structured 4x3 node location layout to your console panel interface. The tracking output displays a sequential text pattern matching this exact configuration:\
`Sensor(1,1) Sensor(1,2) Sensor(1,3) `\
`Sensor(2,1) Sensor(2,2) Sensor(2,3) `\
`Sensor(3,1) Sensor(3,2) Sensor(3,3) `\
`Sensor(4,1) Sensor(4,2) Sensor(4,3) `

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week1 sensor matrix directory structure`
* **Details:** This version initializes the working directory setup under week1 by establishing the documentation log path.

### Step 2: Full Implementation
* **Version Name:** `feat: implement nested loop structure to map out sensor array coordinates`
* **Details:** This final version deploys the complete iterative coordinate logic sequence inside sensor_matrix.ino, driving nested multi-index iteration parameters to print a structured coordinate grid pattern directly to the terminal window.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/izt5YiTx5nJ-sensornode?sharecode=G550SzfY8Hmx27LAaHZR8MOuonvJamGLqr77zLVyZ30]

---

## Project Screenshots

### Serial Monitor Output Screenshot
<img width="1918" height="906" alt="Screenshot 2026-06-27 191042" src="https://github.com/user-attachments/assets/bcd399b6-7e04-4bc7-9568-6abeefbbac48" />
<img width="755" height="248" alt="Screenshot 2026-06-27 191054" src="https://github.com/user-attachments/assets/7d341cf5-4273-42fb-8e00-bd8de2dcd0c1" />


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
Upon compilation and initialization inside setup(), the processor steps cleanly through its nested structure to print the matrix configuration. The outer row parameters sync array index fields alongside column constraints, executing a text pattern format once before idling in the main loop block.



## Troubleshooting Tips

### Serial Monitor Issues
If you see unreadable characters or weird question marks scrolling on your screen, your connection speeds are misaligned. Make sure your Serial Monitor window speed setting matches your code configuration.

### Single Line String Printing Pattern
If the printed coordinates run flatly together across one long single string line instead of breaking down into a structured matrix pattern, ensure your outer loop contains the explicit terminal newline printing function (println) outside the scope bounds of your inner loop.

### Index Multiplier Mismatch Output
If coordinate outputs display zero values (e.g., Sensor(0,0)), confirm that your printing lines add the index scaling offsets (+1). Array boundaries start tracking blocks at index position zero, whereas actual spatial grids track coordinates starting at position one.
