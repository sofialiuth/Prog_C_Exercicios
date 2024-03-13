/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] 
	com valores inteiros aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, faça:
	
	1. Exibir na tela os termos (e seus respectivos índices) ÍMPARES e múltiplos de 7.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SIZE = 100;

void lista_vet(int v[]);
void calcula_vet(int v[]);

int main()
{
	srand(time(NULL));
	
	int v[SIZE];
	
	lista_vet(v);
	calcula_vet(v);
	
	return 0;
}

void lista_vet(int v[])
{
	int i;
	
	printf("Numeros aleatorios do Vetor:\n\n");
	for(i=0; i<SIZE; i++)
	{
		v[i] = ((rand() % 90)) + 10;
		printf("%5.d" , v[i]);
	}
}

void calcula_vet(int v[])
{
	int i;
	
	printf("\n\n");
	printf("Resultado:\n\n");
	for(i=0; i<SIZE; i++)
	{
		if((v[i] % 7 == 0) && !(v[i] % 2 == 0))
		{
			printf("Indice %d: %d\n" , i, v[i]);
		}
	}
}