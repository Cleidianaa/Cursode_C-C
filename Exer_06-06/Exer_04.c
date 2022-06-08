#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 4
Elabore um programa que permite efetuar operações de crédito ou débito numa conta bancária. O
programa deverá perguntar qual o saldo inicial da conta e qual a operação que o utilizador pretende
efetuar (débito ou crédito), assim como o montante a debitar, atualizando o saldo da conta sempre
que se efetue uma operação. No final deverá devolver o saldo da conta.
Opcão           Menu            Cálculo
    D               Débito          saldo-montante
    C               Crédito         saldo+ montante
    S                                               Sair

*/

  main(){
     setlocale(LC_ALL,"Portuguese");
    float saldo , montante;
    char operacao;
    fflush(stdin);
    printf(" Qual é o  Saldo da sua Conta\n");
    scanf("%f",&saldo);

        while(operacao != 's' && operacao != 'S'){
           fflush(stdin);
           printf("Escolha uma das operações\n");
           printf("(s/S) - Sair\n");
           printf("(d/D) - Débito\n");
           printf("(c/C) - Crédito\n");
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
			printf("Opção Inválida\n");
			break;
        }
    }

    printf("Seu Saldo Final é: %.2f \n", saldo);
}
