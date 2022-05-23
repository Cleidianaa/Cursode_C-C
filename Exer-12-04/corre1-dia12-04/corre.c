#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 1 Desenvolva  um  programa  que  receba  o  ano  de  nascimento  de  uma  pessoa  e  o  ano  atual. 
 Calcule  e mostre:
 a) A idade dessa pessoa em anos;
 b) A idade dessa pessoa em meses;
 c) A idade dessa pessoa em dias;
 d) A idade dessa pessoa em semanas. */

int main() 
{
	setlocale(LC_ALL, "portuguese");
	int  AnoNa=0, AnoAt=0, Ano=0, Meses=0, Dias=0, Semanas=0;
	
	printf("\n Digite o ano de Nascimento:");
	scanf(" %f", &AnoNa);
	printf("\n Digite o ano Atual:");
	scanf(" %f", &AnoAt);
	
	Ano=AnoNa-AnoAt;
	Meses=((AnoAt-AnoNa)*12);
	Dias=((AnoAt-AnoNa)*365);
	Semanas=((AnoAt-AnoNa)*52);
	
	printf("\n A sua idade em Anos é: %.2f", Ano);
	printf("\n A sua idade em Meses é: %.2f", Meses);
	printf("\n A sua idade em Dias é: %.2f", Dias);
	printf("\n A sua idade em Semanas é: %.2f", Semanas);
	
	
}
