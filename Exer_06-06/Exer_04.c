#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 4
Elabore um programa que permite efetuar opera��es de cr�dito ou d�bito numa conta banc�ria. O
programa dever� perguntar qual o saldo inicial da conta e qual a opera��o que o utilizador pretende
efetuar (d�bito ou cr�dito), assim como o montante a debitar, atualizando o saldo da conta sempre
que se efetue uma opera��o. No final dever� devolver o saldo da conta.
Opc�o           Menu            C�lculo
    D               D�bito          saldo-montante
    C               Cr�dito         saldo+ montante
    S                                               Sair

*/

  main(){
     setlocale(LC_ALL,"Portuguese");
    float saldo , montante;
    char operacao;
    fflush(stdin);
    printf(" Qual � o  Saldo da sua Conta\n");
    scanf("%f",&saldo);

        while(operacao != 's' && operacao != 'S'){
           fflush(stdin);
           printf("Escolha uma das opera��es\n");
           printf("(s/S) - Sair\n");
           printf("(d/D) - D�bito\n");
           printf("(c/C) - Cr�dito\n");
           scanf("%c",&operacao);

        switch(operacao){
		case 'd':
		case 'D':
			printf(" Informe o valor que deseja debitar: \n");
            scanf("%f",&motante);
            if(saldo < motante){
                printf("Saldo insuficiente\n");
            }
            else{
                saldo = saldo - motante;
            }
			break;
		case 'c':
		case 'C':
			printf(" Informe o valor que deseja  creditar: \n");
            scanf("%f",&motante);

            saldo = saldo + motante;

			break;
        case 's':
		case 'S':
			break;
		default:
			printf("Op��o Inv�lida\n");
			break;
        }
    }

    printf("Seu Saldo Final �: %.2f \n", saldo);
}
