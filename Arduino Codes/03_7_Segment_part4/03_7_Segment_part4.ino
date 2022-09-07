int digits[4];
int quotient;

void segments(char num) {
  PORTD = (PORTD & 0b11110000) | (num & 0b00001111);
}

void setup() {
  DDRD = 0b11111111;
  PORTD = 0b11110000;
}

void loop() {
  int t0 = 0;
  int i, j;
  
  for (i = 0; i < 4000; i++) {
    t0 = millis();
    quotient = i;
    
    // Extract digits from integer
    for (j = 0; j<4; j++){
      digits[j] = quotient % 10;
      quotient = quotient / 10;
    }

    j = 0;
    // display each number for 500 milliseconds
    while ((millis() - t0) < 500){
      PORTD = (PORTD | 0b11110000) & ~(1 << (j+4));
      segments(digits[j]);
      j = (j+1)%4;
      delay(1);
    }
  }
}
