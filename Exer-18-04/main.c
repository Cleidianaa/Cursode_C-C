#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 1
Pretende-se calcular o montante total disponível ao fim de um ano de dois depósitos bancários feitos,
no mesmo dia, em bancos diferentes, sabendo que o juro num banco é de 9% e no outro é de 7%.
Teste para depósitos de 100,00 € e 50,00 € respectivamente.
O valor obtido é de 162,50 €.*/

main(){
    setlocale(LC_ALL, "Portuguese");
    float deposito1, deposito2, banco1, banco2;

    printf(" \nDigite o montante de sua preferencia: ");
    scanf( "%f", &deposito1 );
    printf("\nDigite outro valor:");
    scanf("%f", &deposito2);

    banco1=deposito1+(deposito1*0.09);

    banco2=deposito2+(deposito2*0.07);

    printf(" \nO valor do deposito é: %.2f ", deposito1);
    printf( " \nO valor do deposito é: %.2f ", deposito2);
    printf(" \nO valor obtido é de %2.f ", banco1 + banco2);




}
