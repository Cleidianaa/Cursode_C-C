#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 3
Crie uma programa em C, que gere 20 n�meros aleat�rios (entre 0 e 50), e os armazene num array.
Ser� solicitado ao utilizador um n�mero entre 0 e 50 por forma a verificar se o mesmo se encontra no array.
Se sim informa em que posi��o(�es) sen�o escreve que o n�mero n�o existe.
*/

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));

    int array[20];
    int numero;
    int existe = 0;

    for(int i = 0; i < 20; i++){
        array[i] = (rand()%50+1);
    }

    printf("\n Digite um n�mero entre 0 e 50: ");
    scanf("%i", &numero);

    for(int i = 0; i < 20; i++)
    {
        if(numero == array[i])
        {
            printf("\n Valor encontrado na posi��o %i",i);
            existe = 1;
        }
    }

    if(existe == 0)
    {
        printf("\n N�mero n�o existe");
    }
}
