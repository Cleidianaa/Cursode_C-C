#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Exerc�cio 5
Fa�a um programa que permita ao utilizador fornecer diversos valores positivos.
O programa dever� parar de solicitar valores quando o utilizador fornecer  um  valor negativo.
No final,o programa dever� informar a soma dos valores lidos.
Obs.:o valor negativo
(�ltimo valor entrado)n�o deve entrar na conta da soma.
*/

int main(){
     setlocale(LC_ALL,"Portuguese");
     int  numero=0,soma=0;
     do{
        printf("Digite um n�mero positivo:");
        scanf("%i",&numero);
        if(numero>0)soma+=numero;

     }while(numero>=0);
     printf("\nA soma dos n�merose %i",soma);

}
