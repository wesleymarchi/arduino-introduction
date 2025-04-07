/* Exibir Texto */

#include <LiquidCrystal.h>
#define TEMPO_ATUALIZACAO 500

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  // Inicia o LCD 16x2 (Colunas x Linhas)
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("HELLO!");
  lcd.setCursor(0, 1);
  lcd.print("GOTCHA!!!");
  delay(TEMPO_ATUALIZACAO);
}
