#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 2
Crie uma programa em C, que guarde os 10 primeiros n�meros pares (2, 4, 6, 8, 10, 12, 14, 16, 18, 20).
Mostre os n�meros.

*/

main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int num;

    for(num=0; num<10; num++){
    printf("%i\t", vetor[num]);

    }
}
