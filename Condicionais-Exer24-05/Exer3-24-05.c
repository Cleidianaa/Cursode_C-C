#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
3. Leia uma dist�ncia em quil�metros e a quantidade de litros de gasolina consumidos por um carro
num percurso, calcule o consumo em km/l e escreva uma mensagem de acordo a tabela em baixo:

Consumo (Km/l)  Mensagem
Menor que 8     Venda o carro!
Entre 8 e 14    Econ�mico
Maior que 14    Super econ�mico
*/

main (){

    setlocale (LC_ALL,"Portuguese");
    float km, litros, consumo;
    printf("Digite a quantidade de litros consumidos:");
    scanf("%f",&litros);
    printf(" Digite � distancia pecorrida por favor:");
    scanf("%f",&km);

    consumo=km/litros;
    printf(" Vamos avaliar seu consumo!");

    if(consumo<8){
        printf("Venda seu carro!\n");
    }
    else if(consumo>=8 && consumo<=14){
        printf(" Seu carro � Economico.\n");
    }
    else{
        printf(" Seu carro � Super Economico.\n N�o venda!");
    }

}
