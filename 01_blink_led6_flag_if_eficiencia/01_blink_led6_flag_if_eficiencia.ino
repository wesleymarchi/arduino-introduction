
const int ledPin = 13;
int delayPeriod = 333;
int count = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);
  count++;
  
  // Flag para controlar a pausa no loop com if no arduino, mais eficiente
  if (count == 20) {
    count = 0;
    delay(3000);
  }
}