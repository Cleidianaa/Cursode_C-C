#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 5
Crie um programa que converta euros em d�lares � taxa de c�mbio do dia de 28-04-
2022.
*/
void main(){
    setlocale(LC_ALL, "Portuguese");
    float cambio, euro;
    printf("\n Qual o valor de Euro que quer converter para D�lores: ");
    scanf("%f", &euro);

    cambio=euro*1.055;

    printf("\n O valor que ser� convertido vai ser: %2.f D�lares " ,cambio);

}
