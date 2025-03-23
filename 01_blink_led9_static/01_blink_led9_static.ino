/* Utilizando variavel statica para piscar o led 10x */

const int ledPin = 13;
const int delayPeriod = 250;

void setup() {
	pinMode(ledPin, OUTPUT);  
}

void loop() {
  static int count = 0; /* Inicializa uma unica vez */ 
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);
  count++;
  	
  if (count == 10) {
    count = 0;
    delay(3000);
  }
}