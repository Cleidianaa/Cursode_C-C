#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
Exerc�cio3
Eis um exemplo para gerar um n�mero aleat�rio entre 0 e 15:
#include <stdio.h>
#include <stdlib.h>
 main () {srand(time(NULL));
 int a=(rand()%15);printf("%i",a);
 }
 Fa�a um programa que gere e mostre n�meros aleat�rios entre  0(zero) e 15.
 O programa deve gerar n�meros at� que o n�mero 0(zero) seja sorteado.*/

 main(){
     setlocale(LC_ALL,"Portuguese");
     int num=0;
     srand(time(NULL));
     do{
        num=rand()%16;
        printf("%i\t"num,)
     }while(num!=0);

 }
