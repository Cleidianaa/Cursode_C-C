#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 3
Crie um algoritmo que leia o pre�o anterior e pre�o atual de 1 artigo b�sico e determine a taxa de
infla��o desse artigo
*/

 main(){
    setlocale(LC_ALL, "Portuguese");
    float artigo1, artigo2, precoatual;
    printf("\nDigite o valor do artigo: ");
    scanf("%f", &artigo1);

    precoatual=(artigo1+artigo2),(artigo2-artigo1);

    printf(" \nO valor anterior � %2f", artigo2-artigo1);
    printf(" \nO valor atual � %2f", artigo1+artigo2);
    printf(" \nO pre�o do artigo �: %.2f", precoatual);


}
