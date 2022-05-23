#include <stdio.h>
#include <stdlib.h>

/* o curso iefp realizou uma pesquisa sobre o numero de avaliações feitas em lisboa.
crie um programa que leia o numero total de avaliaçoes A,B,C e D. 
calcule e escreva a porcentagem que cada um representa em relacao ao total de avaliações */

 main() {
	float avaA=0, avaB=0, avaC=0, avaD=0, totavaliacao=0, tolA, tolB,tolC, tolD;
	printf(" Qual o valor da avaA:");
	scanf("%f", &avaA);
	printf(" Qual o valor da avaB:");
	scanf("%f", &avaB);
	printf(" Qual o valor da avaC:");
	scanf("%f", &avaC);
	printf(" Qual o valor da avaD:");
	scanf("%f", &avaD);
	
	totavaliacao=(avaA + avaB + avaC + avaD);
	tolA=((avaA/totavaliacao)*100);
	tolB=((avaB/totavaliacao)*100);
	tolC=((avaC/totavaliacao)*100);
	tolD=((avaD/totavaliacao)*100);
	
	printf(" O Total de avaliacao e de %.2f\n\n", totavaliacao);
	printf(" A porcetagem de avaA e de %.2f%%\n", tolA);
	printf(" A porcetagem de avaB e de %.2f%%\n", tolB);
	printf(" A porcetagem de avaC e de %.2f%%\n", tolC);
	printf(" A porcetagem de avaD e de %.2f%%\n", tolD);
	
	
}
