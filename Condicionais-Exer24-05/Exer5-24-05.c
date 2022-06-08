#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
5. Escreva um programa completo que, dados dois números inteiros, mostre o maior deles, assim,
como a diferença existente entre ambos.
*/
main(){

    setlocale (LC_ALL,"Portuguese");
    int N1, N2;
    printf(" Por favor digite um número:\n");
    scanf("i", &N1);
    printf(" Por favor digite outro número:\n");
    scanf("i", &N2);

    if(N1==N2){
        printf("Valores são iguais:\n");
    }
    if((N1>N2)||(N1<N2)){
        printf(" O valor maior é:\n ",N1);
        printf(" O valor maior é:\n ",N2);
    }
    else{
        printf(" Somando a diferença fica:\n ",N1-N2);
    }


}
