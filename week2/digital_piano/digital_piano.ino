/*******************************************************************************
 * File Name:    digital_piano.ino
 * Course:       IoT & Embedded Systems Program (IIT Jammu Summer School 2026)
 * Author:       Apoorv Shivam
 * Description:  Q15 - Digital Piano Keyboard baseline framework setup.
 * Defines pitch constants and pin configurations.
 *******************************************************************************/

// Define Musical Note Frequencies (in Hz)
const int NOTE_C4 = 262;
const int NOTE_E4 = 330;
const int NOTE_G4 = 392;

// Pin Configurations
const int BUZZER_PIN = 9;
const int BUTTON_C = 4;
const int BUTTON_E = 3;
const int BUTTON_G = 2;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BUTTON_C, INPUT_PULLUP);
  pinMode(BUTTON_E, INPUT_PULLUP);
  pinMode(BUTTON_G, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop() {
  // Base configuration initialized - frequency testing logic comes next
}
