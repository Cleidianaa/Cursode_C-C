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
    float idade, bilhete;

    printf(" Quantos anos a pessoa têm?\n");
    scanf(" %f", &idade);


    if(idade <6){
        printf(" Bilhete: %.2f Isento de Pagamento \n", idade);
    }
    else if(idade >= 6 && idade <12){
        printf(" Bilhete: %.2f Bilhete de Criança \n", idade);
    }
    else if(idade >=13 && idade <65){
        printf(" Bilhete: %.2f Bilhete Normal \n", idade);
    }
    else {
        printf(" Bilhete: %.2f Bilhete de 3ª idade \n", idade);
    }
}
