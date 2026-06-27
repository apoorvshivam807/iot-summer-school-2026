int blinkCount = 0; // Variable to keep track of the blink count

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600); // Initialize serial communication at 9600 bps
}

void loop() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  
  blinkCount++; // Increment the counter
  Serial.print("Blink count: ");
  Serial.println(blinkCount); // Print the current count to the Serial Monitor
}
