#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 1
Crie uma programa em C, que receba 5 n�meros inteiros e os armazene num array. Crie um 2� array
com os mesmos valores do 1�. Mostre os valores.

*/

main() {
	setlocale(LC_ALL,"Portuguese");
    int vetor[5], num;

    printf("Indique valor para a %i� posi��o:",(num+1));
    for(num=0;num<5;num++){
    scanf("%i", &vetor[num]);
    }
    for(num=4;num>=0;num--){
        printf("\nValor para a %i� posi��o: %i",(num+1),vetor[num]);
		sleep(2);
    }

}
