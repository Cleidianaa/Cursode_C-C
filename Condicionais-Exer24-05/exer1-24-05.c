#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Dados três valores A, B e C, verificar se podem ser comprimentos de lados de um triângulo e, se
formam um triângulo equilátero, isósceles ou escaleno. Considere que:

-> O comprimento de um lado do triângulo é menor que a soma dos dois outros lados;
-> Um triângulo equilátero deve ter os três lados com o mesmo tamanho;
-> Um triângulo isósceles deve ter pelo menos dois lados com o mesmo tamanho;
-> Um triângulo escaleno deve ter os três lados com tamanhos diferente; */

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
    printf(" Os lados  são um triangulo! \n");
    if(A == B && A == C)
    printf(" Equilatero: Lados todos iguais\n");
        else if( A == B || A == C || B == C)
        printf(" Isósceles:  Dois iguais!\n ");
        else
        printf(" Escaleno: Todos diferentes!");
        }
        else {
        printf( " Não é um triangulo! \n");
        }

}

