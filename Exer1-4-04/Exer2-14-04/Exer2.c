#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio2 Elabore um programa que leia a velocidade m�xima numa localidade e a velocidade com que o
condutor conduzia e calcule o valor da multa,
considerando que s�o pagos 5 Euros por cada km/h que estiver acima da velocidade permitida. */
 main(){
    setlocale(LC_ALL, "Portuguese");
    int velmax, velcondutor, mul;
    printf("\n Qual a velocidade m�xima  permitida: ");
    scanf("%i", &velmax);
    printf("\n Qual a velocidade do condutor: ");
    scanf("%i", &velcondutor);


    mul=((velcondutor-velmax)*5);

    printf(" \n O valor da multa �: %i Euro", mul);


}
