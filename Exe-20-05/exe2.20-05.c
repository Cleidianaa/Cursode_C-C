#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 2
Pretende-se calcular a idade em anos em fun��o do dia, m�s e ano de nascimento e dia, m�s e ano
atual.
Considere o seguinte:
- Em condi��es normais a idade � a diferen�a entre o ano atual e ano de nascimento. No entanto se o
m�s atual for inferior ao m�s de nascimento ou o m�s atual igual ao m�s de nascimento e o dia atual
inferior ao dia de nascimento a idade � o ano atual menos o ano de nascimento menos um.
*/

main(){

    setlocale(LC_ALL, "Portuguese");
    int diaNasc, mesNasc, anoNasc, diaAtual, mesAtual, anoAtual;
    printf(" Por favor Digite  o dia atual: ");
    scanf(" %i", &diaAtual);

    printf( " Por favor digite o m�s atual:\n");
    scanf(" %i", &mesAtual);

    printf( " Por favor digite o ano atual:\n");
    scanf(" %i", &anoAtual);

    printf(" Por favor Digite  o dia do nascimento: ");
    scanf(" %i", &diaNasc);

    printf( " Por favor digite o m�s do nascimento:\n");
    scanf(" %i", &mesNasc);

    printf( " Por favor digite o ano do nascimento:\n");
    scanf(" %i", &anoNasc);

    if(mesAtual<mesNasc || mesAtual == anoNasc && diaAtual<diaNasc){
        printf(" A idade atual �: %i", (anoAtual - anoNasc -1));
    }
    else{
        printf(" A idade atual �: %i", &anoAtual);
    }

}




