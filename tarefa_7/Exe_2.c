#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

/*
Exerc�cio 2
Fa�a  um  programa  que  solicite  ao utilizador um  valor  positivo.
O  programa dever� repetir a solicita��o caso o utilizador forne�a um valor inv�lido (negativo).
Quando o utilizador fornecer um valor v�lido, mostre uma mensagem de texto confirmando o valor digitado.
  */

int main() {
    setlocale(LC_ALL,"Portuguese");
    int num= 0;
    do{
       printf(" Por favor digite um n�mero positivo: \n");
       scanf("%i",&num);
    }
	while(num< 0);
    printf("Valor V�lido: %i \n", num);
}
