#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Exercício 1
Crie um algoritmo que mostre se um dado ano é bissexto ou comum.
Nota:
Um ano é bissexto quando é divisível por 4 e por 100 ou divisível por 400.
*/


int main(){
    setlocale(LC_ALL,"Portuguese");
    int ano;
    printf( " Vamos ver se  o ano é BISSEXTO!\n");
    printf( " Digite o Ano: \n");
    scanf( "%i",&ano);

    if(ano%400==0 || ano%4==0 && ano%100!=0){
        printf("%i, é ano BISSEXTO!\n",ano);
    }
    else{
        printf ("%i, não é ano BISSEXTO!\n", ano);
    }


    return 0;
}
