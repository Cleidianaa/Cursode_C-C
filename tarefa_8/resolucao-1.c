#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 1
Recorrendo � estrutura while crie um ciclo para escrever a seguinte sequ�ncia de
n�meros:
2, 4, 6, 8, 10, 12, 14, 16, 18, 20

*/

 void main(){
    setlocale(LC_ALL,"Portuguese");
    int num=2;

    while(num<=20){
            printf("%d ",num);
            num=num+2;
    }

}
