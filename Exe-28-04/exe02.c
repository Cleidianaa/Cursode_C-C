#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
Exercício 2
Crie um programa que converta graus Celsius em Fahrenheit.
F = 37 x 1,8 + 32
*/

void main(){
    setlocale(LC_ALL, "Portuguese");
    float c, f;
    printf("Digite  o valor do Celsius");
    scanf("%f", &c);

    f=((c* 1,8)+32);

    printf("\n O valor de Fahrenheit é: %.2f", f);

}
