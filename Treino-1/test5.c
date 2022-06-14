#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Pretende-se: Desenvolver um programa em C que gere um n�mero aleat�rio entre 0 e 100.
O utilizador vai ter 5 tentativas para adivinhar o n�mero. A cada tentativa informa se o n�mero est� abaixo, acima ou se acertou.
Se acertou o programa termina e deve dar a possibilidade de jogar outra vez.
Se esgotadas as tentativas e n�o adivinhar mostra o n�mero gerado e deve dar tamb�m a possibilidade de jogar oura vez.
*/

int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int numS=0,numE=0,contador=0,soma=1;
    numS=(rand()%100);

    while(soma==1){
        do{
           contador++;
           printf(" Digite um n�mero\n");
           scanf("%i", &numE);
           if(numE==numS){
               printf(" Parab�ns!!!!!\n");
               break;
           }
           else if(numE<numS){
               printf(" N�mero Menor\n");
           }
           else if(numE>numS){
               printf(" N�mero Maior\n");
           }
        }
        while(numE!=numS && contador<5);
        printf("N�mero Sorteado: %i \n",numS);
        contador=0;
        numS=(rand()%100);

        printf(" Deseja Jogar Novamente?\n 1- Sim\n 2- N�o\n ");
        scanf("%i", &soma);
    }
}
