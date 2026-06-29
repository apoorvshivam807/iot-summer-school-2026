// Pin Definitions
const int BUTTON_PIN = 4;
const int LED_PIN = 15;

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
  
  // Initialize the button pin with an internal pull-up resistor.
  // This keeps the pin HIGH when unpressed, and pulls it LOW when pressed.
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // Read the state of the push button
  int buttonState = digitalRead(BUTTON_PIN);

  // Since INPUT_PULLUP reverses the logic, LOW means the button is pressed
  if (buttonState == LOW) {
    // Blink effect while the button is held down
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
    delay(200);
  } else {
    // Ensure the LED stays off when the button is released
    digitalWrite(LED_PIN, LOW);
  }
}
