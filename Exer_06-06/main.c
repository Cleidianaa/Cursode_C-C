#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  /*
Exerc�cio 1
Crie um programa que v� solicitando ao utilizador n�meros inteiros. O programa termina quando o
n�mero inserido for o n�mero "zero". Como sa�da deve apresentar a soma dos n�meros inseridos e
quantos n�meros foram inseridos.

*/

main(){
    setlocale(LC_ALL,"Portuguese");
    int num=999, contador=0, soma=0;
         while(num!=0){
             printf("Por favor  digite  um n�mero: ");
             scanf("%i", &num);
             soma+=num;
             contador++;

   }
         printf(" O total de n�meros digitados foi: %i\n soma dos n�meros inseridos foram %i", contador-1,soma);


   }