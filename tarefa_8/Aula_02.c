#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 2
Recorrendo � estrutura do while crie um ciclo para escrever a seguinte sequ�ncia de
n�meros:
1, 3, 5, 7, 9, 11, 13, 15, 17, 19
*/

 void main(){
    setlocale(LC_ALL,"Portuguese");
    int num=1;

    while(num<=20){
            printf("%d ",num);
            num=num+2;
    }

}
