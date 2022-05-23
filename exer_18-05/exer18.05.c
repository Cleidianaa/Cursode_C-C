#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício 1
Sabendo que o IMC (Índice de massa corporal) é obtido em função da altura e do peso
(imc=peso/(altura*altura)).
Crieum algoritmo que leia os valores do peso e da altura, apresente o valor do imc e a respetiva situação sabendo que:
IMC Situação
Abaixo de 19.99 Abaixo do peso
Entre 20 e 24.99 Peso Normal
Entre 25 e 29.99 Acima do Peso
Entre 30 e 35 Obesidade
Acima de 35 Grande Obesidade */

 main(){

    setlocale(LC_ALL, "Portuguese");
    float peso, altura, imc;
    printf("Por favor digite seu Peso: ");
    scanf("%f", &peso );
    printf("Por favor digite sua Altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 19.99){
        printf("IMC: %f Abaixo do peso \n", imc);
    }

    else if(imc >= 20 && imc < 24.99){

        printf("IMC: %f Peso normal \n", imc);
    }
    else if(imc >= 25 && imc < 29.99){

        printf("IMC: %f Acima do peso  \n", imc);
    }
    else if(imc >= 30 && imc <35){

        printf("IMC: %f Obesidade \n", imc);
    }
    else if( imc >= 40){
        printf("IMC: %f Grande Obesidade \n", imc);
    }
}
