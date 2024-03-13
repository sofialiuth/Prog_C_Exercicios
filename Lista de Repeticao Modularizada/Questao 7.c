/*

	7) Escrever um algoritmo que conte e soma todos os números ímpares que são múltiplos de três e NÃO
	múltiplos de 5 que se encontram no intervalo [9 90]. Exiba a Contagem e a Soma destes números.

*/

#include <stdio.h>

void Conta(int *soma);
void Imprimi(int soma);

int main()
{
	int soma=0;
	
    Conta(&soma);
    Imprimi(soma);
    
    return 0;
}

void Conta(int *soma)
{
	int i;
    printf("\nContagem dos numeros multiplos de 3 e nao multiplos de 5 de [9, 90]:\n");
    for(i=9; i<=90; i++)
    {
        if ((i % 3 == 0)&& !(i % 5 == 0))
        {
            printf("\n%i" , i);
            (*soma) += i;
        }
    }
}

void Imprimi(soma)
{
	printf("\n\nSoma dos numeros multiplos de 3 e nao multiplos de 5 de [9, 90]: %i\n" , soma);
}
