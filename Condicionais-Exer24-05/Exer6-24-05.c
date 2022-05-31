#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
6. Escreva um programa que, dada a idade de um nadador, classifique-o numa das categorias
especificadas na tabela:

Categoria Idade
Infantil A          5 a 7 anos
Infantil B          8 a 10 anos
Infanto-juvenil     11 a 13 anos
Juvenil             14 a 17 anos
Sénior              maiores de 18 anos
*/

main(){

    setlocale (LC_ALL, "Portuguese");
    int nadador;
    printf(" Informe a idade:");
    scanf("%i", &nadador);
    if((nadador>=5)&&(nadador<=7)){
    printf(" Infantil A! \n");
    }
    else if((nadador>=8)&&(nadador<=10)){
    printf(" Infantil B! \n");
    }
    else if((nadador>=11)&&(nadador<=13)){
    printf(" Infanto-Juvenil! \n");
    }
    else if((nadador>=14)&&(nadador<=17)||(nadador>18)){
    printf(" Juvenil! \n");
    }
    else{
    printf(" São maiores de 18 anos!\n");

    }

}
