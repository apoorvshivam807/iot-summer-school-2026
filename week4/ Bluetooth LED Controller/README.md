# Bluetooth LED Controller 

This project demonstrates how to control three LEDs (Red, Green, Blue) wirelessly from an Android phone using an HC-05 Bluetooth module and an Arduino. Commands are sent via a Bluetooth terminal app to turn individual LEDs on, turn them all off, or flash them in a sequence.

## Student Details
**Student Name:** Apoorv Shivam

## Directory Structure
Ensure your code is uploaded to the correct directory:
`/week4/bt_led_control/`

## Hardware Requirements
*   Arduino Uno (or compatible)
*   HC-05 Bluetooth Module
*   3x LEDs (1 Red, 1 Green, 1 Blue) or 1x RGB LED
*   3x 220Ω Resistors (for LEDs)
*   Jumper Wires & Breadboard
*   Android Smartphone with a Bluetooth Terminal App (e.g., "Serial Bluetooth Terminal")

## Circuit Connections

### HC-05 Bluetooth Module
*   **VCC:** 5V on Arduino
*   **GND:** GND on Arduino
*   **TXD:** Pin 10 on Arduino (Software RX)
*   **RXD:** Pin 11 on Arduino (Software TX) 
*(Note: It is recommended to use a voltage divider for the HC-05 RX pin as it operates at 3.3V logic, though direct connection often works for quick testing).*

### LEDs
*   **Red LED Anode (+):** Pin 2
*   **Green LED Anode (+):** Pin 3
*   **Blue LED Anode (+):** Pin 4
*   **LED Cathodes (-):** Connect to GND through 220Ω resistors.

## Bluetooth Pairing Instructions

To control the LEDs, you must first pair your Android device with the HC-05 module:

1. Power on the Arduino (this will power the HC-05 module; the LED on the module should blink rapidly).
2. On your Android phone, go to **Settings > Bluetooth** and turn it on.
3. Scan for new devices and look for **HC-05**.
4. Tap to pair. When prompted for a PIN, enter the default PIN: 
   **`1234`** or **`0000`**.
5. Once paired, download and open a Bluetooth terminal app from the Play Store (e.g., "Serial Bluetooth Terminal").
6. Inside the app, navigate to Devices, select your paired **HC-05**, and connect. (The HC-05 LED should change to a slower blink or solid light once connected).

## Command Reference

Once connected to the terminal app, type the following commands (case-insensitive) and hit send to control the LEDs:

| Command | Action |
| :---: | :--- |
| **`R`** | Turn Red LED **ON** (Green & Blue OFF) |
| **`G`** | Turn Green LED **ON** (Red & Blue OFF) |
| **`B`** | Turn Blue LED **ON** (Red & Green OFF) |
| **`X`** | Turn All LEDs **OFF** |
| **`F`** | **Flash** all LEDs 5 times (300ms intervals) |

## How to Run
1. Assemble the circuit according to the connections above.
2. Open the `.ino` file in the Arduino IDE.
3. Select your Arduino board and COM port.
4. Upload the code to the Arduino. *(Tip: Because we are using SoftwareSerial on pins 10 and 11, you do not need to disconnect the Bluetooth module while uploading!)*
5. Pair your phone, connect via the terminal app, and start sending commands.
