#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
2. Fa�a um programa para verificar se um determinado n�mero, fornecido pelo utilizador, � divis�vel
por 3 ou por 5 mas n�o por ambos.
*/

main () {

    setlocale (LC_ALL,"Portuguese");
    int N1;
    printf(" Digite um numero: ");
    scanf("%i", &N1);
    if(N1%3==0 && N1%5!=0){
        printf("%i Divisivel por 3!\n", N1);
    }
    else if( N1%5==0 && N1%3!=0){
        printf("%i Divisivel Por 5!\n", N1);
    }
    else{
        printf(" %i N�o �  Divisivel Por 3 ou 5!\n", N1);
    }


}
