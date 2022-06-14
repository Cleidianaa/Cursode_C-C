#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


//   Crie um programa que gere um número aleatório no intervalo [0;200] e solicite ao utilizador para adivinhar o número.
//   Caso o utilizador acerte, imprima uma mensagem dando os parabéns e termina o programa. Caso o valor que o utilizador indique esteja incorreto,
//   o programa deverá mostrar uma das seguintes mensagens:

// • Quase a arder! (caso o valor correto esteja a 5 unidades ou menos do valor fornecido pelo utilizador).
// • Muito Quente (caso o valor correto esteja de 6 a 10 unidades do valor fornecido).
// • Quente (caso o valor correto esteja de 11 a 20 unidades do valor fornecido).
// • Frio (caso o valor correto esteja de 21 a 30 unidades do valor fornecido).
// • Muito Frio (caso o valor correto esteja de 31 a 50 unidades do valor fornecido).
// • Gelado (caso o valor correto esteja de 51 a 75 unidades do valor fornecido).
// • Congelado! (caso o valor correto esteja a mais de 75 unidades do valor fornecido).
//  ->Deve dar oportunidade de repetir o programa.

  main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int numeroSorteado = 0;
    int numeroEscolhido = 0;
    int sair = 1;
    numeroSorteado = (rand()%200);

    while(sair == 1)
    {
        do
        {
           printf("Digite um número\n");
           scanf("%i", &numeroEscolhido);
           int diferenca = 0;

           if(numeroEscolhido > numeroSorteado)
           {
               diferenca = numeroEscolhido - numeroSorteado;
           }
           else
           {
               diferenca = numeroSorteado - numeroEscolhido;
           }

           if(numeroEscolhido == numeroSorteado)
           {
               printf("Parabéns!!!!!!!!\n");
               break;
           }
           else if(diferenca <= 5)
           {
               printf("Quase a arder!\n");
           }
           else if(diferenca >= 6 && diferenca <= 10)
           {
               printf("Muito Quente!\n");
           }
           else if(diferenca >= 11 && diferenca <= 20)
           {
               printf("Quente!\n");
           }
           else if(diferenca >= 21 && diferenca <= 30)
           {
               printf("Frio!\n");
           }
           else if(diferenca >= 31 && diferenca <= 50)
           {
               printf("Muito Frio!\n");
           }
           else if(diferenca >= 51 && diferenca <= 75)
           {
               printf("Gelado!\n");
           }
           else if(diferenca > 75)
           {
               printf("Congelado!\n");
           }
        }
        while(numeroEscolhido != numeroSorteado);

        printf("Número Sorteado: %i \n",numeroSorteado);
        numeroSorteado = (rand()%200);

        printf("Deseja Jogar Novamente?\n");
        printf("1 - Sim\n");
        printf("2 - Não\n");
        scanf("%i", &sair);

    }
}
