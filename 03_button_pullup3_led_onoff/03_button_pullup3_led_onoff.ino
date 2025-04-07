/* Resistores internos de pull-up configuraveis por software
0 desligado; 1 ligado

*/

const int inputPin = 5;
const int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT_PULLUP);
  Serial.begin(9600); // taxa de transmissao
}

void loop()
{
  int switchOpen = digitalRead(inputPin); // Aramazena 0 ou 1 na variavel
  digitalWrite(ledPin, !switchOpen); // zero se estiver pressionado; 1 caso contrário; necessario inverter o valor para ligar o LED
  Serial.println(switchOpen);
  delay(1000);
}