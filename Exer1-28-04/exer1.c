#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio1
Ler o valor do raio de um c�rculo e calcular a �rea desse c�rculo.
A=PI x raio^2 */


void main(){
    setlocale(LC_ALL, "Portuguese");
    float raio, area, pi=3.14;
    printf(" Qual o c�rculo da raio? ");
    scanf("%f", &raio);

    area=(pi*(raio*raio));

    printf("\nO a �rea deste c�rculo �: %.2f", area);
}
