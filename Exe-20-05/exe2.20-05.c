#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício 2
Pretende-se calcular a idade em anos em função do dia, mês e ano de nascimento e dia, mês e ano
atual.
Considere o seguinte:
- Em condições normais a idade é a diferença entre o ano atual e ano de nascimento. No entanto se o
mês atual for inferior ao mês de nascimento ou o mês atual igual ao mês de nascimento e o dia atual
inferior ao dia de nascimento a idade é o ano atual menos o ano de nascimento menos um.
*/

main(){

    setlocale(LC_ALL, "Portuguese");
    int diaNasc, mesNasc, anoNasc, diaAtual, mesAtual, anoAtual;
    printf(" Por favor Digite  o dia atual: ");
    scanf(" %i", &diaAtual);

    printf( " Por favor digite o mês atual:\n");
    scanf(" %i", &mesAtual);

    printf( " Por favor digite o ano atual:\n");
    scanf(" %i", &anoAtual);

    printf(" Por favor Digite  o dia do nascimento: ");
    scanf(" %i", &diaNasc);

    printf( " Por favor digite o mês do nascimento:\n");
    scanf(" %i", &mesNasc);

    printf( " Por favor digite o ano do nascimento:\n");
    scanf(" %i", &anoNasc);

    if(mesAtual<mesNasc || mesAtual == anoNasc && diaAtual<diaNasc){
        printf(" A idade atual é: %i", (anoAtual - anoNasc -1));
    }
    else{
        printf(" A idade atual é: %i", &anoAtual);
    }

}




