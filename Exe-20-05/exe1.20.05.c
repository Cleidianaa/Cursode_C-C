#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Exerc�cio 1
Crie um algoritmo que mostre se um dado ano � bissexto ou comum.
Nota:
Um ano � bissexto quando � divis�vel por 4 e por 100 ou divis�vel por 400.
*/


int main(){
    setlocale(LC_ALL,"Portuguese");
    int ano;
    printf( " Vamos ver se  o ano � BISSEXTO!\n");
    printf( " Digite o Ano: \n");
    scanf( "%i",&ano);

    if(ano%400==0 || ano%4==0 && ano%100!=0){
        printf("%i, � ano BISSEXTO!\n",ano);
    }
    else{
        printf ("%i, n�o � ano BISSEXTO!\n", ano);
    }


    return 0;
}
