#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 2
A importância de 10.000 € será dividida entre três vencedores de um concurso.
Sendo que da quantia total:
- O primeiro vencedor receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante.
Calcule e imprima a quantia ganha por cada um dos vencedores.
*/


void main(){
    setlocale(LC_ALL, "Portuguese");
    float primeiro, segundo, terceiro, total;
    printf(" Prêmio de 10.000 Euro - Concurso");

    primeiro=(10000*0.46);
    segundo=(10000*0.32);
    terceiro=(10000*0.22);

    printf("\nO Valor do Primeiro Vencedor é: %.2f", primeiro);
    printf("\nO Valor do Segundo Vencedor  é: %.2f" , segundo);
    printf("\nO  Valor do Terceiro Vencedor é: %.2f", terceiro);

}
