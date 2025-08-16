int ledpin = 2;
void setup() {
  pinMode(ledpin,OUTPUT); // ledpin is set to output pin
}

void loop() {
  digitalWrite(ledpin,HIGH); // LED ON
  delay(1000); // Take 1 second
  digitalWrite(ledpin,LOW); // LED OFF
  delay(1000);
}