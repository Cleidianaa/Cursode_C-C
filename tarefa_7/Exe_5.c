#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
/*
Exerc�cio 5
Fa�a  um  programa  que  permita  ao utilizador fornecer  diversos  valores  positivos.
O programa dever�  parar  de  solicitar  valores  quando  o utilizador fornecer  um  valor negativo.
No final, o programa dever� informar a soma dos valores lidos.
Obs.: o valor negativo(�ltimo valor entrado)n�o deve entrar na conta da soma.
*/

  int main(){
    setlocale(LC_ALL,"Portuguese");
    int num= 0, soma=0;
    do{
       printf(" Por favor digite um n�mero positivo\n");
       scanf("%i",&num);
       if(num> 0){
           soma = soma + num;
       }
    }
	while(num> 0);
    printf(" Valor Total: %i \n", soma);
}
