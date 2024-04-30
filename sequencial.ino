int led_2 = 2;
int led_4 = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_2, OUTPUT);
  pinMode(led_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_4, HIGH);
  digitalWrite(led_2, HIGH);
  delay(1000);

  digitalWrite(led_4, LOW);
  digitalWrite(led_2, LOW);
  delay(1000);
}
