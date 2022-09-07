int a;

void setup() {
  Serial.begin(9600);
}

void loop() {
  a++;
  Serial.print("HELLO ");
  Serial.println(a);
}
