#include <Servo.h> 
#include <SoftwareSerial.h>

SoftwareSerial displaySerial(A2, 8); 
Servo myServo;      

const int ep1 = 9;
const int in1 = 2;
const int in2 = 3;
const int ep2 = 10;

const int trif = 12;
const int echof = 13;
const int trib = 6;
const int echob = 7;
const int trir = 4;
const int echor = 5;
const int tril = A0; 
const int echol = A1; 

const float safeFront = 20.0; 
const float safeBack  = 20.0; 
const float safeSide  = 25.0; 

const unsigned long timeout = 30000; 

void setup() {
  pinMode(ep1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ep2, OUTPUT);
  
  Serial.begin(9600);
  displaySerial.begin(9600);
  
  pinMode(trif, OUTPUT); pinMode(echof, INPUT);
  pinMode(trib, OUTPUT); pinMode(echob, INPUT);
  pinMode(trir, OUTPUT); pinMode(echor, INPUT);
  pinMode(tril, OUTPUT); pinMode(echol, INPUT);
  
  myServo.attach(11);
  myServo.write(90); 
  delay(500); 
}

float getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH, timeout);
  delay(30); 
  
  if (duration == 0) return 999.0; 
  return (duration * 0.0343) / 2.0;
}

void loop() {
  float distFront = getDistance(trif, echof);

  if (distFront > safeFront) {
    myServo.write(90); 
    forward();
    displaySerial.print('F');
  } 
  else {
    stopMotors();
    delay(250); 
    displaySerial.print('X');
    
    float distRight = getDistance(trir, echor);
    float distLeft  = getDistance(tril, echol);
    int escapeAngle = 90; 

    if (distRight > safeSide) {
      escapeAngle = 135; 
      displaySerial.print('R');
    } 
    else if (distLeft > safeSide && distRight < safeSide) {
      escapeAngle = 45; 
      displaySerial.print('L');
    } 
    else {
      escapeAngle = 90;
      displaySerial.print('S');
    }

    myServo.write(escapeAngle);
    delay(3000); 

    float distBack = getDistance(trib, echob);
    
    if (distBack > safeBack) {
      myServo.write(90);
      delay(300);
      
      displaySerial.print('V');
      backward();
      delay(3000); 
      stopMotors();
      delay(250);
      
    } else {
      displaySerial.print('B');
      distRight = getDistance(trir, echor);
      distLeft  = getDistance(tril, echol);
      
      if (distRight > safeSide) {
        escapeAngle = 135; 
      } 
      else if (distLeft > safeSide && distRight < safeSide) {
        escapeAngle = 45; 
      } 
      else {
        escapeAngle = 90;
      }

      myServo.write(escapeAngle);
      delay(3000); 
      
      distFront = getDistance(trif, echof);
      
      if (distFront > safeFront) {
        myServo.write(90);
        delay(300);
        displaySerial.print('O');
        forward(); 
      } else {
        displaySerial.print('T');
        stopMotors();
        myServo.write(90); 
      }
    }
  }
  
  delay(10); 
} 

void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(ep1, 255);
  analogWrite(ep2, 255);
}

void backward() {
  digitalWrite(in1, LOW); 
  digitalWrite(in2, HIGH); 
  analogWrite(ep1, 255);
  analogWrite(ep2, 255);
}

void stopMotors() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(ep1, 0);
  analogWrite(ep2, 0);
}
