void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(64, INPUT);
  pinMode(40, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("40: " + String(digitalRead(40)) + ", 64: " + String(digitalRead(64)));
}
