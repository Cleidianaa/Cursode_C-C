#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio1 Codifique em C um programa que
leia um n�mero inteiro e escreva o seu pr�ximo e o seu anterior.*/

main(){

  setlocale(LC_ALL, "POrtuguese");
  int num1,proximo,anterior;
  printf(" Por favor escreve  um n�mero: ");
  scanf("%i", &num1);

  proximo=num1+1;
  anterior=num1-1;

  printf(" \nO n�mero que voc� digitou foi: %i", num1);
  printf(" \nO pr�ximo n�mero �: %i ", proximo);
  printf(" \nO n�mero anterior �: %i", anterior);



}
