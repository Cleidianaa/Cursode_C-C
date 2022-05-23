#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
Exercício 5
Elabore um programa que leia três valores e apresente, como resultado final, a soma
dos quadrados dos três valores lidos.
*/

void main(){

    setlocale(LC_ALL, "Portuguese");
    float valor1, valor2, valor3, soma;

    printf(" Digite o Primeiro valor: ");
    scanf("%f", &valor1);
    printf("\n Digite o Segundo valor: ");
    scanf("%f", &valor2);
    printf("\n Digite  o Terceiro valor: ");
    scanf("%f", &valor3);

    soma=((valor1*valor1)+(valor2*valor2)+(valor3*valor3));

    printf("\n A soma dos três valores são: %.2f ", soma);

}
