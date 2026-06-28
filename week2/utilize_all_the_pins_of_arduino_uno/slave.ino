#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

LiquidCrystal_I2C lcd(0x20, 16, 2); 

SoftwareSerial brainSerial(8, 9); 
char lastCommand = ' ';

void setup() {
  lcd.init();
  lcd.backlight();
  brainSerial.begin(9600);
  updateLCD("System Booting", "Awaiting Brain..");
}


void updateLCD(String line1, String line2) {
  while (line1.length() < 16) line1 += " ";
  while (line2.length() < 16) line2 += " ";
  lcd.setCursor(0, 0);
  lcd.print(line1);
  lcd.setCursor(0, 1);
  lcd.print(line2);
}

void loop() {
  
  if (brainSerial.available() > 0) {
    char command = brainSerial.read();
    
    
    if (command != lastCommand) {
      switch (command) {
        case 'F': updateLCD("Moving Forward", "Path Clear"); break;
        case 'X': updateLCD("Front Blocked!", "Scanning Sides.."); break;
        case 'R': updateLCD("Right is Clear", "Looking Right"); break;
        case 'L': updateLCD("Left is Clear", "Looking Left"); break;
        case 'S': updateLCD("Sides Blocked", "Looking Straight"); break;
        case 'V': updateLCD("Reversing", "For 3 Seconds"); break;
        case 'B': updateLCD("Back Blocked!", "Scanning Again.."); break;
        case 'O': updateLCD("Front Opened up", "Moving Forward"); break;
        case 'T': updateLCD("TRAPPED!", "Waiting..."); break;
      }
      lastCommand = command;
    }
  }
}
