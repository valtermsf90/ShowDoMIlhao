#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "perguntas.h"

int posFrase = 0;
char mensagemPos[100][100];
char mensagemNeg[100][100];

void frasePositiva(){
 
strcpy(mensagemPos[posFrase], "Muito bem!!! você acertou :D");  // Posição 0
posFrase++;

strcpy(mensagemPos[posFrase], "Excelente! Você está no caminho certo :D");  // Posição 1
posFrase++;

strcpy(mensagemPos[posFrase], "Parabéns! Você conseguiu :D");  // Posição 2
posFrase++;

strcpy(mensagemPos[posFrase], "Isso mesmo! Muito bom :D");  // Posição 3
posFrase++;

strcpy(mensagemPos[posFrase], "Ótimo trabalho! Continue assim :D");  // Posição 4
posFrase++;

strcpy(mensagemPos[posFrase], "Impressionante! Você acertou :D");  // Posição 5
posFrase++;

strcpy(mensagemPos[posFrase], "Bom trabalho! Você está mandando bem :D");  // Posição 6
posFrase++;

strcpy(mensagemPos[posFrase], "Fantástico! Você acertou de novo :D");  // Posição 7
posFrase++;

strcpy(mensagemPos[posFrase], "Incrível! Você conseguiu mais uma vez :D");  // Posição 8
posFrase++;

strcpy(mensagemPos[posFrase], "Sensacional! Você está arrasando :D");  // Posição 9
posFrase++;

strcpy(mensagemPos[posFrase], "Perfeito! Continue assim :D");  // Posição 10
posFrase++;

strcpy(mensagemPos[posFrase], "Maravilha! Você está no caminho certo :D");  // Posição 11
posFrase++;

strcpy(mensagemPos[posFrase], "Muito bom! Você está indo muito bem :D");  // Posição 12
posFrase++;
}

void fraseNegativa(){
	posFrase = 0;

strcpy(mensagemNeg[posFrase], "Infelizmente, você errou. Tente novamente! :(");  // Posição 0
posFrase++;

strcpy(mensagemNeg[posFrase], "Não foi dessa vez. Continue tentando! :(");  // Posição 1
posFrase++;

strcpy(mensagemNeg[posFrase], "Quase lá, mas não acertou. Não desista! :(");  // Posição 2
posFrase++;

strcpy(mensagemNeg[posFrase], "Parece que não deu certo. Tente outra vez! :(");  // Posição 3
posFrase++;

strcpy(mensagemNeg[posFrase], "Errou, mas você pode conseguir da próxima vez! :(");  // Posição 4
posFrase++;

strcpy(mensagemNeg[posFrase], "Isso não está certo. Continue se esforçando! :(");  // Posição 5
posFrase++;

strcpy(mensagemNeg[posFrase], "Não foi dessa vez, mas não desanime! :(");  // Posição 6
posFrase++;

strcpy(mensagemNeg[posFrase], "Erro, mas você está quase lá. Continue tentando! :(");  // Posição 7
posFrase++;

strcpy(mensagemNeg[posFrase], "Infelizmente, você não acertou. Tente de novo! :(");  // Posição 8
posFrase++;

strcpy(mensagemNeg[posFrase], "Essa não foi a resposta certa. Não desista! :(");  // Posição 9
posFrase++;

strcpy(mensagemNeg[posFrase], "Essa não foi a resposta correta. Tente novamente! :(");  // Posição 10
posFrase++;

strcpy(mensagemNeg[posFrase], "Você errou dessa vez. Mas não desista! :(");  // Posição 11
posFrase++;

strcpy(mensagemNeg[posFrase], "Infelizmente, a resposta está errada. Continue tentando! :(");  // Posição 12
posFrase++;
}
