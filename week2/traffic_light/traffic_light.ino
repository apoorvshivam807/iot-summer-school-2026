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
const unsigned long RED_INTERVAL = 5000;
const unsigned long YELLOW_INTERVAL = 2000;
const unsigned long GREEN_INTERVAL = 4000;
const unsigned long PEDESTRIAN_INTERVAL = 8000;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Internal pull-up to simplify button wiring
  
  Serial.begin(9600);
  previousMillis = millis();
}

void loop() {
  // Framework initialized - baseline state loops processing next
}
