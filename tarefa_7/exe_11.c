#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/*Exerc�cio 1
Fa�a um programa que mostre no e cr�os n�meros naturais entre 0 (zero) e 100.
 Crie tr�s   vers�es   desse   programa,   cada   uma   usando   uma   estrutura   de   repeti��o diferente.*/

int main(){
    setlocale(LC_ALL,"Portuguese");
        int soma, num;
        soma = 100;
        for (num = 1; num <= soma; num++)
        printf(" N�meros Naturais  %d\n", num);

}
