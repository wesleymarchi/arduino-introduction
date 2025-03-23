/* SOS código Morse LED */
const int ledPin = 13;
int durations [] = {200, 200, 200, 666, 666, 666, 200, 200, 200};

void setup() {
  pinMode(ledPin, OUTPUT);  	
}

void loop() {
  for (int i = 0; i < 9; i++)
    flash(durations[i]);
  
  delay(3000);
}

void flash(int delayPeriod) {
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);
}