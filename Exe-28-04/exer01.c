#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*
Exerc�cio 1
Ler o valor do raio de um c�rculo e calcular o per�metro desse c�rculo.
A=2 x PI X raio
*/
void main(){
    setlocale(LC_ALL, "Portuguese");
    float raio, perimetro;

    printf("\n Qual o valor da raio de uma circulo: ");
    scanf("%f", &raio);

    perimetro=((2*3.14)*raio);

    printf("\n O valor do perimetro �: %.2f", perimetro);


}
