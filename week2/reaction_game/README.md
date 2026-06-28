## Project Title
Interactive Hardware Reaction Time Game 

Design and build a Reaction Time Game using an Arduino, 3 LEDs, and 1 push button.
When the game starts, the three LEDs should blink in a random order and stay ON for random durations to create an unpredictable waiting period. After the random LED sequence is completed, the green LED should turn ON as the signal for the player to react.
The player must press the push button as quickly as possible after the green LED lights up.

The Arduino should measure the player's reaction time and display the result in milliseconds (ms) on the Serial Monitor.

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week2 reaction game directory structure`
* **Details:** This version sets up the initial repository paths for the gaming control module on GitHub.

### Step 2: Full Implementation
* **Version Name:** `feat: implement 3-LED reaction time game logic with random delay pacing`
* **Details:** This final version deploys the complete interactive layout sketch in reaction_game.ino, compiling automated floating bitwise seeds via analog input A0 to randomize hardware behavior patterns.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/5ILtFLmsWjJ-reactiongame?sharecode=acFujHwdnQwXH2QHH9Fl6brpdQ4s1ZHyIm_IfHXiNFM]

---

## Project Screenshots

### Circuit Layout Overview
<img width="1918" height="907" alt="Screenshot 2026-06-28 141831" src="https://github.com/user-attachments/assets/9089ed3f-80d1-4f3b-afeb-1232929ee2ff" />


### Serial Monitor Output Logs
<img width="1918" height="907" alt="Screenshot 2026-06-28 141927" src="https://github.com/user-attachments/assets/34a22790-f30b-46e3-9a8f-553a13ce6b12" />


---

## Hardware Required

### List of Components
* One Arduino UNO board
* One Red LED
* One Yellow LED
* One Green LED
* Three 220 ohm Resistors (LED protectors)
* One Push Button
* One 10k ohm Resistor (Button pull-down configuration)
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### LED Wiring Profiles
Three signaling components link directly across digital pins:
* **Red LED Anode:** Paths to **Digital Pin 2**.
* **Yellow LED Anode:** Paths to **Digital Pin 3**.
* **Green LED Anode:** Paths to **Digital Pin 4**.
* All cathodes route through individual 220 ohm resistors down to the common Ground rail.

### Input Push Button Assembly
The player interaction switch is configured using a standard pull-down design:
* One side connects directly to the **5V** power rail.
* The opposite terminal interfaces directly with **Digital Pin 13**, while simultaneously routing through a 10k ohm resistor to **GND** to keep the logic line from floating during idle intervals.

---

## How to Upload Code

### Tinkercad Simulation Process
1. Open your web browser and navigate to your active Tinkercad Circuits workspace.
2. Select your circuit design and click on the Code button located in the top-right toolbar.
3. Switch the editor interface dropdown from Blocks to Text and click continue.
4. Paste the specific version code into the editor window and click Start Simulation to run the virtual hardware.
5. Open the Serial Monitor window block inside the bottom tray to track your reaction speeds.

### Arduino IDE Desktop Application Process
1. Connect your physical Arduino UNO board to your laptop using a standard USB interface cable.
2. Launch your desktop Arduino IDE application and open a clean sketch window.
3. Copy the complete finalized source code from your GitHub repository file and paste it directly into the IDE editor.
4. Navigate to Board manager to pick **Arduino UNO** and establish the correct connected **COM Port**.
5. Compile and verify the file structure, then upload the image to register live firmware assets.

---

## Expected Output

### System Behavior
When the game loop initializes, all three LEDs blink together once for 400ms. The system then enters a pseudo-random "chaos" phase lasting between 2 to 5 seconds, rapidly flashing the lights to keep the player on edge. Once the waiting window closes, all lights turn off and the green LED turns on instantly. The code freezes right there until it detects a button push on Pin 13, clears the green light, and prints the precise runtime measurement in milliseconds.

### Serial Logging
The tracking output displays live timestamp arrays updating after every button press configuration:
`Your response time: 242 miliseconds`
`Your response time: 185 miliseconds`

---

## Troubleshooting Tips

### Unbelievably Low Scores (0ms to 5ms)
If the console constantly logs tiny reaction values despite no rapid action, your push button is wired in an active-low state or missing its 10k ohm pull-down link. Ensure the pin maps cleanly to ground through the resistor so it doesn't float into an immediate false HIGH state.

### Predictable Patterns Between Reboots
If the sequence patterns and flashing intervals follow the exact same timing sequence every single time you click start, check your `randomSeed()` configuration inside setup(). Pin **A0** must remain completely open and empty with no jumper lines attached so it picks up background atmospheric electrical noise to randomize the numbers.
