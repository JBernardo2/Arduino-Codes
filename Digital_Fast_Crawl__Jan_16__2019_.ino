int bulb[] = {0, 1, 2, 3, 4, 5, 6, 7};
int wait = 10;

void setup() {
  for (int i = 0; i < sizeof(bulb); i++)
    pinMode(bulb[i], OUTPUT);


}

void loop() {
  for(int i : bulb) {
    digitalWrite(i, HIGH);
    delay(wait);
    digitalWrite(i, LOW);
    digitalWrite(i+1%8, HIGH);
    delay(wait);    
  }
}
