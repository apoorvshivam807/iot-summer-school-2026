const int TRIG_PIN = 12; // Outbound trigger pulse pin
const int ECHO_PIN = 13; // Inbound echo reflection capture pin

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  
  // Initialize the trigger pin to low to ensure clean signal transitions
  digitalWrite(TRIG_PIN, LOW);
  
  Serial.println("--- Ultrasonic Radar Distance Logger Initialized ---");
}

void loop() {
  // 1. Send a clean 10-microsecond HIGH pulse to trigger the ultrasonic ping
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // 2. Measure the duration (in microseconds) until the Echo pin goes LOW
  // Timeout set to 30,000 microseconds (~5 meters range max limit)
  long duration = pulseIn(ECHO_PIN, HIGH, 30000);
  // 3. Convert time duration into distance (Centimeters)
  // Speed of sound = 343 m/s = 0.0343 cm/microsecond
  // Distance = (Time * Speed) / 2 [Divided by 2 for the round-trip echo path]
  float distanceCM = (duration * 0.0343) / 2.0;
  
  // 4. Evaluate and log data packet telemetry
  if (duration == 0) {
    Serial.println("Target Status: Out of Range / No Echo Intercepted");
  } else {
    Serial.print("Target Distance: ");
    Serial.print(distanceCM, 1);
    Serial.println(" cm");
  }
  
  delay(300); // Small breath period between sensor scans
}
