#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 3
Programa para calcular a área de um círculo (A = π . r2).
Desta vez, se o utilizador introduzir um valor negativo para o raio, o programa volta a pedir um valor para o raio e só depois calcula a área. */

  main(){
     setlocale(LC_ALL,"Portuguese");
    float raio = -1, pi=3.14, area=0;
        while(raio < 0){
           printf(" Informe o valor do raio: \n");
           scanf("%f", &raio);
        }
        area = pi * (raio * raio);
        printf(" Area: %.2f \n", area);

}
