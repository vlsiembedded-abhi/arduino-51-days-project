int ledpin_a = 2;
int ledpin_b = 4;
int ledpin_c = 8;
int ledpin_d = 11;
void setup() {
  pinMode(ledpin_a,OUTPUT);
  pinMode(ledpin_b,OUTPUT);
  pinMode(ledpin_c,OUTPUT);
  pinMode(ledpin_d,OUTPUT);

}

void loop() {
  digitalWrite(ledpin_a,HIGH);
  delay(500);
  digitalWrite(ledpin_a,LOW);

  digitalWrite(ledpin_b,HIGH);
  delay(500);
  digitalWrite(ledpin_b,LOW);

  digitalWrite(ledpin_c,HIGH);
  delay(500);
  digitalWrite(ledpin_c,LOW);

  digitalWrite(ledpin_d,HIGH);
  delay(500);
  digitalWrite(ledpin_d,LOW);

}
