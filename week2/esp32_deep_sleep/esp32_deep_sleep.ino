
#include <Arduino.h>

// Time ESP32 will go to sleep (in seconds)
#define TIME_TO_SLEEP   5        
// Conversion factor for micro seconds to seconds
#define uS_TO_S_FACTOR 1000000ULL 

// Variable stored in RTC memory (survives deep sleep)
RTC_DATA_ATTR int bootCount = 0;

void setup() {
  Serial.begin(115200);
  delay(1000); 

  // Increment boot number and print it each reboot
  bootCount++;
  Serial.printf("Boot number: %d\n", bootCount);

  // Configure the wake up source to trigger every 5 seconds
  esp_sleep_enable_timer_wakeup(TIME_TO_SLEEP * uS_TO_S_FACTOR);
  Serial.printf("Setup ESP32 DevKit V1 to sleep for %d Seconds\n", TIME_TO_SLEEP);

  Serial.println("Going to deep sleep now...");
  Serial.flush(); 
  
  // Enter deep sleep
  esp_deep_sleep_start();
  
  // This line will never be reached
  Serial.println("This will never be printed");
}

void loop() {
  // Loop is empty because the chip resets after waking up from deep sleep
}
