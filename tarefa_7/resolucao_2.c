#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 2
Fa�a um programa que solicite ao utilizadorum valor positivo.
O programa dever� repetir a solicita��o caso o utilizador forne�a um valor inv�lido (negativo).
Quandoo utilizador fornecer um valor v�lido, mostre uma mensagem de texto confirmando o valor digitado.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero=0;
    do{
        printf(" Informe um n�mero positivo:");
        scanf("%i",&numero);
    }while(numero<=0);
    printf("\nO n�mero positivo v�lido � %i",numero);
}
