#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 5
Elabore um programa que apresente o maior e menor de 5 números lidos.
*/

  main(){
     setlocale(LC_ALL,"Portuguese");
     int menor =0, maior =-0, entrada, saida;

        while(saida<=5){
           fflush(stdin);
           printf(" Informe o %iº número:", saida);
           scanf("%i",&entrada);

           if(entrada>maior){
               maior = entrada;
           }
           if(entrada<menor){
               menor = entrada;
           }
           saida++;
        }
        printf(" O menor número: %i \n", menor);
        printf(" O maior número: %i \n", maior);
}
