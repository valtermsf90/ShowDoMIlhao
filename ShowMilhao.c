#include <stdio.h>
#include "pico/stdlib.h"
#include "include/iniciarPinos.c"
#include "include/cores.c"
#include "include/buzzers.c"
#include "include/KeyPad.c"
#include "C/perguntas.c"

#define LED_R 13
#define LED_B 12
#define LED_G 11
#define BUZZER_B 10
#define BUZZER_A 21
#define BUTTON_A 5
#define BUTTON_B 6
#define BUTTON_J 22
#define TIME 300

int lista[100];
int acertos = 0;
int erros = 0;
void cadastroFrase();
bool escolha = true;
bool repetido = true;
int main()
{
    posicao = 0;
    int numQuestao = 0;
    cadastroFrase();
    stdio_init_all();
    iniciarPinos(); // Inicializa os pinos
    srand(time(NULL));
    sleep_ms(5000);
    printf("Bem vindo ao Show do Milhão\n");
    printf("Escola a resposta correta para as perguntas\n\n");
    while(true){
    numQuestao++;
    posicao = rand() % 100;
    while (posicao >= 100)
    {
      posicao = rand() % 100;
    }
    
    printf("PLACAR: %d acertos e %d erros\n\n", acertos, erros);
    printf("%d\tQUESTAO %d\n", posicao, numQuestao);
    printf("%s\n", frase[posicao]);
    printf("[A]Verdadeiro\t[B]Falso\n");
    while (escolha)
    {
        int tecla = 0;
        if (gpio_get(BUTTON_A) == 0)
        {
            tecla = 1;
        }
        else if (gpio_get(BUTTON_B) == 0)
        {
            tecla = 2;
        }
        if (tecla != 0)
        {
            if (tecla == resposta[posicao])
            {
                buzzer_A(100);
                printf("Resposta correta\n\n");
                for (int i = 0; i < 6; i++)
                {
                    verde(100);
                    apagado(50);
                }
                buzzer_A_OFF();
                escolha = false;
                acertos++;
                sleep_ms(1000);
            }
            else
            {
                buzzer_B(100);
                printf("Resposta incorreta\n\n");
                for (int i = 0; i < 3; i++)
                {
                    vermelho(100);
                    apagado(50);
                }
                buzzer_B_OFF();
                erros++;
                escolha = false;
                sleep_ms(1000);
            }
        }
    }
    posicao++;
    escolha = true;
}
return 0;
}


