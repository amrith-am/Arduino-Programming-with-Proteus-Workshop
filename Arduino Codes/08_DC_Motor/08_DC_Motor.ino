#define IN1 8
#define IN2 9
#define ENA 10

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);


  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  analogWrite(ENA, 0);
}

void loop() {
  int dir = digitalRead(A0);
  int vel = analogRead(A1);
  vel = map(vel, 0, 1023, 0, 255);
  
  if (dir == 1){
    digitalWrite(IN1, 1);
    digitalWrite(IN2, 0);
  }
  else {
    digitalWrite(IN1, 0);
    digitalWrite(IN2, 1);
  }

  analogWrite(ENA, vel);
  delay(100);
  
}
