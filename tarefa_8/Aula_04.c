#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exerc�cio 4
Fa�a um programa que gere e exiba, por extenso, n�meros aleat�rios entre 0 (zero)
e 5. O programa deve gerar os n�meros at� que o n�mero 3 seja sorteado.
*/

main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int num, sair;

    do{
        num=(rand()%5+1);
        switch(num)
        {

        case 1:
            printf("Um\n");
            break;
        case 2:
            printf("Dois\n");
            break;
        case 3:
            printf("Tr�s\n");
            break;
        case 4:
            printf("Quatro\n");
            break;
        case 5:
            printf("Cinco\n");
            break;
        }
    }
    while(num!=3);

}
