#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 3
Crie uma fun��o em C, do tipo void, que gere um n�mero aleat�rio entre 10 e 50 e devolva a
informa��o se o n�mero � divis�vel por 5.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	Num_Aleatorio();
}
void Num_Aleatorio(){
	int i= 10 +(rand()%40+1);
	int soma=i % 5;

	if(soma==0){
        printf("O valor sorteado %i � divis�vel por 5",i);
    }
    else{
        printf("O valor sorteado %i n�o � divis�vel por 5",i);
    }
}

