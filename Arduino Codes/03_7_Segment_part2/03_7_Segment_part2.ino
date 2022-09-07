void segments(int num) {
  if (num == 0)
    PORTD = 0b00111111;
  else if (num == 1)
    PORTD = 0b00000110;
  else if (num == 2)
    PORTD = 0b01011011;
  else if (num == 3)
    PORTD = 0b01001111;
  else if (num == 4)
    PORTD = 0b01100110;
  else if (num == 5)
    PORTD = 0b01101101;
  else if (num == 6)
    PORTD = 0b01111101;
  else if (num == 7)
    PORTD = 0b00000111;
  else if (num == 8)
    PORTD = 0b01111111;
  else if (num == 9)
    PORTD = 0b01101111;
  else
    PORTD = 0b00000000;
}

void setup() {
  DDRD = 0b11111111;
}

void loop() {
  for (int i = 0; i < 10; i++) {
    segments(i);
    delay(1000);
  }
}
