int buttonState;

void setup() {
  pinMode(12, INPUT_PULLUP);
  pinMode(13, OUTPUT);
// sets up pins
}

void loop() {

  buttonState = digitalRead(12);
  if (buttonState == LOW) {
    digitalWrite(13, HIGH);
  }
  // if button is pressed, turn on light
  else {
    digitalWrite(13, LOW);
  }
  // else, turn off the light

}
