void segments(char num) {
  PORTD = (PORTD & 0b11110000) | (num & 0b00001111);
}

void setup() {
  DDRD = 0b11111111;
  PORTD = 0b00000000;
}

void loop() {
  for (char i = 0; i < 10; i++) {
    segments(i);
    delay(1000);
  }
}
