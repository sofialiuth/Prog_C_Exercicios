/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] 
	com valores inteiros aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, faça:
	
	3. Exibir na tela os termos maiores que a média da soma dos termos que estão nos índices: 0 e 99.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lista_vet(int v[]);
void calcula_vet(int v[], int *media);
void lista_numeros_maiores_media(int v[], int media);

const int SIZE = 100;

int main()
{
	srand(time(NULL));
	
	int vetor[SIZE];
	int media=0;
	
	
	lista_vet(vetor);
	
	calcula_vet(vetor, &media);
	
	lista_numeros_maiores_media(vetor, media);
	
	return 0;	
}

void lista_vet(int v[])
{
	int i;
	
	printf("\nValores do vetor:\n\n");
	for(i=0; i<SIZE; i++)
	{
		v[i] = (rand() % 90) + 10;
		printf("%5d" , v[i]);
	}
}

void calcula_vet(int v[], int *media)
{
	int i;
	int soma=0;
	
	for(i=0; i<SIZE; i++)
	{
		if ((i==0)||(i==99))
		{
			soma += v[i];
		}
	}

	(*media) = soma / 2;
}

void lista_numeros_maiores_media(int v[], int media)
{
	int i;
	
	printf("\n\nValores maiores que a media dos indices 0 e 99:\n\n");
	for(i=0; i<SIZE; i++)
	{
		if(v[i] > media)
		{
			printf("%4d" , v[i]);
		}
	}
}

