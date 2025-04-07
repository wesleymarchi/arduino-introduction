/* Elaboração de um semaforo */

// Definição dos pinos para os LEDs
const int ledVermelho = 8;
const int ledAmarelo = 9;
const int ledVerde = 10;

void setup() {
    // Configura os pinos como saída
    pinMode(ledVerde, OUTPUT);
    pinMode(ledAmarelo, OUTPUT);
    pinMode(ledVermelho, OUTPUT);
}

void loop() {
    // Vermelha (Parado)
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVerde, LOW);
    delay(5000); // Mantém o vermelho por 5 segundos

    // Verde (Pode passar)
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVerde, HIGH);
    delay(5000); // Mantém o verde por 5 segundos

    // Volta para Amarelo (Aviso para trocar para vermelho)
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVerde, LOW);
    delay(2000);
}
