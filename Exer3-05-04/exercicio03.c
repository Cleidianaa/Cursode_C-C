#include <stdio.h>
#include <stdlib.h>

/* 
Exerc�cio 3
Uma institui��o de ensino realizou uma pesquisa sobre os eleitores de um munic�pio que participaram 
numa dada elei��o. Crie um programa que leia o total de votos brancos, nulos e v�lidos. Calcule e 
escreva a percentagem que cada um representa em rela��o ao total de eleitores. 

*/

main() { 
	float votsbrancos=0, votsnulos=0, votsvalidos=0, votstotal=0, prcbrancos, prcnulos, prcvalidos;
	printf(" Informe os votos em brancos: ");
	scanf("%f", &votsbrancos);
	printf(" Informe os votos nulos: ");
	scanf("%f", &votsnulos);
	printf(" Inrfome os votos validos: ");
	scanf("%f", &votsvalidos);
	
	votstotal= votsbrancos+votsnulos+votsvalidos;
	prcbrancos=((votsbrancos/votstotal)*100);
	prcnulos=((votsnulos/votstotal)*100);
	prcvalidos=((votsvalidos/votstotal)*100);
	
	printf(" O total de eleitores sao: %.2f\n\n", votstotal);
	printf(" A porcetagem de votos brancos e: %.2f%%\n", prcbrancos);
	printf(" A porcetagem de votos nulos e: %.2f%%\n", prcnulos);
	printf(" A porcetagem de votos validos e: %.2f%%\n", prcvalidos);
	

}
