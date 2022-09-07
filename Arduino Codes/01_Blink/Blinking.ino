
void setup() {
  pinMode(PA5, OUTPUT);
  
}

void loop() {
  digitalWrite(PA5, HIGH);
  delay(10);
  digitalWrite(PA5, LOW);
  delay(10);
}
