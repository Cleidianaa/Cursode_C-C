#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
4. Leia a idade e o tempo de servi�o de um trabalhador e escrever se ele pode ou n�o reformar-se. As
condi��es s�o:

-> Ter pelo menos 65 anos de idade.
-> Ou ter trabalhado pelo menos 30 anos.
-> Ou ter pelo menos 60 anos e ter trabalhado pelo menos 25 anos.
*/

main() {

    setlocale (LC_ALL,"Portuguese");
    int id, tempo;
    printf(" Digite  sua  idade:");
    scanf("%i", &id);
    printf(" Por favor digite o tempo de servi�o:\n");
    scanf("%i", &tempo);

    if((id>=65)||(tempo>=30)||(id >=60)&&(tempo>=25)){
        printf( " J� pode se aposentar!\n");
    }
    else {
        printf(" Ainda n�o pode se aposentar, aguarde mais um tempo!");
    }



}
