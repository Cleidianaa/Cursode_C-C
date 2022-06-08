#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 3
Criar um programa para receber 3 valores inteiros correspondendo ao lados de triângulo e informar
se o triângulo é equilátero, isósceles ou escaleno.

Equilátero      Lados todos iguais
Isósceles       Dois iguais
Escaleno        Todos diferentes
*/

main (){
    setlocale(LC_ALL, "Portuguese");
    int valor1, valor2, valor3;
    printf(" Digite  o primeiro valor: ");
    scanf(" %d", &valor1);
    printf(" Digite   o segundo valor: ");
    scanf(" %d", &valor2);
    printf(" Digite o terceiro valor: ");
    scanf( "%d", &valor3);

    if( valor1 + valor2> valor3 && valor1 + valor3> valor2 && valor2 + valor3> valor1){
        printf(" Os lados  são um triangulo! \n");
        if(valor1 == valor2 && valor1 == valor3)
            printf(" Equilatero: Lados todos iguais\n");

        else if( valor1 == valor2 || valor1 == valor3 || valor2 == valor3){
        printf(" Isósceles:  Dois iguais!\n ");
       }
       else{
        printf(" Escaleno: Todos diferentes!");
    }

}
