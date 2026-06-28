## Project Title
I2C Liquid Crystal Display (16x2) Protocol Interfacing

---

## Student Details
**Student Name:** Apoorv Shivam  

---

## Development Version Sequence

### Step 1: Baseline Architecture
* **Version Name:** `docs: create week2 i2c lcd display directory structure`
* **Details:** This version sets up the initial working directory layout paths for the serial bus peripheral module on GitHub.

### Step 2: Full Implementation
* **Version Name:** `feat: implement I2C liquid crystal display initialization and hello world print`
* **Details:** This final version deploys the complete functional sketch in i2c_lcd.ino, linking the external Adafruit LiquidCrystal device class matrix to coordinate communication over dedicated bus pins.

---

## 🔗 Project Links
* **Live Tinkercad Link:** [https://www.tinkercad.com/things/42oBbgwnmA3-i2clcd?sharecode=VGW0C_YlwzNggWKMkEGRHYh5UgmsZPgC4J5z0PmNwG8]

---

## Project Screenshots

### Screenshot
<img width="1918" height="905" alt="Screenshot 2026-06-28 132759" src="https://github.com/user-attachments/assets/b34270db-1412-4be4-b45c-38d4af81680c" />
<img width="1918" height="917" alt="Screenshot 2026-06-28 132810" src="https://github.com/user-attachments/assets/1c27c434-376e-4a3f-bc70-415968689de0" />


---

## Hardware Required

### List of Components
* One Arduino UNO board
* One 16x2 Liquid Crystal Display (LCD) equipped with an PCF8574 I2C Backpack adapter
* One Breadboard and Jumper wires

---

## Circuit Diagram Description

### Power Connections
The breadboard common power distribution lines connect directly to the Arduino board. A red wire connects the 5V pin to the positive rail, and a black wire connects the GND pin to the negative rail. These lines connect directly to the LCD's **VCC** and **GND** power terminal locations.

### Potentiometer Wiring
Note that a separate analog potentiometer component is not required for manual pin-contrast tuning, as the integrated I2C backpack handles screen electrical adjustments directly.

### I2C Serial Data Bus Wiring
The Inter-Integrated Circuit (I2C) communication framework uses only two shared serial bus lines to manage all display segments:
* **SDA (Serial Data Line):** Connects from the LCD backpack directly to Arduino Analog Input **Pin A4** (or the dedicated SDA pin near Pin 13).
* **SCL (Serial Clock Line):** Connects from the LCD backpack directly to Arduino Analog Input **Pin A5** (or the dedicated SCL pin near Pin 13).

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
3. Open the Library Manager panel (Ctrl+Shift+I), search for `Adafruit LiquidCrystal`, and click install.
4. Copy the complete finalized source code from your GitHub repository file and paste it directly into the IDE editor.
5. Navigate to the top menu toolbar, select Tools, hover over Board, and select Arduino UNO.
6. Go back to Tools, hover over Port, and click on the active COM Port matching your plugged-in board.
7. Click the Verify icon in the top-left corner to compile your code and check for errors.
8. Click the Upload icon right next to it to flash the firmware directly into your microcontroller.

---

## Expected Output

### System Behavior
Upon compilation and initialization inside setup(), the microcontroller opens the I2C address bus and establishes communication with the screen controller. The screen's backlight illuminates immediately, and the display cleanly outputs the string message "hello world" across the top character column row segment.

### Serial Logging
Note that serial terminal debugging logs are not implemented in this specific visual peripheral display module layout.

---

## Troubleshooting Tips

### Completely Blank Screen (Missing Text)
If the screen backlight shines bright but no text characters appear on the panel grid, the contrast settings are misaligned. On physical hardware, take a small screwdriver and gently twist the tiny potentiometer dial on the back of the I2C backpack until the text pixels display cleanly.

### Compilation Error: Library Missing
If the code returns errors like `Adafruit_LiquidCrystal.h: No such file or directory`, your local computer environment is missing the core sensor header definitions. Ensure you install the official library through the Arduino IDE Library Manager before compilation.

### Mismatched Device Address Logs
If the code uploads successfully but the screen shows random block segments or refuses to print, your chip's hardcoded I2C tracking address might be mismatched. Changing the object initialization value from `0` to the standard device factory profile addresses (like `0x27` or `0x3F`) will instantly restore data lines.
