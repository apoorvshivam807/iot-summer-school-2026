/*******************************************************************************
 * File Name:    digital_piano.ino
 * Course:       IoT & Embedded Systems Program (IIT Jammu Summer School 2026)
 * Author:       Apoorv Shivam
 * Description:  Q15 - Digital Piano Keyboard button checking setup.
 *******************************************************************************/

const int NOTE_C4 = 262;
const int NOTE_E4 = 330;
const int NOTE_G4 = 392;

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
  // Check if any button is pressed (LOW indicates a press due to INPUT_PULLUP)
  if (digitalRead(BUTTON_C) == LOW) {
    Serial.println("Key C4 Pressed");
    delay(100); // Simple debounce
  } 
  else if (digitalRead(BUTTON_E) == LOW) {
    Serial.println("Key E4 Pressed");
    delay(100);
  } 
  else if (digitalRead(BUTTON_G) == LOW) {
    Serial.println("Key G4 Pressed");
    delay(100);
  }
}
