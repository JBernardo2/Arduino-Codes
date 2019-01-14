void setup() {
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  for (int bulbOne = 0; bulbOne < 128; bulbOne++) {
    analogWrite(9, 127-bulbOne);
    analogWrite(10, bulbOne);
    delay(10);
  }
   for (int bulbOne = 0; bulbOne < 128; bulbOne++) {
    analogWrite(10, 127-bulbOne);
    analogWrite(11, bulbOne);
    delay(10);
  }
   for (int bulbOne = 0; bulbOne < 128; bulbOne++) {
    analogWrite(11, 127-bulbOne);
    analogWrite(6, bulbOne);
    delay(10);
  }
   for (int bulbOne = 0; bulbOne < 128; bulbOne++) {
    analogWrite(6, 127-bulbOne);
    analogWrite(9, bulbOne);
    delay(10);
  }

}
