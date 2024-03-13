/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] 
	com valores inteiros aleatorios (rand/srand) no intervalo entre [10, 99]. Apos isso, faça:
	
	7. Exibir a quantidade de vezes que aparecem os numeros multiplos de 3 e 6 consecutivamente no vetor.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SIZE=100;

void lista_vets(int v[]);
void conta_numeros(int v[], int *n);
void mostra_valor(int n);

int main()
{
	int v[SIZE];
	int n=0;
	
	srand(time(NULL)); 
	
	lista_vets(v);
	conta_numeros(v, &n);
	mostra_valor(n);

	return 0;
}

void lista_vets(int v[])
{
	int i;
	
	printf("\n");
	for(i=0; i<SIZE; i++)
	{
		v[i] = (rand() % 90) + 10;
		printf("%6.d" , v[i]);
	}
	printf("\n\n");
}

void conta_numeros(int v[], int *n)
{
	int i;
	
	for(i=0; i<SIZE-1; i++)
	{
		if((v[i] % 3 == 0) && (v[i + 1] % 6 == 0))
		{
			(*n)++;
		}
	}
}

void mostra_valor(int n)
{
	printf("- Quantidade de vezes que numeros multiplos de 3 e 6 aparecem consecutivamente: %d \n" , n);
}

