#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
Escreva algoritmos e codifique em C/C++ os exerc�cios que se seguem :Exerc�cio  
1Pretende-se calcular o montante total dispon�vel ao fim de um ano de dois dep�sitos banc�rios feitos,
no  mesmo  dia,  em  bancos  diferentes,  
sabendo  que  o  juro  num  banco  �  de  9%  e  no  outro  �  de  7%. Teste para dep�sitos de 100,00 � e 50,00 �
respectivamente. O valor obtido � de 162,50�.
*/

 main() {
 	float  banco1,  banco2, deposito1, deposito2;
 	printf("Informe o valor do deposito banco1!");
 	scanf("%f", &deposito1);
 
 	printf(" Informe o segundo deposito,  banco2!");
 	scanf("%f", &deposito2);
 	
 	banco1=deposito1 + (deposito1 *0.09);
 	banco2=deposito2 + (deposito2 *0.07);
 	
 	printf(" Seu posito com juros de 9%%, sera %.2f", banco1);
 	printf("Seu posito com juros de 7%, sera  %.2f", banco2);
 	printf(" O valor total obtido e de: %.2f ", (banco1 + banco2));
 	 

}
