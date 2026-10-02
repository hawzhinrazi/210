#define RED_LED_PIN 7
#define YELLOW_LED_PIN 6
#define GREEN_LED_PIN 10
#define BLUE_LED_PIN 9

#define RED_BUTTON_PIN A5
#define YELLOW_BUTTON_PIN A4
#define GREEN_BUTTON_PIN 11
#define BLUE_BUTTON_PIN 12

#define BUZZER_PIN 8

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);

  pinMode(RED_BUTTON_PIN, INPUT_PULLUP);
  pinMode(YELLOW_BUTTON_PIN, INPUT_PULLUP);
  pinMode(GREEN_BUTTON_PIN, INPUT_PULLUP);
  pinMode(BLUE_BUTTON_PIN, INPUT_PULLUP);

  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Test: leds gaan een voor een aan
  digitalWrite(RED_LED_PIN, HIGH);
  delay(500);
  digitalWrite(RED_LED_PIN, LOW);

  digitalWrite(BLUE_LED_PIN, HIGH);
  delay(500);
  digitalWrite(BLUE_LED_PIN, LOW);

  digitalWrite(YELLOW_LED_PIN, HIGH);
  delay(500);
  digitalWrite(YELLOW_LED_PIN, LOW);

  digitalWrite(GREEN_LED_PIN, HIGH);
  delay(500);
  digitalWrite(GREEN_LED_PIN, LOW);

  // Test de druktoetsen
  if (digitalRead(RED_BUTTON_PIN) == LOW) {
    digitalWrite(RED_LED_PIN, HIGH);
    tone(BUZZER_PIN, 1000);
  }
  else if (digitalRead(BLUE_BUTTON_PIN) == LOW) {
    digitalWrite(BLUE_LED_PIN, HIGH);
    tone(BUZZER_PIN, 1500);
  }
  else if (digitalRead(YELLOW_BUTTON_PIN) == LOW) {
    digitalWrite(YELLOW_LED_PIN, HIGH);
    tone(BUZZER_PIN, 2000);
  }
  else if (digitalRead(GREEN_BUTTON_PIN) == LOW) {
    digitalWrite(GREEN_LED_PIN, HIGH);
    tone(BUZZER_PIN, 2500);
  }
  else {
    noTone(BUZZER_PIN);
    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(BLUE_LED_PIN, LOW);
    digitalWrite(YELLOW_LED_PIN, LOW);
    digitalWrite(GREEN_LED_PIN, LOW);
  }

  delay(50);
}
