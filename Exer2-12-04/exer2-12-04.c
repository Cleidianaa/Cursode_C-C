#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 2 Ler dois números inteiros e escrever a saída apresentada a seguir. 
Note que o programa deve mostrar a  operação,  a  fórmula  matemática  apresentando  os  números  digitados  e  o  resultado  da  operação.
Como exemplo, vamos supor que os números introduzidos 
são 7 e 4 :
Soma: 7 + 4 = 11 
Subtração: 7 –4 = 3 
Multiplicação: 7 x 4 = 28 
Dividendo: 7 
Divisor: 4 
Quociente: 1 
Resto: 3 */

 main() {
 	setlocale(LC_ALL,"portuguese");
 	int n1=0, n2=0, soma=0, subtracao=0, multiplicacao=0, quociente=0, resto=0;
 	
 	printf(" \n Digite o número: ");
 	scanf("%i",&n1);
 	printf(" \n Digite outro número: ");
 	scanf("%i", &n2);
 	
 	soma=n1+n2;
 	subtracao=n1-n2;
 	multiplicacao=n1*n2;
 	quociente= n1/ n2;
 	resto= n1 - ((n1/n2) *n2);
 	
 	printf("\n Soma: %i + %i=%i ", n1,n2,soma);
 	printf("\n Subtração: %i - %i=%i ", n1,n2, subtracao);
 	printf("\n Multiplicação: %i x %i=%i ", n1,n2, multiplicacao);
 	printf("\n Quociente: %i  ", quociente);
 	printf("\n Resto: %i */ ", resto);
 	
 	

 	
	
}
