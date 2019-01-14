void setup() {
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  //sets up pins of arduino
  digitalWrite(9, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(500);
  //turns all lights on and delays 500 msecs
  digitalWrite(9, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(500);
  //turns all lights off and delays 500 msecs
  digitalWrite(9, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(500);
  //turns all lights on and delays 500 msecs
  digitalWrite(9, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(500);
  //turns all lights off and delays 500 msecs
}

void loop() {
  digitalWrite(9, HIGH);
  delay(100);
  //turns 9 on and waits 100 msecs
  digitalWrite(10, HIGH);
  delay(100);
  //turns 10 on and waits 100 msecs
  digitalWrite(9, LOW);
  delay(100);
  //turns 9 off and waits 100 msecs
  digitalWrite(11, HIGH);
  delay(100);
  //turns 11 on and waits 100 msecs
  digitalWrite(10, LOW);
  delay(100);
  //turns 10 off and waits 100 msecs
  digitalWrite(12, HIGH);
  delay(100);
  //turns 12 on and waits 100 msecs
  digitalWrite(11, LOW);
  delay(100);
  //turns 11 off and waits 100 msecs
  digitalWrite(12, LOW);
  delay(100);
  //turns 12 off and waits 100 msecs
}
