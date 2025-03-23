
int ledPin = 13;
int delayPeriod = 666;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(delayPeriod);                      // wait for a second
  digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(delayPeriod);                      // wait for a second
  
  delayPeriod += 100;
  
  // Quando atingir 3000 milissegundos, reseta para 100
  if (delayPeriod > 3000) {
    delayPeriod = 100;
  }
}
