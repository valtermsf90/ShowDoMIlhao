#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "perguntas.h"

int posicao = 0;
char frase[150][100];
int resposta[150];
int categoria[150];
/*
1 - Geografia
2 - Ciências
3 - História
4 - Matemática
5 - Entretenimento
6 - todos
*/

void cadastroFrase()

{

  // Pergunta 1
strcpy(frase[posicao], "A primeira temporada da série 'Stranger Things' foi lançada em 2016.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 2
strcpy(frase[posicao], "O filme 'Titanic' foi dirigido por James Cameron.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 3
strcpy(frase[posicao], "A série 'Breaking Bad' foi lançada em 2010.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 4
strcpy(frase[posicao], "O personagem Harry Potter é interpretado por Daniel Radcliffe.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 5
strcpy(frase[posicao], "O filme 'Avatar' foi lançado após 2010.");
resposta[posicao] = 0; // Falso (Foi lançado em 2009)
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 6
strcpy(frase[posicao], "O cantor Michael Jackson era conhecido como o 'Rei do Pop'.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 7
strcpy(frase[posicao], "A atriz Scarlett Johansson interpretou a personagem Viúva Negra no MCU.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 8
strcpy(frase[posicao], "A série 'Game of Thrones' é baseada nos livros de J.R.R. Tolkien.");
resposta[posicao] = 0; // Falso (É baseada nos livros de George R.R. Martin)
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 9
strcpy(frase[posicao], "A animação 'Frozen' foi lançada pela Pixar.");
resposta[posicao] = 0; // Falso (Foi lançada pela Disney)
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 10
strcpy(frase[posicao], "O filme 'O Senhor dos Anéis' foi filmado na Nova Zelândia.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 11
strcpy(frase[posicao], "O personagem James Bond foi interpretado por Roger Moore em 7 filmes.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 12
strcpy(frase[posicao], "O filme 'Jurassic Park' foi baseado em um livro de Stephen King.");
resposta[posicao] = 0; // Falso (Foi baseado no livro de Michael Crichton)
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 13
strcpy(frase[posicao], "A personagem Elsa de 'Frozen' tem poderes mágicos relacionados ao fogo.");
resposta[posicao] = 0; // Falso (Ela tem poderes relacionados ao gelo)
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 14
strcpy(frase[posicao], "O filme 'Vingadores: Ultimato' foi o mais lucrativo de todos os tempos.");
resposta[posicao] = 0; // Falso (Foi 'Avatar' que detém esse título, mas 'Ultimato' é um dos maiores)
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 15
strcpy(frase[posicao], "O personagem Darth Vader é da franquia 'Star Wars'.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 16
strcpy(frase[posicao], "O filme 'Os Vingadores' foi lançado antes de 2010.");
resposta[posicao] = 0; // Falso (Foi lançado em 2012)
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 17
strcpy(frase[posicao], "A atriz Meryl Streep ganhou 3 Oscars.");
resposta[posicao] = 0; // Falso (Ela ganhou 2 Oscars até agora)
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 18
strcpy(frase[posicao], "A série 'Friends' é ambientada na cidade de Nova York.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 19
strcpy(frase[posicao], "A trilha sonora de 'Guardians of the Galaxy' é composta por músicas clássicas dos anos 80.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 20
strcpy(frase[posicao], "O ator Robert Downey Jr. foi o primeiro a interpretar o personagem Homem de Ferro no MCU.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 5; // Categoria 5: Entretenimento
posicao++;

// Pergunta 21
strcpy(frase[posicao], "A soma dos ângulos internos de um triângulo é sempre 180 graus.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 22
strcpy(frase[posicao], "O número π (pi) é uma constante irracional que representa a razão entre a circunferência de um círculo e seu diâmetro.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 23
strcpy(frase[posicao], "O número zero é considerado um número negativo.");
resposta[posicao] = 0; // Falso (Zero é neutro, nem positivo nem negativo)
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 24
strcpy(frase[posicao], "O quadrado de 12 é 144.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 25
strcpy(frase[posicao], "O valor de 2 elevado à terceira potência é 9.");
resposta[posicao] = 0; // Falso (2^3 = 8)
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 26
strcpy(frase[posicao], "O número 17 é um número primo.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 27
strcpy(frase[posicao], "O valor de π é aproximadamente 3,14.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 28
strcpy(frase[posicao], "Em um triângulo equilátero, todos os lados são diferentes.");
resposta[posicao] = 0; // Falso (Em um triângulo equilátero, todos os lados são iguais)
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 29
strcpy(frase[posicao], "A raiz quadrada de 81 é 9.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 30
strcpy(frase[posicao], "O ângulo reto tem 60 graus.");
resposta[posicao] = 0; // Falso (O ângulo reto tem 90 graus)
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 31
strcpy(frase[posicao], "A fórmula para calcular a área do círculo é A = πr².");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 32
strcpy(frase[posicao], "O número 25 é um quadrado perfeito.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 33
strcpy(frase[posicao], "A fórmula de Bhaskara é usada para resolver equações de primeiro grau.");
resposta[posicao] = 0; // Falso (É usada para resolver equações quadráticas)
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 34
strcpy(frase[posicao], "A soma dos ângulos internos de um quadrilátero é 360 graus.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 35
strcpy(frase[posicao], "O número 100 é divisível por 5.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 36
strcpy(frase[posicao], "A soma de 10 e 15 é 25.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 37
strcpy(frase[posicao], "O volume de um cubo é dado pela fórmula V = a³, onde 'a' é o comprimento de um dos lados.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 38
strcpy(frase[posicao], "O número π é uma fração exata.");
resposta[posicao] = 0; // Falso (π é uma constante irracional)
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 39
strcpy(frase[posicao], "Um ângulo agudo tem mais de 90 graus.");
resposta[posicao] = 0; // Falso (Um ângulo agudo tem menos de 90 graus)
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 40
strcpy(frase[posicao], "O número 9 é um número ímpar.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 4; // Categoria 4: Matemática
posicao++;

// Pergunta 41
strcpy(frase[posicao], "A água é composta por dois átomos de hidrogênio e um átomo de oxigênio.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 42
strcpy(frase[posicao], "A fotossíntese é o processo pelo qual as plantas convertem luz solar em energia química.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 43
strcpy(frase[posicao], "O Sol é uma estrela do tipo anã branca.");
resposta[posicao] = 0; // Falso (O Sol é uma estrela do tipo anã amarela)
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 44
strcpy(frase[posicao], "O oxigênio é essencial para a respiração celular dos animais.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 45
strcpy(frase[posicao], "Os dinossauros dominaram a Terra durante o período Cretáceo.");
resposta[posicao] = 0; // Falso (Eles dominaram durante os períodos Triássico, Jurássico e Cretáceo)
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 46
strcpy(frase[posicao], "A camada de ozônio protege a Terra dos raios ultravioletas do Sol.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 47
strcpy(frase[posicao], "O DNA está presente em todas as células dos seres vivos.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 48
strcpy(frase[posicao], "Os mamíferos são ovíparos.");
resposta[posicao] = 0; // Falso (A maioria dos mamíferos é vivípara, com exceção dos monotremados)
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 49
strcpy(frase[posicao], "A gravidade da Terra foi descoberta por Albert Einstein.");
resposta[posicao] = 0; // Falso (Foi descoberta por Isaac Newton)
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 50
strcpy(frase[posicao], "O sistema solar é composto por 8 planetas.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 51
strcpy(frase[posicao], "O corpo humano possui 206 ossos.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 52
strcpy(frase[posicao], "Os elefantes são os maiores mamíferos terrestres.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 53
strcpy(frase[posicao], "A Terra é o único planeta do sistema solar conhecido por abrigar vida.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 54
strcpy(frase[posicao], "O cérebro humano tem aproximadamente 100 bilhões de neurônios.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 55
strcpy(frase[posicao], "A teoria da evolução foi proposta por Charles Darwin.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 56
strcpy(frase[posicao], "Os gases se expandem para preencher qualquer recipiente.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 57
strcpy(frase[posicao], "A luz viaja mais rápido do que o som.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 58
strcpy(frase[posicao], "O aço é uma liga metálica composta principalmente por ferro e carbono.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 59
strcpy(frase[posicao], "As plantas carnívoras se alimentam de pequenos animais, como insetos.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 60
strcpy(frase[posicao], "O maior órgão do corpo humano é o cérebro.");
resposta[posicao] = 0; // Falso (A pele é o maior órgão do corpo humano)
categoria[posicao] = 2; // Categoria 2: Ciências
posicao++;

// Pergunta 61
strcpy(frase[posicao], "O Rio Amazonas é o maior rio do mundo em volume de água.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 62
strcpy(frase[posicao], "O Monte Everest está localizado no Nepal.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 63
strcpy(frase[posicao], "A capital da Austrália é Sydney.");
resposta[posicao] = 0; // Falso (A capital é Canberra)
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 64
strcpy(frase[posicao], "O deserto do Saara está localizado na África.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 65
strcpy(frase[posicao], "A cidade de Tóquio é a capital do Japão.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 66
strcpy(frase[posicao], "A Grande Muralha da China é visível da Lua.");
resposta[posicao] = 0; // Falso
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 67
strcpy(frase[posicao], "O Lago Baikal, na Rússia, é o lago mais profundo do mundo.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 68
strcpy(frase[posicao], "O Monte Kilimanjaro está localizado na África do Sul.");
resposta[posicao] = 0; // Falso (Está na Tanzânia)
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 69
strcpy(frase[posicao], "A Rússia é o maior país do mundo em termos de área.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 70
strcpy(frase[posicao], "A capital da Alemanha é Munique.");
resposta[posicao] = 0; // Falso (A capital é Berlim)
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 71
strcpy(frase[posicao], "A Antártida é o continente mais frio do planeta.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 72
strcpy(frase[posicao], "O Rio Nilo é o maior rio da África.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 73
strcpy(frase[posicao], "A Ilha de Madagascar é a maior ilha do mundo.");
resposta[posicao] = 0; // Falso (A maior ilha é a Groenlândia)
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 74
strcpy(frase[posicao], "O Everest está localizado na fronteira entre o Nepal e o Tibete.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 75
strcpy(frase[posicao], "O Oceano Pacífico é o maior oceano do mundo.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 76
strcpy(frase[posicao], "A ilha de Borneo é dividida por três países: Malásia, Indonésia e Brunei.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 77
strcpy(frase[posicao], "O deserto de Gobi está localizado no Brasil.");
resposta[posicao] = 0; // Falso (Está na China e na Mongólia)
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 78
strcpy(frase[posicao], "O Monte Fuji é uma montanha sagrada no Japão.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 79
strcpy(frase[posicao], "A capital da Índia é Mumbai.");
resposta[posicao] = 0; // Falso (A capital é Nova Déli)
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 80
strcpy(frase[posicao], "O Canal do Panamá conecta o Oceano Atlântico ao Oceano Pacífico.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 1; // Categoria 1: Geografia
posicao++;

// Pergunta 81
strcpy(frase[posicao], "A Revolução Francesa começou em 1789.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 82
strcpy(frase[posicao], "Cristóvão Colombo descobriu a América em 1492.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 83
strcpy(frase[posicao], "Napoleão Bonaparte nasceu na Itália.");
resposta[posicao] = 0; // Falso (Ele nasceu na Córsega, que na época era um território francês)
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 84
strcpy(frase[posicao], "O Império Romano durou mais de mil anos.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 85
strcpy(frase[posicao], "O muro de Berlim foi derrubado em 1989.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 86
strcpy(frase[posicao], "A Guerra Fria foi um conflito militar entre os Estados Unidos e a União Soviética.");
resposta[posicao] = 0; // Falso (Foi um confronto ideológico e político, não um conflito militar direto)
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 87
strcpy(frase[posicao], "A Idade Média durou aproximadamente de 500 a 1500 d.C.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 88
strcpy(frase[posicao], "A Segunda Guerra Mundial começou em 1939.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 89
strcpy(frase[posicao], "O Brasil se tornou independente de Portugal em 1822.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 90
strcpy(frase[posicao], "A Primeira Guerra Mundial terminou em 1920.");
resposta[posicao] = 0; // Falso (Terminou em 1918)
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 91
strcpy(frase[posicao], "Dom Pedro I proclamou a independência do Brasil no Rio de Janeiro.");
resposta[posicao] = 0; // Falso (A independência foi proclamada em São Paulo)
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 92
strcpy(frase[posicao], "Cleópatra foi a última rainha do Egito Ptolemaico.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 93
strcpy(frase[posicao], "A invenção da imprensa é atribuída a Johann Gutenberg.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 94
strcpy(frase[posicao], "A Revolução Industrial teve início na França.");
resposta[posicao] = 0; // Falso (Teve início na Inglaterra)
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 95
strcpy(frase[posicao], "A civilização maia floresceu na região que hoje é o México e América Central.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 96
strcpy(frase[posicao], "O Império Mongol foi fundado por Alexandre, o Grande.");
resposta[posicao] = 0; // Falso (Foi fundado por Genghis Khan)
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 97
strcpy(frase[posicao], "A construção da Muralha da China começou durante a dinastia Qin.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 98
strcpy(frase[posicao], "O Tratado de Versalhes foi assinado após a Primeira Guerra Mundial.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 99
strcpy(frase[posicao], "A primeira viagem ao redor do mundo foi realizada por Fernão de Magalhães.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;

// Pergunta 100
strcpy(frase[posicao], "O descobrimento do Brasil foi em 1500 por Pedro Álvares Cabral.");
resposta[posicao] = 1; // Verdadeiro
categoria[posicao] = 3; // Categoria 3: História
posicao++;
}