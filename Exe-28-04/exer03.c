#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
Exerc�cio 3
Crie um programa que converta euros em libras � taxa de c�mbio do dia de 28-04-
2022.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");
    float cambio, libra;
    printf("\n Qual o valor de Euro que quer converter para Libras: ");
    scanf("%f", &libra);

    cambio=libra*0.84;

    printf("\n O valor que ser� convertido vai ser: %2.f Libras ",cambio);
}
