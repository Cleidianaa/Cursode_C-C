#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
5. Escreva um programa completo que, dados dois n�meros inteiros, mostre o maior deles, assim,
como a diferen�a existente entre ambos.
*/
main(){

    setlocale (LC_ALL,"Portuguese");
    int N1, N2;
    printf(" Por favor digite um n�mero:\n");
    scanf("i", &N1);
    printf(" Por favor digite outro n�mero:\n");
    scanf("i", &N2);

    if(N1==N2){
        printf("Valores s�o iguais:\n");
    }
    if((N1>N2)||(N1<N2)){
        printf(" O valor maior �:\n ",N1);
        printf(" O valor maior �:\n ",N2);
    }
    else{
        printf(" Somando a diferen�a fica:\n ",N1-N2);
    }


}
