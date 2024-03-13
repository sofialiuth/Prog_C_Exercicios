/*

	10) Escrever um algoritmo em C para que calcule a média dos números múltiplos de 6 que se encontram no
	intervalo de [6, 6x]. Onde x é um (1) único número inteiro positivo (x >= 1), lido do usuário.

*/

#include <stdio.h>

void Ler(int *n);
void Conta(int n, float *media);
void Imprimi(float media);

int main()
{
    int n;
    float media=0;
    
    Ler(&n);
    Conta(n, &media);
    Imprimi(media);
    
    
    return 0;
}

void Ler(int *n)
{
	while (*n < 1)
    {
        printf("Digite um numero inteiro positivo:\n");
        scanf("%i" , n);
    }
}

void Conta(int n, float *media)
{
	int x=0, i, soma=0;
	
	x = 6 * n;
    
    for(i = 6; i<=x; i++)
    {
        soma += i;
    }
    
    (*media) = soma/(x-5);
}

void Imprimi(float media)
{
	printf("\nMedia: %.2f" , media);
}
