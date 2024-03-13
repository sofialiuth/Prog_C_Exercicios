/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] com valores reais aleatorios (rand/srand) 
	no intervalo entre [10, 99] com uma (1) casa decimal de precisao. Apos isso, faça:
	
	9. Exibir na tela a media dos termos que foram armazenados nos indices IMPARES e PARES do vetor.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SIZE=10;

void lista_vets(float v[]);
void calcula_media(float v[], float *media_p, float *media_i);
void mostra_medias(float media_p, float media_i);

int main ()
{
	float v[SIZE];
	float media_p=0, media_i=0;
	
	
	lista_vets(v);
	calcula_media(v, &media_p, &media_i);
	mostra_medias(media_p, media_i);
	
	return 0;
}

void lista_vets(float v[])
{
	int i;
	
	srand(time(NULL));
	
	printf("\n\n");
	for(i=0; i<SIZE; i++)
	{
    	v[i] = (10 + (rand() % 90)) + (rand() % 10) / 10.0; 
		printf("%8.1f" , v[i]);
	}
	printf("\n");
}

void calcula_media(float v[], float *media_p, float *media_i)
{
	int i;
	
	float soma_pares=0, soma_impares=0;
	
	
	for(i=0; i<SIZE; i++)
	{
		if(i % 2 == 0)
		{
			soma_pares += v[i];
		}
		else
		{
			soma_impares += v[i];
		}
	}

	(*media_p) = soma_pares/(SIZE/2);
	(*media_i) = soma_impares/(SIZE/2);
}

void mostra_medias(float media_p, float media_i)
{
	printf("\n\nMedia dos numeros pares: %.1f" , media_p);
	printf("\nMedia dos numeros impares: %.1f" , media_i);
	
}
