#include <Arduino.h>
#line 1 "C:\\Users\\96475\\OneDrive\\Desktop\\210\\210.ino"

// Alleen de buzzer testen

#define BUZZER_PIN 8

#line 6 "C:\\Users\\96475\\OneDrive\\Desktop\\210\\210.ino"
void setup();
#line 10 "C:\\Users\\96475\\OneDrive\\Desktop\\210\\210.ino"
void loop();
#line 6 "C:\\Users\\96475\\OneDrive\\Desktop\\210\\210.ino"
void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  tone(BUZZER_PIN, 1000);
  delay(1000);

  noTone(BUZZER_PIN);
  delay(1000);
}


