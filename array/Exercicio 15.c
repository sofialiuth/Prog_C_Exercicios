/*

	Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 
	25000 mil atletas que participaram das 10 Milhas Garoto.
	Armazene os dados em (2) vetores apropriados. Após isso, responda:
	
	15. Exiba na tela a média de tempo de todos os atletas.

*/

#include <stdio.h>
#include <stdlib.h>

const int tam=25000;

void ler_matriculas(int v[]);
void ler_minutos(double v[]);
void media_tempo(double v[], double *media);
void mostra(double media);

int main()
{
	int matricula[tam];
	double minutos[tam];
	double media=0;
	
	ler_matriculas(matricula);
	ler_minutos(minutos);
	media_tempo(minutos, &media);
	mostra(media);
	
	return 0;
}

void ler_matriculas(int v[])
{
	int i;
	
	for(i=0; i<tam; i++)
	{
		printf("\nDigite sua matricula atleta numero #%d: " , i+1);
		scanf("%d" , &v[i]);
	}
}

void ler_minutos(double v[])
{
	int i;
	
	printf("\n");
	for(i=0; i<tam; i++)
	{
		printf("\nDigite seu tempo de corrida (em minutos) atleta numero #%d: " , i+1);
		scanf("%lf" , &v[i]);
	}
}

void media_tempo(double v[], double *media)
{
	int i;
	double soma_minutos=0;
	
	for(i=0; i<tam; i++)
	{
		soma_minutos += v[i];
	}
	
	(*media) = soma_minutos/tam;
	
}

void mostra(double media)
{
	printf("\n\nMedia de tempo de corrida de todos os atletas: %.2lf \n\n" , media);
}


