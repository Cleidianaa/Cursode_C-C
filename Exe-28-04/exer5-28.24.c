#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 5
Crie um programa que converta euros em dólares à taxa de câmbio do dia de 28-04-
2022.
*/
void main(){
    setlocale(LC_ALL, "Portuguese");
    float cambio, euro;
    printf("\n Qual o valor de Euro que quer converter para Dólores: ");
    scanf("%f", &euro);

    cambio=euro*1.055;

    printf("\n O valor que será convertido vai ser: %2.f Dólares " ,cambio);

}
