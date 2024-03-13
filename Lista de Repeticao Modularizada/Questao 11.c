/*

	11) Escrever um algoritmo em C em que o usuário entre com um número inteiro qualquer {n E Z} e exiba na
	tela os 20 números subseqüentes ao que foi digitado pelo usuário.

*/

#include <stdio.h>

void Ler(int *n);
void Conta(int n, int *subs);
void Imprimi(int n, int subs);

int main()
{
    int n, subs=0;
    
    Ler(&n);
    Conta(n, &subs);
    Imprimi(n, subs);
    
    return 0;
}

void Ler(int *n)
{
	do
    {
        printf("Digite um número inteiro qualquer:\n");
        scanf("%i" , n);
    }
    while(*n <= 0);
    
    *n = *n + 1;
}

void Conta(int n, int *subs)
{
	(*subs) = n + 19;
}

void Imprimi(int n, int subs)
{
	int i;
	
	for(i=n; i<=subs; i++)
    {
        printf("\n%i" , i);
    }
}