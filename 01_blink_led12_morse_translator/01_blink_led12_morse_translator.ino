/* Operação em Morse */
const int ledPin = 13;
const int dotDelay = 250;
char *letters[] = {
	".-",    // A  
    "-...",  // B  
    "-.-.",  // C  
    "-..",   // D  
    ".",     // E  
    "..-.",  // F  
    "--.",   // G  
    "....",  // H  
    "..",    // I  
    ".---",  // J  
    "-.-",   // K  
    ".-..",  // L  
    "--",    // M  
    "-.",    // N  
    "---",   // O  
    ".--.",  // P  
    "--.-",  // Q  
    ".-.",   // R  
    "...",   // S  
    "-",     // T  
    "..-",   // U  
    "...-",  // V  
    ".--",   // W  
    "-..-",  // X  
    "-.--",  // Y  
    "--.."   // Z
};
char *numbers[] = {
    "-----",  // 0  
    ".----",  // 1  
    "..---",  // 2  
    "...--",  // 3  
    "....-",  // 4  
    ".....",  // 5  
    "-....",  // 6  
    "--...",  // 7  
    "---..",  // 8  
    "----."   // 9   
};


void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // bits por segundo
}

void loop() {
  char ch;
  if (Serial.available() > 0) { // contem dados no buffer?
    ch = Serial.read(); // lê o valor disponivel
    if (ch >= 'a' && ch <= 'z') {
      flashSequence(letters[ch - 'a']); // subtração de valores ASCII, busca a posição da letra (a - a = 0) ou (c - a = 2)
    } else if (ch >= 'A' && ch <= 'Z') {
      flashSequence(letters[ch - 'A']);
    } else if (ch >= '0' && ch <= '9') {
      flashSequence(numbers[ch - '0']);
    } else if (ch == ' ') {
      delay(dotDelay * 4); //intervalo de tempo entre palavras
    }
  }
}

void flashSequence(char *sequence) {
  /* Obtem uma string com a sequencia de pontos e traços; liga e desliga o led */
  int i = 0;
  while (sequence[i] != '\0') {
    flashDotOrDash(sequence[i]);
    i++;
  }
  
  delay(dotDelay * 3); // intervalo de tempo entre as letras
}

void flashDotOrDash(char dotOrDash) {
  /* recebe um char, sendo dot ou dash e espera um intervalo */ 
  digitalWrite(ledPin, HIGH);
  if (dotOrDash == '.')
    delay(dotDelay);
  else
    delay(dotDelay * 3);
  
  digitalWrite(ledPin, LOW);
  delay(dotDelay); // intervalo de tempo entre os flashes
}