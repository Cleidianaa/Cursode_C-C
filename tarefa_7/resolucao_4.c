#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exerc�cio 4
Fa�a um programa que gere e exiba, por extenso, n�meros aleat�rios entre 0 (zero) e15.
O programa deve gerar os n�meros at� que o n�mero 15 seja sorteado.
O programadeve mostrartamb�m, no final, a quantidade de n�meros gerados
*/


 int main(){
     setlocale(LC_ALL,"Portuguese");
     int num=0, contador=-1;
     srand(time(NULL));
     do{
        num=rand()%16;
        switch(num){
            case 0:
                printf("\nO n� gerado foi o zero.");
                break;
            case 1:
                printf("\nO n� gerado foi o um.");
                break;
            case 2:
                printf("\nO n� gerado foi o dois.");
                break;
            case 3:
                printf("\nO n� gerado foi o tr�s.");
                break;
            case 4:
                printf("\nO n� gerado foi o quatro.");
                break;
            case 5:
                printf("\nO n� gerado foi o cinco.");
                break;
            case 6:
                printf("\nO n� gerado foi o seis.");
                break;
            case 7:
                printf("\nO n� gerado foi o sete.");
                break;
            case 8:
                printf("\nO n� gerado foi o oito.");
                break;
            case 9:
                printf("\nO n� gerado foi o nove.");
                break;
            case 10:
                printf("\nO n� gerado foi o dez.");
                break;
            case 11:
                printf("\nO n� gerado foi o onze.");
                break;
            case 12:
                printf("\nO n� gerado foi o doze.");
                break;
            case 13:
                printf("\nO n� gerado foi o treze.");
                break;
            case 14:
                printf("\nO n� gerado foi o quatoze.");
                break;
            default:
                printf("\nO n� gerado foi o quinze.");
        }
     }while(num!=15);
     printf("Foram sorteados %i n�meros.", contador);
 }
