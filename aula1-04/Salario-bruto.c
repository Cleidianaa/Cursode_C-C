#include <stdio.h>
#include <stdlib.h>

/*
Fazer um programa em C para calcular a contribui��o para a Seguran�a Social,
IRS e o sindicato a partir do sal�rio bruto, 
que � um atributo de entrada.
� SS � 11,5%
� IRS - 25%
� Sindicato � 0,5 %
O programa deve imprimir o valor das contribui��es e o valor do sal�rio l�quido.
*/

main(){
	
	int salario=0;
	float const ss=(11.5/100);
	float const irs=(25/100);
	float const sindicato=(0.5/100); 
	printf("\nO valor do  ss  � : %.2f,",ss);
	printf("\nO valor do  irs �: %.2f,",irs);
	printf("\nO valor do  salario com sindicato �: %.2f,", sindicato);
	
	scandf("%i",&salario);

	
	printf("\nO valor do  ss  � : %.2f,",ss);
	printf("\nO valor do  irs �: %.2f,",irs);
	printf("\nO valor do  salario com sindicato �: %.2f,", sindicato);
	printf( " O valor do salario liquido �: %f",())
	
	
}
