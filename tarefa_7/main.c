#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/*Exerc�cio 1
Fa�a um programa que mostre no e cr�os n�meros naturais entre 0 (zero) e 100.
 Crie tr�s   vers�es   desse   programa,   cada   uma   usando   uma   estrutura   de   repeti��o diferente.*/

int main() {
    setlocale(LC_ALL,"Portuguese");
    int num;
    do{
       printf("N�meros Naturais: %i \n", num);
       num++;
    }
	while(num<= 100);

}


