#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Dados tr�s valores A, B e C, verificar se podem ser comprimentos de lados de um tri�ngulo e, se
formam um tri�ngulo equil�tero, is�sceles ou escaleno. Considere que:

-> O comprimento de um lado do tri�ngulo � menor que a soma dos dois outros lados;
-> Um tri�ngulo equil�tero deve ter os tr�s lados com o mesmo tamanho;
-> Um tri�ngulo is�sceles deve ter pelo menos dois lados com o mesmo tamanho;
-> Um tri�ngulo escaleno deve ter os tr�s lados com tamanhos diferente; */

main (){

    setlocale(LC_ALL,"Portuguese");
    int A, B, C;
    printf(" Digite  o primeiro valor: ");
    scanf(" %d", &A);
    printf(" Digite   o segundo valor: ");
    scanf(" %d", &B);
    printf(" Digite o terceiro valor: ");
    scanf( "%d", &C);

    if( A+B>C || A+C>B || B+C> A){
    printf(" Os lados  s�o um triangulo! \n");
    if(A == B && A == C)
    printf(" Equilatero: Lados todos iguais\n");
        else if( A == B || A == C || B == C)
        printf(" Is�sceles:  Dois iguais!\n ");
        else
        printf(" Escaleno: Todos diferentes!");
        }
        else {
        printf( " N�o � um triangulo! \n");
        }

}

