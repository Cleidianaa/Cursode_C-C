#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h> //para fun��o time()
/*Exerc�cio3
Eis um exemplo para gerar um n�mero aleat�rio entre 0 e 15:
main () {
srand(time(NULL));
int a=(rand()%15);
printf("%i",a);}
Fa�a  um  programa  que  gere  e mostre n�meros aleat�rios entre  0  (zero)  e  15.
 O programadeve gerar n�meros at� que o n�mero 0 (zero) seja sorteado. */

int main() {
    setlocale(LC_ALL,"Portuguese");
        int num;
        printf(" Gerando n�meros de 0 �  15: \n");
        srand(time(NULL));
        for(num!=0; num<16;num++){
            printf("%d ", rand() % 16);
    }

}
