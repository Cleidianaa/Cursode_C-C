#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 3
Crie uma programa em C, que gere 20 n�meros aleat�rios (entre 0 e 50), e os armazene num array.
Ser� solicitado ao utilizador um n�mero entre 0 e 50 por forma a verificar se o mesmo se encontra no
array. Se sim informa em que posi��o(�es) sen�o escreve que o n�mero n�o existe.

*/

main(){
	setlocale(LC_ALL,"Portuguese");
	int array[20], num=0;
	int existe=0;
	srand(time(NULL));
	for(num=0; num<20; num++){
        array[num]= rand()% 50+1;
        printf("\nInforme um n�mero: ");
        scanf("%i", &array[num]);
       if(array[num]==num){
        printf("\nO Numero informando encotra-se dentro do array %i", (num+1));
        existe=1;
       }

    }
    if(existe== array[num]){

        printf("O N�mero n�o existe no  array.");
    }

}
