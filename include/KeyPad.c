#include <stdio.h>
#include "pico/stdlib.h"
#include "KeyPad.h"

#define LED_R 13
#define LED_B 12
#define LED_G 11
#define BUZZER_B 10
#define BUZZER_A 21
#define BUTTON_A 5
#define BUTTON_B 6
#define BUTTON_J 22
#define TIME 300



int botao;
int ler_botao() {
            if (gpio_get(BUTTON_A) == 0)
            {
                azul(300);
                apagado(0);
                botao = 1;
           }
            else if (gpio_get(BUTTON_B) == 0)
            {
                amarelo(300);
                apagado(0);
                botao = 2;
                
            }
            else if (gpio_get(BUTTON_J) == 0)
            {
             
                botao = 3;
                
            }
    return botao;
            
}