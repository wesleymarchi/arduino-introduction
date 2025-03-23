
int ledPin = 13;
int delayPeriod = 333;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // faz o LED piscar 20x e depois pausa 3 segundos
  for (int i = 0; i < 20; i++) {
  	digitalWrite(ledPin, HIGH);
    delay(delayPeriod);
    digitalWrite(ledPin, LOW);
    delay(delayPeriod);
  }
  
  delay(3000);
}
