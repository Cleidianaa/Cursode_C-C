#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*
Exerc�cio 4
Elabore um programa que permite efetuar opera��es de cr�dito ou d�bito numa conta banc�ria. O
programa dever� perguntar qual o saldo inicial da conta e qual a opera��o que o utilizador pretende
efetuar (d�bito ou cr�dito), assim como o montante a debitar, atualizando o saldo da conta sempre
que se efetue uma opera��o. No final dever� devolver o saldo da conta.
Opc�o        Menu           C�lculo
D               D�bito          saldo-montante
C               Cr�dito         saldo+ montante
S                Sair
*/



int main(){
    setlocale(LC_ALL, "Portuguese");
    float saldo=0, montante=0;
    char operacao;
     printf("Digite o valor do saldo inicail:");
        scanf("%f",&saldo);

    do {
        fflush(stdin);
        printf("\n Digite  a sua op��o. (d/D)�bito - (c/C)r�dito - (s/S)air:");
        scanf("%c",&operacao);
        switch(operacao){
            case 'd':
            case 'D':
                printf("\nDigite montante a dabitar:");
                scanf("%f", &montante);
                saldo-=montante;
                break;
            case 'c':
            case'D':
                printf("\nDigite montante a dabitar:");
                scanf("%f", &montante);
                saldo+=montante;
                break;
            case's':
            case'S':
                break;
                default:
                printf("\nOp��o inv�lida.");

        }
    }while(operacao!='s' && operacao!='S');
        printf("O saldo da conta � %.2f", saldo);
}
