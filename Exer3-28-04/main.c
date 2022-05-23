#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício3
Uma empresa contrata um colaborador a 100 € por dia. Crie um programa que
solicite o número de dias trabalhados e imprima a quantia líquida que deverá ser
paga, sabendo-se que são descontados 8% para pagamento de impostos e taxas
devidas.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");
    float dias, liquido;
    printf("\n Quantos dias trabalhados? ");
    scanf("%f", &dias);

    liquido=100*dias;

    printf("\n O salario líquido é: %.2f euros",(liquido-(liquido*0.08)));
}
