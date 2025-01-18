#include <stdio.h>
#include "pico/stdlib.h"
#include "buzzers.h"

// Funções para controle dos buzzers
void buzzer_A(int tempo)
{
  gpio_put(BUZZER_A, 1);
  if (tempo > 0)
  { // Se o tempo for maior que 0, o buzzer ficará ligado por esse tempo
    sleep_ms(tempo);
  }
}
// Função para acionar o buzzer B
void buzzer_B(int tempo)
{
  gpio_put(BUZZER_B, 1);
  if (tempo > 0)
  { // Se o tempo for maior que 0, o buzzer ficará ligado por esse tempo
    sleep_ms(tempo);
  }
}
// Função para desligar o buzzer A
void buzzer_A_OFF()
{ // Desliga o buzzer A
  gpio_put(BUZZER_A, 0);
}
// Função para desligar o buzzer B
void buzzer_B_OFF()
{ // Desliga o buzzer B
  gpio_put(BUZZER_B, 0);
}
// Função para acionar os buzzers A e B
void buzzer_AB(int tempo)
{ //
  gpio_put(BUZZER_A, 1);
  gpio_put(BUZZER_B, 1);
  if (tempo > 0)
  { // Se o tempo for maior que 0, os buzzers ficarão ligados por esse tempo
    sleep_ms(tempo);
  }
}