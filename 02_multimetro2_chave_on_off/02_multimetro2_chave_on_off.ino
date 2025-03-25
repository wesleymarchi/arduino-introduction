/* Detecta se uma chave está fechada */
const int inputPin = 5;

void setup() {
  pinMode(inputPin, INPUT); // define o pin 5 como entrada
  Serial.begin(9600);
}

void loop() {
  int reading = digitalRead(inputPin); // leitura no pin 5
  Serial.println(reading);
  delay(1000);
}
