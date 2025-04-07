/* Resistores internos de pull-up configuraveis por software
*/

const int inputPin = 5;

void setup()
{
  pinMode(inputPin, INPUT_PULLUP);
  Serial.begin(9600); // taxa de transmissao
}

void loop()
{
  int reading = digitalRead(inputPin);
  Serial.println(reading); // 0 desligado; 1 ligado
  delay(1000);
}