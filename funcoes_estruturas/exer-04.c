#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 2
Crie uma fun��o em C, do tipo void, que receba um caracter. Valida se � F/f ou M/m e escreve
feminino ou masculino ou inv�lido.*/

int main(){
    setlocale(LC_ALL,"");
    char sexo;
    printf("Escreva (M)Masculino OU (F)Feminino:");
	scanf("%s", &sexo);
	ValidarSexo(sexo);
}
void ValidarSexo(char sexo){
    switch(sexo){
        case'M':
        case 'm':
            printf("Masculino");
            break;
        case'F':
        case'f':
            printf("Feminino");
            break;
        default:
            printf("Sexo Inv�lido!!");
            break;
    }
}


