#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 3
Criar um programa para receber 3 valores inteiros correspondendo ao lados de tri�ngulo e informar
se o tri�ngulo � equil�tero, is�sceles ou escaleno.

Equil�tero      Lados todos iguais
Is�sceles       Dois iguais
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
        printf(" Os lados  s�o um triangulo! \n");
        if(valor1 == valor2 && valor1 == valor3)
            printf(" Equilatero: Lados todos iguais\n");

        else if( valor1 == valor2 || valor1 == valor3 || valor2 == valor3){
        printf(" Is�sceles:  Dois iguais!\n ");
       }
       else{
        printf(" Escaleno: Todos diferentes!");
    }

}
