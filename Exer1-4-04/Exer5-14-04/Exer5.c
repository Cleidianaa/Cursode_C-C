#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio5 O Vasco distribui a sua mesada da seguinte forma:
 10% sa�de,
 25% educa��o,
 30% alimenta��o,
 10% vestu�rio;
 5% lazer,
 20% outros.
 Crie um algoritmo que leia a renda mensal l�quida, calcule e escreva o valor aplicado a cada item acima citado. */

void main(){
   setlocale(LC_ALL, "Portuguese");
   float saude, educacao, alimentacao, vestuario, lazer, outros, mesada;
       printf("\n Digite o valor total da sua mesada? ");
       scanf("%f", &mesada);

        saude=mesada*0.1;
        educacao=mesada*0.25;
        alimentacao=mesada*0.30;
        vestuario=mesada*0.10;
        lazer=mesada*0.05;
        outros=mesada*0.20;

        printf("\n O valor de 10%% para sa�de �: %.2f:", saude);
        printf("\n O valor de 25%% para educa��o �: %.2f",educacao);
        printf("\n O valor de 30%% para alimenta��o �: %.2f",alimentacao);
        printf("\n O Valor de 10%% para vestu�rio �: %.2f",vestuario);
        printf("\n O Valor de 5%% para lazer �: %.2f", lazer);
        printf("\n O valor de 20%% outros, gastos a parte �: %.2f", outros);


}
