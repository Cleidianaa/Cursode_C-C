#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 2 Ler dois n�meros inteiros e escrever a sa�da apresentada a seguir. 
Note que o programa deve mostrar a  opera��o,  a  f�rmula  matem�tica  apresentando  os  n�meros  digitados  e  o  resultado  da  opera��o.
Como exemplo, vamos supor que os n�meros introduzidos 
s�o 7 e 4 :
Soma: 7 + 4 = 11 
Subtra��o: 7 �4 = 3 
Multiplica��o: 7 x 4 = 28 
Dividendo: 7 
Divisor: 4 
Quociente: 1 
Resto: 3 */

 main() {
 	setlocale(LC_ALL,"portuguese");
 	int n1=0, n2=0, soma=0, subtracao=0, multiplicacao=0, quociente=0, resto=0;
 	
 	printf(" \n Digite o n�mero: ");
 	scanf("%i",&n1);
 	printf(" \n Digite outro n�mero: ");
 	scanf("%i", &n2);
 	
 	soma=n1+n2;
 	subtracao=n1-n2;
 	multiplicacao=n1*n2;
 	quociente= n1/ n2;
 	resto= n1 - ((n1/n2) *n2);
 	
 	printf("\n Soma: %i + %i=%i ", n1,n2,soma);
 	printf("\n Subtra��o: %i - %i=%i ", n1,n2, subtracao);
 	printf("\n Multiplica��o: %i x %i=%i ", n1,n2, multiplicacao);
 	printf("\n Quociente: %i  ", quociente);
 	printf("\n Resto: %i */ ", resto);
 	
 	

 	
	
}
