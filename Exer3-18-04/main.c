#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 3
Crie um algoritmo que leia o preço anterior e preço atual de 1 artigo básico e determine a taxa de
inflação desse artigo
*/

 main(){
    setlocale(LC_ALL, "Portuguese");
    float artigo1, artigo2, precoatual;
    printf("\nDigite o valor do artigo: ");
    scanf("%f", &artigo1);

    precoatual=(artigo1+artigo2),(artigo2-artigo1);

    printf(" \nO valor anterior é %2f", artigo2-artigo1);
    printf(" \nO valor atual é %2f", artigo1+artigo2);
    printf(" \nO preço do artigo é: %.2f", precoatual);


}
