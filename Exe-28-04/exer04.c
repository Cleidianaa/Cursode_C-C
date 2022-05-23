#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
Exercício 4
Crie um programa para calcular a área de um quadrado. O tamanho do lado deve ser
informado pelo utilizador.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    float area, largura;
    printf(" Qual a largura do quadrado: ");
    scanf("%f", &largura);

    area=largura*largura;

    printf("\n A área do quadrado é: %.2f", area);
}
