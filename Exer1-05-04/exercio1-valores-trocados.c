#include <stdio.h>
#include <stdlib.h>

/*
Exerc�cio 1 
Crie um programa em C que leia dois valores para as vari�veis A e B. Efetue a troca dos valores, para 
que a vari�vel A passe a ter o valor da vari�vel B e que a vari�vel B passe a ter o valor da vari�vel A. 
Apresente os valores trocados. */

main() {
	float variavelA=0, variavelB=0;
	
	printf(" Digite o valor da variavelA: ");
	scanf("%f", &variavelA);
	printf(" Digite o valor da variavelB: ");
	scanf("%f", &variavelB);
	printf(" Os valores atribuidos foram: variavelA: %.2f: variavelB: %.2f:\n\n", variavelA, variavelB);

	printf("\n Os valores trocados ficaram assim: variavelA %.2f: ",variavelB);
	printf("\n Os valores trocados ficaram assim: variavelB %.2f: ",variavelA);
	
	
}
