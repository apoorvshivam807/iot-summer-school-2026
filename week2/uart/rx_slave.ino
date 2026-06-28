const int RX_PIN = 2;    
const int LED_PIN = 13; 

void setup() {
  pinMode(RX_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int incomingSignal = digitalRead(RX_PIN);
  
  if (incomingSignal == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);  
  }
}
