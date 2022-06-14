#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exercício 1
Crie um programa que gere um número aleatório no intervalo [0;200] e solicite ao
utilizador para adivinhar o número. Caso o utilizador acerte, imprima uma
mensagem dando os parabéns e termina o programa. Caso o valor que o utilizador
indique esteja incorreto, o programa deverá mostrar uma das seguintes mensagens:
• Quase a arder! (caso o valor correto esteja a 5 unidades ou menos do valor
fornecido pelo utilizador).
• Muito Quente (caso o valor correto esteja de 6 a 10 unidades do valor fornecido).
• Quente (caso o valor correto esteja de 11 a 20 unidades do valor fornecido).
• Frio (caso o valor correto esteja de 21 a 30 unidades do valor fornecido).
• Muito Frio (caso o valor correto esteja de 31 a 50 unidades do valor fornecido).
• Gelado (caso o valor correto esteja de 51 a 75 unidades do valor fornecido).
• Congelado! (caso o valor correto esteja a mais de 75 unidades do valor fornecido).
->Deve dar oportunidade de repetir o programa.*/


int main(){
    setlocale(LC_ALL,"Portuguese");
        int num;
        printf(" Gerando números de 0 á  200: \n");
        srand(time(NULL));
        for(num!=0; num<201;num++){
            printf("%d ", rand() %201);
    }

    printf(" Quase a arder!n");
    printf(" Muito Quente!\n");
    printf(" Quente!\n");
    printf(" Frio!\n");
    printf(" Muito Frio!\n");
    printf(" Gelado!\n");
    printf(" Congelado!\n");



}
