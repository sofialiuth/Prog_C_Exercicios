/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] 
	com valores inteiros aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, faça:
	
	2. Exibir na tela a média da soma dos termos múltiplos de 2 e 5.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lista_vet(int v[]);
void calcula_vet(int v[], int *soma);
void mostra_soma(int soma);

const int SIZE = 100;

int main()
{
	srand(time(NULL));
	
	int vetor[SIZE];
	int soma=0;
	
	lista_vet(vetor);
	calcula_vet(vetor, &soma);
	mostra_soma(soma);
	
	return 0;
}

void lista_vet(int v[])
{
	int i;
	
	printf("Valores do vetor:\n\n");
	for(i=0; i<SIZE; i++)
	{
		v[i] = (rand() % 90) + 10;
		printf("%5d" , v[i]);
	}
}

void calcula_vet(int v[], int *soma)
{
	int i;
	
	for(i=0; i<SIZE; i++)
	{
		if((v[i] % 2 == 0)&&(v[i] % 5 == 0))
		{
			(*soma) += v[i];
		}
	}
}

void mostra_soma(int soma)
{
	printf("\n\nSoma dos valores multiplos de 2 e 5: %d" , soma);
}