
const int SS_PIN = 10;
const int MOSI_PIN = 11;
const int SCK_PIN = 13;

void setup() {
  Serial.begin(9600);
  pinMode(SS_PIN, OUTPUT);
  pinMode(MOSI_PIN, OUTPUT);
  pinMode(SCK_PIN, OUTPUT);
  
  digitalWrite(SS_PIN, HIGH);
  digitalWrite(SCK_PIN, LOW);
  delay(500);
  Serial.println("--- SPI Master Initialized ---");
}

void sendCharacter(char data) {
  // Select the slave
  digitalWrite(SS_PIN, LOW);
  delay(10);
  
  // Shift out 8 bits manually
  for (int i = 7; i >= 0; i--) {
    int bitValue = (data >> i) & 1;
    digitalWrite(MOSI_PIN, bitValue);
    delay(10);
    
    // Pulse the clock high, then low
    digitalWrite(SCK_PIN, HIGH);
    delay(10);
    digitalWrite(SCK_PIN, LOW);
    delay(10);
  }
  
  // Deselect the slave
  digitalWrite(SS_PIN, HIGH);
}

void loop() {
  sendCharacter('1');
  Serial.println("Master Sent: 1 (Turn LED ON)");
  delay(1000);
  
  sendCharacter('0');
  Serial.println("Master Sent: 0 (Turn LED OFF)");
  delay(1000);
}
