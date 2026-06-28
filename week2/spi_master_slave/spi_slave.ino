
const int SS_PIN = 10;
const int MOSI_PIN = 11;
const int SCK_PIN = 13;
const int LED_PIN = 6; // Matches your green LED wire pin!

void setup() {
  Serial.begin(9600);
  pinMode(SS_PIN, INPUT);
  pinMode(MOSI_PIN, INPUT);
  pinMode(SCK_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  
  digitalWrite(LED_PIN, LOW);
  delay(500);
  Serial.println("--- SPI Slave Initialized & Listening ---");
}

void loop() {
  // Listen for Master to pull Slave Select LOW
  if (digitalRead(SS_PIN) == LOW) {
    char receivedChar = 0;
    
    // Read 8 bits sequentially
    for (int i = 7; i >= 0; i--) {
      // Wait for clock to go HIGH
      while (digitalRead(SCK_PIN) == LOW) {
        if (digitalRead(SS_PIN) == HIGH) return; // Exit if master aborts
      }
      
      // Read bit value
      int bitValue = digitalRead(MOSI_PIN);
      receivedChar |= (bitValue << i);
      
      // Wait for clock to go LOW again
      while (digitalRead(SCK_PIN) == HIGH);
    }
    
    // Print and execute action
    Serial.print("Slave Received: ");
    Serial.println(receivedChar);
    
    if (receivedChar == '1') {
      digitalWrite(LED_PIN, HIGH);
    } else if (receivedChar == '0') {
      digitalWrite(LED_PIN, LOW);
    }
  }
}
