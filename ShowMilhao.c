#include <stdio.h>
#include "pico/stdlib.h"
#include "include/iniciarPinos.c"
#include "include/cores.c"
#include "include/buzzers.c"
#include "include/KeyPad.c"
#include "C/perguntas.c"
#include "C/frases.c"

#define LED_R 13
#define LED_B 12
#define LED_G 11
#define BUZZER_B 10
#define BUZZER_A 21
#define BUTTON_A 5
#define BUTTON_B 6
#define BUTTON_J 22
#define TIME 300

int tema = 0;
int tecla = 0;
char opcao;
int lista[100];
int acertos = 0;
int erros = 0;
void cadastroFrase();
bool escolha = true;
bool repetido = true;
bool menu = true;
bool submenu = true;
bool submenu2 = true;

// Função principal
int main()
{
    // declaração de variáveis
    posicao = 0;
    int numQuestao = 0;

    // chamanado as funções
    cadastroFrase();   // Cadastra as perguntas
    frasePositiva();   // Cadastra as frases positivas
    fraseNegativa();   // Cadastra as frases negativas
    stdio_init_all();  // Inicializa a biblioteca stdio
    iniciarPinos();    // Inicializa os pinos
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // Inicializa o jogo
    sleep_ms(5000);
    printf("Bem vindo ao Show do Milhão\n");
    printf("Escola a resposta correta para as perguntas\n\n");
    // mENU
    printf("Escolha a categoria:\n");
    printf("[A]Geografia\tMatemática\n");
    printf("[B]Ciência\tEntreterimento\n");
    printf("[J]Hist´ria\tTodas\n");
    printf("%d\n", tema);
    printf("%d\n", tecla);

    while (menu){ 
        tecla = 0;       
        if (gpio_get(BUTTON_A) == 0){
            azul(300);
            apagado(0);
            tecla = 1;
        }
        else if (gpio_get(BUTTON_B) == 0){
            amarelo(300);
            apagado(0);
            tecla = 2;
        }
        else if (gpio_get(BUTTON_J) == 0){
            rosa(300);
            apagado(0);
            tecla = 3;
        }
        if (tecla != 0){
            menu = false;
        }
    }
    menu = true;
    while (submenu){
        if (tecla == 1){
            printf("[A]Geografia\t[B]Matemática\n");
            while (submenu2){
                if (gpio_get(BUTTON_A) == 0){
                    azul(300);
                    apagado(0);
                    tema = tecla;
                    submenu2 = false;
                }
                else if (gpio_get(BUTTON_B) == 0){
                    amarelo(300);
                    apagado(0);
                    tema = tecla + 3;
                    submenu2 = false;             
                }                        
            }
            submenu2 = true;
        }
        if (tecla == 2){
            printf("[A]Ciências\t[B]Entreterimento\n");
            while (submenu2){
                if (gpio_get(BUTTON_A) == 0){
                    azul(300);
                    apagado(0);
                    tema = tecla + 3;
                    submenu2 = false;
                }else if (gpio_get(BUTTON_B) == 0){
                    amarelo(300);
                    apagado(0);
                    tema = tecla + 3;
                    submenu2 = false;
                }
            }
            submenu2 = true;
        }
        if (tecla == 3){
            printf("[A]História\t[B]Todas\n");
            while (submenu2){
                if (gpio_get(BUTTON_A) == 0){
                    azul(300);
                    apagado(0);
                    tema = tecla + 3;
                    submenu2 = false;             
                }
                else if (gpio_get(BUTTON_B) == 0){
                    amarelo(300);
                    apagado(0);
                    tema = 6;
                    submenu2 = false;                
                }
            }
            submenu2 = true;
        }               
        submenu = false;                
    }
    submenu = true;
    


while (true)
{
    numQuestao++;

    // randomiza a posição da pergunta
    posicao = rand() % 100;
    while (posicao >= 100 && categoria[posicao] != tema)
    {
        posicao = rand() % 100;
    }

    // randomiza a posição da frase positiva
    posFrase = rand() % 12;
    while (posFrase >= 12)
    {
        posFrase = rand() % 12;
    }

    // placar e pergunta
    printf("PLACAR: %d acertos e %d erros\n\n", acertos, erros);
    printf("%d\tQUESTAO %d\n", posicao, numQuestao);
    printf("%s\n", frase[posicao]);
    printf("[A]Verdadeiro\t[B]Falso\n");

    // verifica a resposta
    while (escolha)
    {
        tecla = 0;
        if (gpio_get(BUTTON_A) == 0) // verifica se o botão A foi pressionado
        {
            tecla = 1;
            opcao = 'A';
        }
        else if (gpio_get(BUTTON_B) == 0) // verifica se o botão B foi pressionado
        {

            tecla = 2;
            opcao = 'B';
        }
        if (tecla != 0)
        {
            printf("Voce escolheu a opcao %c\n", opcao);
            if (tecla == resposta[posicao]) // verifica se a resposta está correta
            {
                // mensagem de acerto
                buzzer_A(100);
                printf("%s\n\n", mensagemPos[posFrase]);
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
                // mensagem de erro
                buzzer_B(100);
                printf("%s\n\n", mensagemNeg[posFrase]);
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
    // reinicia o jogo
    posicao++;
    escolha = true;
}
return 0;
}
