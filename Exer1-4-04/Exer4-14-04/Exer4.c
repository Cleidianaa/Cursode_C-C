#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio4
Numa casa existe uma caixa no exterior que serve como reservat�rio de �gua.
Considerando a caixa retangular, crie um programa que leia as dimens�es (comprimento, altura e largura),
calcule e escreva o volume de �gua que pode ser armazenado.*/

main(){
    setlocale(LC_ALL, "Portuguese");
    float comprimento, altura, largura, volume;
    printf("\n Digite  o comprimento? ");
    scanf("%f", &comprimento);
    printf("\n Digite a altura? ");
    scanf("%f", &altura);
    printf("\n Digite  a largura? ");
    scanf("%f", &largura);

    volume=comprimento*altura*largura;

    printf(" \n O volume de  �gua total armazenado. %.2f", volume);


}

