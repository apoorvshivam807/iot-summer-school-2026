/*******************************************************************************
 * File Name:    traffic_light.ino
 * Course:       IoT & Embedded Systems Program (IIT Jammu Summer School 2026) [cite: 4, 5]
 * Author:       Apoorv Shivam
 * Description:  Q14 - Non-blocking Traffic Light Controller with Pedestrian Override[cite: 103, 105].
 *******************************************************************************/

const int RED_LED = 12;
const int YELLOW_LED = 11;
const int GREEN_LED = 10;
const int BUTTON_PIN = 7; [cite: 105]

enum TrafficState { STATE_RED, STATE_YELLOW, STATE_GREEN, STATE_PEDESTRIAN };
TrafficState currentState = STATE_RED;

unsigned long previousMillis = 0;
const unsigned long RED_INTERVAL = 5000;       // 5 seconds [cite: 105]
const unsigned long YELLOW_INTERVAL = 2000;    // 2 seconds [cite: 105]
const unsigned long GREEN_INTERVAL = 4000;     // 4 seconds [cite: 105]
const unsigned long PEDESTRIAN_INTERVAL = 8000;  // 8 seconds [cite: 105]

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP); [cite: 105]
  
  Serial.begin(9600);
  previousMillis = millis();
  updateLEDs();
}

void loop() {
  unsigned long currentMillis = millis();

  // Check for Pedestrian Button Press [cite: 105]
  if (digitalRead(BUTTON_PIN) == LOW && currentState != STATE_PEDESTRIAN) {
    currentState = STATE_PEDESTRIAN;
    previousMillis = currentMillis; 
    Serial.print("["); Serial.print(currentMillis); Serial.println("] EVENT: Button Pressed! FORCING RED."); [cite: 105, 106]
    updateLEDs();
    delay(250); 
  }

  switch (currentState) {
    case STATE_RED:
      if (currentMillis - previousMillis >= RED_INTERVAL) {
        currentState = STATE_YELLOW;
        previousMillis = currentMillis;
        Serial.print("["); Serial.print(currentMillis); Serial.println("] STATE: YELLOW"); [cite: 106]
        updateLEDs();
      }
      break;

    case STATE_YELLOW:
      if (currentMillis - previousMillis >= YELLOW_INTERVAL) {
        currentState = STATE_GREEN;
        previousMillis = currentMillis;
        Serial.print("["); Serial.print(currentMillis); Serial.println("] STATE: GREEN"); [cite: 106]
        updateLEDs();
      }
      break;

    case STATE_GREEN:
      if (currentMillis - previousMillis >= GREEN_INTERVAL) {
        currentState = STATE_RED;
        previousMillis = currentMillis;
        Serial.print("["); Serial.print(currentMillis); Serial.println("] STATE: RED"); [cite: 106]
        updateLEDs();
      }
      break;

    case STATE_PEDESTRIAN:
      if (currentMillis - previousMillis >= PEDESTRIAN_INTERVAL) {
        currentState = STATE_RED; 
        previousMillis = currentMillis;
        Serial.print("["); Serial.print(currentMillis); Serial.println("] STATE: TIMEOUT. Returning to RED."); [cite: 105, 106]
        updateLEDs();
      }
      break;
  }
}

void updateLEDs() {
  if (currentState == STATE_RED || currentState == STATE_PEDESTRIAN) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
  } 
  else if (currentState == STATE_YELLOW) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
  } 
  else if (currentState == STATE_GREEN) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
  }
}
