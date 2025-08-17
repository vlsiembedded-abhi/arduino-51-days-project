int leda = 3;
int ledb = 5;
int ledc = 9;
int ledd = 11;
void setup() {
  pinMode(leda,OUTPUT);
  pinMode(ledb,OUTPUT);
  pinMode(ledc,OUTPUT);
  pinMode(ledd,OUTPUT);
}

void loop() {
  digitalWrite(leda,HIGH);
  digitalWrite(ledc,HIGH);
  digitalWrite(ledb,LOW);
  digitalWrite(ledd,LOW);
  delay(500);

  digitalWrite(leda,LOW);
  digitalWrite(ledc,LOW);
  digitalWrite(ledb,HIGH);
  digitalWrite(ledd,HIGH);
  delay(500);
}
