#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Exerc�cio
Crie um programa que gere 3 n�meros aleat�rios no intervalo [1:7].
Caso a sa�da
corresponda a 3 setes o programa acumula 100 cr�ditos, se 2 setes 50 cr�ditos, um
sete 25 cr�ditos, 3 iguais diferentes de sete, 15 cr�ditos, nenhuma das anteriores
retira 20 cr�ditos.
O programa inicia com 100 cr�ditos e termina quando o n� de
cr�ditos for zero ou o utilizador decida interromper, devendo apresentar o n�mero
de cr�ditos obtidos.

*/

 main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int num1, num2, num3, soma=100, sair=1;

    while(sair==1){
        num1= (rand()%8);
        num2= (rand()%8);
        num3= (rand()%8);

        printf("N�meros Sorteados: %i %i %i \n",num1, num2, num3);

        if(num1==7 && num2 ==7 && num3 ==7){
            soma += 100;
        }else if(num1 ==7 && num2 ==7 || num1 ==7 && num3 ==7 || num2 ==7 && num3 ==7){
            soma += 50;
        }else if(num1 ==7 || num2 ==7 || num3 ==7){
            soma += 25;
        }else if(num1 == num2 && num1 == num3 && num2 == num3){
            soma += 15;
        }else{
            soma -= 20;
        }
        printf("Saldo Atual: %i \n",soma);

        if(soma <= 0){
            break;
        }
        printf("Deseja Jogar Novamente?\n");
        printf("1 - Sim\n");
        printf("2 - N�o\n");
        scanf("%i", &sair);
    }
    printf("Saldo Final: %i \n",soma);
    printf("N�mero de cr�ditos obtidos: %i \n",soma -100);
}
