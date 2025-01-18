#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "perguntas.h"

int posicao = 0;
char frase[100][100];
int resposta[100];
void cadastroFrase()
{

  // Pergunta 1
  strcpy(frase[posicao], "O Monte Everest é a montanha mais alta do mundo.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 2
  strcpy(frase[posicao], "As baleias são mamíferos.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 3
  strcpy(frase[posicao], "O Deserto do Saara é o maior deserto do mundo.");
  resposta[posicao] = 0; // Falso (O maior é a Antártida, considerando deserto polar)
  posicao++;

  // Pergunta 4
  strcpy(frase[posicao], "O cérebro humano tem cerca de 100 bilhões de neurônios.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 5
  strcpy(frase[posicao], "O Brasil é o único país da América do Sul que fala espanhol.");
  resposta[posicao] = 0; // Falso (A língua oficial é o português)
  posicao++;

  // Pergunta 6
  strcpy(frase[posicao], "O mel é o único alimento que nunca estraga.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 7
  strcpy(frase[posicao], "A Torre Eiffel foi projetada por um arquiteto italiano.");
  resposta[posicao] = 0; // Falso (Foi projetada pelo francês Gustave Eiffel)
  posicao++;

  // Pergunta 8
  strcpy(frase[posicao], "Os golfinhos dormem com metade do cérebro acordado.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 9
  strcpy(frase[posicao], "A Lua é maior do que Plutão.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 10
  strcpy(frase[posicao], "Os cangurus só existem na Austrália.");
  resposta[posicao] = 0; // Falso (Existem em algumas ilhas próximas)
  posicao++;

  // Pergunta 11
  strcpy(frase[posicao], "O café foi descoberto na Etiópia.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 12
  strcpy(frase[posicao], "Os humanos compartilham cerca de 60% do DNA com bananas.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 13
  strcpy(frase[posicao], "O primeiro computador do mundo ocupava o tamanho de um quarto.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 14
  strcpy(frase[posicao], "O Oceano Pacífico é menor que o Oceano Atlântico.");
  resposta[posicao] = 0; // Falso (O Pacífico é o maior oceano)
  posicao++;

  // Pergunta 15
  strcpy(frase[posicao], "A Terra tem exatamente 24 horas por dia.");
  resposta[posicao] = 0; // Falso (O dia solar médio é de 24 horas e alguns segundos)
  posicao++;

  // Pergunta 16
  strcpy(frase[posicao], "As formigas conseguem carregar até 50 vezes o próprio peso.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 17
  strcpy(frase[posicao], "O sol é composto principalmente de oxigênio.");
  resposta[posicao] = 0; // Falso (É composto principalmente de hidrogênio e hélio)
  posicao++;

  // Pergunta 18
  strcpy(frase[posicao], "O menor país do mundo em área é o Vaticano.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 19
  strcpy(frase[posicao], "O sangue humano é sempre vermelho, mesmo dentro do corpo.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 20
  strcpy(frase[posicao], "A Amazônia cobre mais de 50% do território brasileiro.");
  resposta[posicao] = 0; // Falso (Cobre cerca de 40%)
  posicao++;

  // Pergunta 21
  strcpy(frase[posicao], "Os tubarões são peixes que não possuem ossos.");
  resposta[posicao] = 1; // Verdadeiro (Eles possuem cartilagem)
  posicao++;

  // Pergunta 22
  strcpy(frase[posicao], "O calor faz a água ferver mais rápido em altas altitudes.");
  resposta[posicao] = 0; // Falso (Ela ferve a temperaturas mais baixas em altitudes elevadas)
  posicao++;

  // Pergunta 23
  strcpy(frase[posicao], "O maior animal terrestre é o elefante africano.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 24
  strcpy(frase[posicao], "O idioma mais falado no mundo é o inglês.");
  resposta[posicao] = 0; // Falso (O mais falado é o mandarim)
  posicao++;

  // Pergunta 25
  strcpy(frase[posicao], "O corpo humano tem 206 ossos na fase adulta.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 26
  strcpy(frase[posicao], "O Triângulo das Bermudas está localizado no Oceano Atlântico.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 27
  strcpy(frase[posicao], "O coração humano bate cerca de 100 mil vezes por dia.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 28
  strcpy(frase[posicao], "O chocolate branco não é tecnicamente chocolate.");
  resposta[posicao] = 1; // Verdadeiro (Não contém sólidos de cacau)
  posicao++;

  // Pergunta 29
  strcpy(frase[posicao], "A Estátua da Liberdade foi um presente da Inglaterra para os Estados Unidos.");
  resposta[posicao] = 0; // Falso (Foi um presente da França)
  posicao++;

  // Pergunta 30
  strcpy(frase[posicao], "Os pinguins são encontrados apenas no hemisfério sul.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 31
  strcpy(frase[posicao], "Os vulcões podem existir debaixo d'água.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 32
  strcpy(frase[posicao], "O idioma oficial da Suíça é apenas o alemão.");
  resposta[posicao] = 0; // Falso (Há quatro idiomas oficiais)
  posicao++;

  // Pergunta 33
  strcpy(frase[posicao], "O leite de hipopótamo é de cor rosa.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 34
  strcpy(frase[posicao], "Os dinossauros existiram há mais de 65 milhões de anos.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 35
  strcpy(frase[posicao], "A eletricidade foi descoberta por Thomas Edison.");
  resposta[posicao] = 0; // Falso (Foi Benjamin Franklin que fez experimentos pioneiros)
  posicao++;

  // Pergunta 36
  strcpy(frase[posicao], "A capital do Canadá é Toronto.");
  resposta[posicao] = 0; // Falso (A capital é Ottawa)
  posicao++;

  // Pergunta 37
  strcpy(frase[posicao], "A baleia azul é o maior animal que já existiu na Terra.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 38
  strcpy(frase[posicao], "Os humanos possuem cinco sentidos no total.");
  resposta[posicao] = 0; // Falso (Há mais sentidos, como equilíbrio e percepção de temperatura)
  posicao++;

  // Pergunta 39
  strcpy(frase[posicao], "O oxigênio é o elemento mais abundante na crosta terrestre.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  // Pergunta 40
  strcpy(frase[posicao], "O Mar Morto é um lago de água salgada.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A constante de Planck tem o valor aproximado de 6,63 × 10^-34 J·s.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A primeira vacina desenvolvida foi contra a varíola.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O metal mais abundante na crosta terrestre é o ferro.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A cidade de Constantinopla foi renomeada para Istambul em 1930.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A partícula responsável pela força nuclear forte é o bóson de Higgs.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A Primeira Guerra Mundial terminou em 11 de novembro de 1918.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A teoria do Big Bang foi proposta originalmente por Georges Lemaître.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O planeta Vênus gira no sentido horário, diferente da maioria dos planetas do Sistema Solar.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A fórmula matemática E=mc² foi introduzida na teoria da gravitação universal.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A menor partícula conhecida é o neutrino.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "O Mar Cáspio é classificado como um lago e não como um mar.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A unidade de medida para a força no Sistema Internacional é o newton.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O reino fungi inclui organismos como algas e cogumelos.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A Aurora Boreal ocorre em latitudes próximas ao Polo Norte.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "Os elementos de transição na tabela periódica ocupam o bloco 's'.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A capital da Mongólia é Ulaanbaatar.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A língua mais falada no mundo é o mandarim.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A proteína responsável pelo transporte de oxigênio no sangue é a mioglobina.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "O hélio é o elemento mais leve da tabela periódica.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "O telescópio Hubble foi lançado em 1990.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O ponto mais profundo do oceano é conhecido como Fossa das Marianas.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A velocidade da luz no vácuo é de aproximadamente 300.000 km/s.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A língua oficial da Etiópia é o Árabe.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A primeira lei de Newton também é conhecida como Lei da Inércia.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O planeta Marte possui 5 luas.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A teoria da relatividade foi formulada por Albert Einstein.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A baleia-jubarte é conhecida por ser o animal mais rápido do oceano.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A capital da Austrália é Sydney.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "O elemento químico com símbolo 'Hg' é o Mercúrio.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A cordilheira dos Andes é a mais longa do mundo.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A fórmula química do sal de cozinha é NaCl.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O maior deserto gelado do mundo é o Ártico.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A maior população de língua inglesa está na Índia.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "O piano foi inventado por Bartolomeo Cristofori.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A estrela mais próxima da Terra, além do Sol, é a Alfa Centauri.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O Monte Everest é a montanha mais alta do mundo medida do centro da Terra.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A Via Láctea é uma galáxia do tipo elíptica.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A Antártida contém cerca de 70% da água doce do mundo.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O planeta Júpiter possui mais de 70 luas conhecidas.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A unidade de medida 'joule' é usada para energia.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O Brasil é o maior país do mundo.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A água ferve a 100 graus Celsius ao nível do mar.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "Os humanos têm três corações.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "O Sol é uma estrela.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O Egito fica na Ásia.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "Os peixes respiram oxigênio dissolvido na água.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O menor osso do corpo humano está no ouvido.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O Oceano Atlântico é o maior oceano do mundo.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A Lua é um planeta.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "Um ano tem 365 dias, exceto nos anos bissextos.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A Torre Eiffel fica na Alemanha.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "O canguru é um animal típico da Austrália.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A Terra tem dois satélites naturais.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "O piano é considerado um instrumento de cordas.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O Japão é formado por mais de 6.000 ilhas.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O chocolate é feito de cacau.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A capital da Argentina é Santiago.");
  resposta[posicao] = 2; // Falso
  posicao++;

  strcpy(frase[posicao], "A baleia-azul é o maior animal do mundo.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "O Big Ben é o nome do sino, e não da torre.");
  resposta[posicao] = 1; // Verdadeiro
  posicao++;

  strcpy(frase[posicao], "A Grande Muralha da China pode ser vista do espaço.");
  resposta[posicao] = 2; // Falso
  posicao++;
  printf("Frase cadastrada com sucesso\n");
  printf("%d\n", posicao);
}