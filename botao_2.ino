  int ledPin = 10;
  int btnPin = 7;
  int ledPin2 = 3;
  bool state;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT);
  pinMode(ledPin2, OUTPUT);
}
void loop() {
  state = digitalRead(btnPin);
  if(state == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, LOW);
    } else {
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPin2, HIGH);
    }
}
