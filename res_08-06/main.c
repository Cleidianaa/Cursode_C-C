#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Exerc�cio 1
Crie um programa que v� solicitando ao utilizador n�meros inteiros. O programa termina quando o
n�mero inserido for o n�mero �zero�.
 Como sa�da deve apresentar a soma dos n�meros inseridos e
quantos n�meros foram inseridos.*/
/*
int main(){
    setlocale(LC_ALL, "Portuguese");
   int num-1, soma, contador=-1;

   while (num!=0){
    printf(" Digite  um n�mero inteiro:");
    scanf("%i", &num);
    soma+=num;
    contador++;
   }
   printf("A soma dos n�meros � %i", soma);
   printf("\nForam inseridos %i n�meros." , contador);
}
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, soma, contador=-1;

    do{
        printf(" Digite um n�mero interio:");
        scanf("%i",&num);
        soma+=num;
        contador++;
    }while(num!=0);

    printf("A soma dos n�meros � %i", soma);
    printf(" \nForam inseridos %i n�meros .", contador);

}
