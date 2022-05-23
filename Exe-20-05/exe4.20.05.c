#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 4
Elaborar um programa que recebe 3 valores inteiros. Mostra o maior, o menor e a média.
*/

int main(){
    setlocale (LC_ALL, "Portuguese");
    int num1, num2, num3, menor, maior, media;

    printf(" Digite um valor: \n");
    scanf("%d", &num1);
    printf(" Digite outro valor: \n");
    scanf("%d", &num2);
    printf(" Digite  o terceiro valor: \n");
    scanf("%d", &num3);

    media=((num1 + num2 + num3) /3);

    if(num1 < num2){
        if(num1 < num3)
            menor = num1;
        else
            menor = num3;
    }
    else{
        if(num2 < num3)
            menor = num2;
        else
            menor = num3;
    }
    if(num1 > num2){
        if(num1 > num3)
            maior= num1;
        else
            maior= num3;
    }
    else{
        if(num2 > num3)
            maior=num2;
        else
            maior=num3;
    }

    printf(" Primeiro resultado Menor: %d \n", menor);
    printf(" Segundo resultado Maior: %d \n", maior);
    printf( " Terceiro resultado Media: %d \n", media);

}
