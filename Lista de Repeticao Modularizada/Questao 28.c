/*

	28) Faça um algoritmo que leia um valor inteiro positivo para a variável: n (n >= 1) e calcule e exiba na tela
	o resultado da Soma (S) e da Multiplição(M), a seguir:
		S = PI + PI/2 + PI/4 + PI/6 + ... + PI/n
		M = 1/PI * 3/PI * 5/PI * 7/PI * ... * n/PI

*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

float calcula_soma(int n);
float calcula_mult(int n);
void imprimi();

int main()
{
    imprimi();
}

float calcula_soma(int n)
{
    int i;
    float soma=3.14;

    for (i=2; i <= n; i+=2)
    {
        soma += PI/i;
    }

    return soma;
}

float calcula_mult(int n)
{
    int i;
    float mult=1;

    for (i=1; i <= n; i+=2)
    {
        mult *= i/PI;
    }

    return mult;
}

void imprimi()
{
    int n;
    float soma=0, mult=0;

    do
    {
        printf("\nDigite um valor para n (n >= 1): ");
        scanf("%d", &n);

        if (n < 1)
        {
            printf("\n--ERRO NA ENTRADA DE DADOS--");
        }
    } 
	while (n < 1);

    soma = calcula_soma(n);
    mult = calcula_mult(n);

    printf("\n\nSoma: %.2f", soma);
    printf("\n\nMultiplicacao: %.2f\n", mult);
}
