#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
Exerc�cio 4
Crie um programa para calcular a �rea de um quadrado. O tamanho do lado deve ser
informado pelo utilizador.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    float area, largura;
    printf(" Qual a largura do quadrado: ");
    scanf("%f", &largura);

    area=largura*largura;

    printf("\n A �rea do quadrado �: %.2f", area);
}
