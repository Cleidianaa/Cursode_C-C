#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 2
Pretende-se determinar a classificação final de um aluno sabendo que a avaliação consiste em 2
testes e um trabalho. Para a determinação da média sabe-se que cada teste tem um peso de 35% e o
trabalho um peso de 30%.*/

main(){
    setlocale(LC_ALL, "Portuguese");
    float tesA, tesB, trabalho, notafinal;

    printf("\n Qual a sua nota? ");
    scanf("%f", &tesA);
    printf("\n Qual a sua segunda nota? ");
    scanf("%f", &tesB);
    printf("\n Qual a sua nota de trabalho? ");
    scanf("%f", &trabalho);

    notafinal=(tesA*0.35)+(tesB*0.35)+(trabalho*0.30);


    printf("\n O resultado final é: %.2f ", notafinal);





}



