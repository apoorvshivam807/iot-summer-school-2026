

const int LED_PIN = 13;
String inputBuffer = "";

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  
  Serial.begin(9600);
  Serial.println("System Online. Enter Command (ON/OFF):");
}

void loop() {
  while (Serial.available() > 0) {
    char incomingChar = (char)Serial.read();
    
    if (incomingChar == '\n' || incomingChar == '\r') {
      inputBuffer.trim(); 
      
      if (inputBuffer.length() > 0) {
        // Execute conditional string matches
        if (inputBuffer.equalsIgnoreCase("ON")) {
          digitalWrite(LED_PIN, HIGH);
          Serial.print("["); Serial.print(millis()); Serial.println("] STATUS: LED Activated.");
        } 
        else if (inputBuffer.equalsIgnoreCase("OFF")) {
          digitalWrite(LED_PIN, LOW);
          Serial.print("["); Serial.print(millis()); Serial.println("] STATUS: LED Deactivated.");
        } 
        else {
          Serial.print("["); Serial.print(millis()); Serial.println("] ERROR: Invalid Command.");
        }
      }
      inputBuffer = ""; 
    } else {
      inputBuffer += incomingChar; 
    }
  }
}
