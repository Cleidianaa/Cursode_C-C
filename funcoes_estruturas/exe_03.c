#include <stdio.h>
#include <stdlib.h> //fun��o rand
#include <time.h> //necess�ria para usar a fun��o time
#include <locale.h>
/*
Exerc�cio 3
Crie uma fun��o em C, do tipo void, que gere um n�mero aleat�rio entre 0 e 50 e devolva a
informa��o se o n�mero � par ou �mpar.
*/

void InformarNumero(){
	int num = (rand()%50+1);
	int soma = num%2;

	if (soma==0){
        printf("O n�mero informado � PAR: %i ", num);
    }
    else{
        printf("O n�mero informado � IMPAR: %i ", num);
    }
}
void main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	InformarNumero();
}

