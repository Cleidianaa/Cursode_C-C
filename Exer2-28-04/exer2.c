#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 2
A import�ncia de 10.000 � ser� dividida entre tr�s vencedores de um concurso.
Sendo que da quantia total:
- O primeiro vencedor receber� 46%;
- O segundo receber� 32%;
- O terceiro receber� o restante.
Calcule e imprima a quantia ganha por cada um dos vencedores.
*/


void main(){
    setlocale(LC_ALL, "Portuguese");
    float primeiro, segundo, terceiro, total;
    printf(" Pr�mio de 10.000 Euro - Concurso");

    primeiro=(10000*0.46);
    segundo=(10000*0.32);
    terceiro=(10000*0.22);

    printf("\nO Valor do Primeiro Vencedor �: %.2f", primeiro);
    printf("\nO Valor do Segundo Vencedor  �: %.2f" , segundo);
    printf("\nO  Valor do Terceiro Vencedor �: %.2f", terceiro);

}
