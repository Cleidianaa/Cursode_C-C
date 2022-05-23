#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 5
Escreva um programa para determinar o tipo de bilhete que cada visitante de um parque de diversões deve
comprar. O tipo de bilhete é determinado em função da idade, de acordo com a seguinte tabela:

Idade           Bilhete
<6              Isento de Pagamento
Entre 6 e 12    Bilhete de Criança
Entre 13 e 65   Bilhete Normal
>65             Bilhete de  3ª Idade
*/

main (){
    setlocale(LC_ALL, "Portuguese");
    float idade, bilhete, soma;

    printf(" Quantos anos a pessoa têm?\n");
    scanf(" %f", &idade);
    printf(" Quantos  bilhetes vai querer: \n");
    scanf(" %f", &bilhete);

    soma=idade / (bilhete * bilhete);

    if(idade <6){
        printf(" Bilhete: %f Isento de Pagamento \n", soma);
    }
    else if(soma >= 6 && soma <12){
        printf(" Bilhete: %.2f Bilhete de Criança \n", soma);
    }
    else if(soma >=13 && soma <65){
        printf(" Bilhete: %.2f Bilhete Normal \n", soma);
    }
    else if(soma >=65){
        printf(" Bilhete: %.2f Bilhete de 3ª idade \n", soma);
    }



}
