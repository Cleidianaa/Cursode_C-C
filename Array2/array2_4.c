#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
4. Escrever um programa em C que:
a) Gere todo o conjunto A de 5 elementos inteiros entre 100 e 200;
b) Verificar se a soma dos elementos � um valor par ou �mpar.
c) Criar um 2� vetor obtido a partir do anterior que resulte no dobro dos valores
do 1�.
*/

main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
    int arrayA[5];
    int arrayB[5];
    int soma=0;

    // posi��o A)
    for(int i= 0; i< 5; i++){
        arrayA[i] = (rand()%100+100);
    }
    // posi��o A+B)
    for(int i= 0; i<5; i++){
        soma += arrayA[i];
        printf("%i - %i \n",i, arrayA[i]);
        arrayB[i] = arrayA[i]*2;
    }
     // A soma dos dois)
    if(soma %2==0){
        printf("O valor da soma � par\n");
    }
    else{
        printf("O valor da soma � impar\n");
    }
    for(int i= 0; i<5; i++){
        printf("%i - %i \n",i, arrayB[i]);
    }
}
