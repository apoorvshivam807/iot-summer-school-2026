
// Hardware Pin Definitions
const int RED_LED = 12;
const int YELLOW_LED = 11;
const int GREEN_LED = 10;
const int BUTTON_PIN = 7;

// State Tracking Enumeration
enum TrafficState { STATE_RED, STATE_YELLOW, STATE_GREEN, STATE_PEDESTRIAN };
TrafficState currentState = STATE_RED;

// Timing Configurations (in milliseconds)
unsigned long previousMillis = 0;
const unsigned long RED_INTERVAL = 5000;       // 5 seconds
const unsigned long YELLOW_INTERVAL = 2000;    // 2 seconds
const unsigned long GREEN_INTERVAL = 4000;     // 4 seconds
const unsigned long PEDESTRIAN_INTERVAL = 8000;  // 8 seconds

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Uses internal resistor, button ground active
  
  Serial.begin(9600);
  previousMillis = millis();
  
  // Print initial state
  Serial.print("["); Serial.print(millis()); Serial.println("] STATE: RED (Initial Setup)");
  updateLEDs();
}

void loop() {
  unsigned long currentMillis = millis();

  // Check for Pedestrian Button Press (LOW means pressed due to INPUT_PULLUP)
  if (digitalRead(BUTTON_PIN) == LOW && currentState != STATE_PEDESTRIAN) {
    currentState = STATE_PEDESTRIAN;
    previousMillis = currentMillis; // Reset timer for the 8-second pedestrian hold
    Serial.print("["); Serial.print(currentMillis); Serial.println("] EVENT: Pedestrian Button Pressed! FORCING RED.");
    updateLEDs();
    delay(250); // Simple debounce to prevent register double-clicks
  }

  // Handle standard time-slice state transitions
  switch (currentState) {
    case STATE_RED:
      if (currentMillis - previousMillis >= RED_INTERVAL) {
        currentState = STATE_YELLOW;
        previousMillis = currentMillis;
        Serial.print("["); Serial.print(currentMillis); Serial.println("] STATE: YELLOW");
        updateLEDs();
      }
      break;

    case STATE_YELLOW:
      if (currentMillis - previousMillis >= YELLOW_INTERVAL) {
        currentState = STATE_GREEN;
        previousMillis = currentMillis;
        Serial.print("["); Serial.print(currentMillis); Serial.println("] STATE: GREEN");
        updateLEDs();
      }
      break;

    case STATE_GREEN:
      if (currentMillis - previousMillis >= GREEN_INTERVAL) {
        currentState = STATE_RED;
        previousMillis = currentMillis;
        Serial.print("["); Serial.print(currentMillis); Serial.println("] STATE: RED");
        updateLEDs();
      }
      break;

    case STATE_PEDESTRIAN:
      if (currentMillis - previousMillis >= PEDESTRIAN_INTERVAL) {
        currentState = STATE_RED; // Return to standard RED sequence loop
        previousMillis = currentMillis;
        Serial.print("["); Serial.print(currentMillis); Serial.println("] STATE: PEDESTRIAN OVERRIDE TIMEOUT. Returning to RED.");
        updateLEDs();
      }
      break;
  }
}

// Helper Function to handle physical LED transitions cleanly
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
