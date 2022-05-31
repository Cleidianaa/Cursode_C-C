#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
3. Leia uma distância em quilómetros e a quantidade de litros de gasolina consumidos por um carro
num percurso, calcule o consumo em km/l e escreva uma mensagem de acordo a tabela em baixo:

Consumo (Km/l)  Mensagem
Menor que 8     Venda o carro!
Entre 8 e 14    Económico
Maior que 14    Super económico
*/

main (){

    setlocale (LC_ALL,"Portuguese");
    float km, litros, consumo;
    printf("Digite a quantidade de litros consumidos:");
    scanf("%f",&litros);
    printf(" Digite á distancia pecorrida por favor:");
    scanf("%f",&km);

    consumo=km/litros;
    printf(" Vamos avaliar seu consumo!");

    if(consumo<8){
        printf("Venda seu carro!\n");
    }
    else if(consumo>=8 && consumo<=14){
        printf(" Seu carro é Economico.\n");
    }
    else{
        printf(" Seu carro é Super Economico.\n Não venda!");
    }

}
