#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 1
Pretende-se calcular o montante total dispon�vel ao fim de um ano de dois dep�sitos banc�rios feitos,
no mesmo dia, em bancos diferentes, sabendo que o juro num banco � de 9% e no outro � de 7%.
Teste para dep�sitos de 100,00 � e 50,00 � respectivamente.
O valor obtido � de 162,50 �.*/

main(){
    setlocale(LC_ALL, "Portuguese");
    float deposito1, deposito2, banco1, banco2;

    printf(" \nDigite o montante de sua preferencia: ");
    scanf( "%f", &deposito1 );
    printf("\nDigite outro valor:");
    scanf("%f", &deposito2);

    banco1=deposito1+(deposito1*0.09);

    banco2=deposito2+(deposito2*0.07);

    printf(" \nO valor do deposito �: %.2f ", deposito1);
    printf( " \nO valor do deposito �: %.2f ", deposito2);
    printf(" \nO valor obtido � de %2.f ", banco1 + banco2);




}
