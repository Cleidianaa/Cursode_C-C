#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exrc�cios 1:
Dado o array VET, inteiro de 100 posi��es, desenvolver um programa em C para
cada um dos itens abaixo:
a) preench�-lo com o valor inteiro 30; mostrar os dados.
b) preench�-lo com os n�meros inteiros 1, 2, 3, ..., 100; mostrar os dados.
c) preencher VET(i ) com 1, se i � �mpar, e com 0 se for par; mostrar os dados.
*/
 main() {
	setlocale(LC_ALL,"Portuguese");
	int vetor[100],i=0;

    printf("\nQuest�o A");// (a)
	for(i =0; i< 100; i++){
		vetor[i] = 30;
    }
    for(i= 0; i < 100; i++){
		printf(" \n O valor da posi��o %i � :%i",i,vetor[i]);
    }

    printf("\nQuest�o B");//(B)
    for(i= 0; i< 100; i++){
		vetor[i] = i+1;
    }
    for(i= 0; i< 100; i++){
		printf(" \n O valor da posi��o %i � :%i",i, vetor[i]);
    }

    printf("\nQuest�o C");//(C)
    for(i= 0; i<100; i++){
	    if(i% 2 == 0){
            vetor[i] =0;
        }
        else{
            vetor[i] =1;
        }
    }
    for(i= 0; i < 100; i++){
		printf(" \n O valor da posi��o %i � :%i",i, vetor[i]);
    }
}
