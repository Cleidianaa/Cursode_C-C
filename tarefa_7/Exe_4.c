#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
/*
Exerc�cio 4
Fa�a um programa que gere e exiba, por extenso, n�meros aleat�rios entre 0 (zero) e 15.
O  programa  deve  gerar  os  n�meros  at�  que  o  n�mero  15  seja  sorteado.
O programa deve mostrar tamb�m, no final, a quantidade de n�meros gerados.
*/

  int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int num=0, contador =0;
    do{
       contador ++;
       num=(rand()%15+1);
       switch(num){
            case 1:
                    printf("Um \n");
                    break;
            case 2:
                    printf("Dois \n");
                    break;
            case 3:
                    printf("Tr�s \n");
                    break;
            case 4:
                    printf("Quatro \n");
                    break;
            case 5:
                    printf("Cinco \n");
                    break;
            case 6:
                    printf("Seis \n");
                    break;
            case 7:
                    printf("Sete \n");
                    break;
            case 8:
                    printf("Oito \n");
                    break;
            case 9:
                    printf("Nove \n");
                    break;
            case 10:
                    printf("Dez \n");
                    break;
            case 11:
                    printf("Onze \n");
                    break;
            case 12:
                    printf("Doze \n");
                    break;
            case 13:
                    printf("Treze \n");
                    break;
            case 14:
                    printf("Quatorze \n");
                    break;
            case 15:
                    printf("Quinze \n");
                    break;
        }
    }
	while(num!= 15);

	printf("\n Total de n�meros: %i \n", contador);
}
