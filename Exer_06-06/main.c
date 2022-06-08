#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  /*
Exercício 1
Crie um programa que vá solicitando ao utilizador números inteiros. O programa termina quando o
número inserido for o número "zero". Como saída deve apresentar a soma dos números inseridos e
quantos números foram inseridos.

*/

main(){
    setlocale(LC_ALL,"Portuguese");
    int num=999, contador=0, soma=0;
         while(num!=0){
             printf("Por favor  digite  um número: ");
             scanf("%i", &num);
             soma+=num;
             contador++;

   }
         printf(" O total de números digitados foi: %i\n soma dos números inseridos foram %i", contador-1,soma);


   }