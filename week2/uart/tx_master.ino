
const int BUTTON_PIN = 2; 
const int TX_PIN = 3;      

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(TX_PIN, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);
  
  if (buttonState == HIGH) {
    digitalWrite(TX_PIN, HIGH); 
  } else {
    digitalWrite(TX_PIN, LOW);  
  }
}
