const int ledr = 2;
const int ledy = 3;
const int ledg = 4;
const int push = 12;

void setup()
{
  Serial.begin(9600);
  pinMode(ledr, OUTPUT);
  pinMode(ledy, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(push, INPUT);
  
  // Seed the random number generator using noise from unconnected Analog Pin A0
  randomSeed(analogRead(A0));
}

void loop()
{
  // 1. Flash all LEDs as a start indicator sequence
  digitalWrite(ledr, HIGH);
  digitalWrite(ledy, HIGH);
  digitalWrite(ledg, HIGH);
  delay(400);
  
  // 2. Generate an unpredictable chaos window (between 2 to 5 seconds)
  unsigned long duration = random(2000, 5000);
  unsigned long choas = millis();
  
  // Rapidly toggle random pins during the chaos sequence
  while(millis() - choas < duration){
    int rdmpin = random(2, 5); // Select random pin between 2 and 4
    digitalWrite(rdmpin, !digitalRead(rdmpin));
    delay(random(50, 150));
  }
  
  // 3. Reset all LEDs to prepare the player
  digitalWrite(ledr, LOW);
  digitalWrite(ledy, LOW);
  digitalWrite(ledg, LOW);
  
  // 4. Capture starting point timestamp and fire green signal LED
  unsigned long stop = millis();
  digitalWrite(ledg, HIGH);
  
  // Active polling: wait right here until player depresses the push button
  while(digitalRead(push) == LOW){
    // Do nothing, just lock execution until button state changes to HIGH
  }
  
  // 5. Instantly clear signal light and capture final timestamp
  digitalWrite(ledg, LOW);
  unsigned long click = millis();
  
  // 6. Calculate total elapsed delta and output result parameters
  unsigned long response = click - stop;
  Serial.print("Your response time: ");
  Serial.print(response);
  Serial.println(" miliseconds");
  
  // Enforce cooldown delay before resetting the cycle
  delay(2500);
}
