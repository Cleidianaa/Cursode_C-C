#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 5
Elabore um programa que apresente o maior e menor de 5 n�meros lidos.
*/

  main(){
     setlocale(LC_ALL,"Portuguese");
     int menor =0, maior =-0, entrada, saida;

        while(saida<=5){
           fflush(stdin);
           printf(" Informe o %i� n�mero:", saida);
           scanf("%i",&entrada);

           if(entrada>maior){
               maior = entrada;
           }
           if(entrada<menor){
               menor = entrada;
           }
           saida++;
        }
        printf(" O menor n�mero: %i \n", menor);
        printf(" O maior n�mero: %i \n", maior);
}
