
const int LED_PIN = 13;
String inputBuffer = "";

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  
  Serial.begin(9600);
  Serial.println("System Online. Enter Command (ON/OFF):");
}

void loop() {
  // Check if bytes are arriving down the serial data bus
  while (Serial.available() > 0) {
    char incomingChar = (char)Serial.read();
    
    // Build the string until a newline carriage return is hit
    if (incomingChar == '\n' || incomingChar == '\r') {
      inputBuffer.trim(); // Clean off trailing whitespaces
      if (inputBuffer.length() > 0) {
        Serial.print("Received Raw Buffer: ");
        Serial.println(inputBuffer);
      }
      inputBuffer = ""; // Flush the buffer string
    } else {
      inputBuffer += incomingChar; // Append character to buffer
    }
  }
}
