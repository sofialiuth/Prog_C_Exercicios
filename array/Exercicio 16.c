/*

	Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil atletas que participaram das 10 Milhas Garoto.
	Armazene os dados em (2) vetores apropriados. Após isso, responda:
	
	16. Exiba a matrícula dos atletas que ficaram abaixo da média de tempo da prova.
	
*/

#include <stdio.h>
#include <stdlib.h>

void ler_matricula(int v[]);
void ler_tempo(int v[]);
void media_tempo(int v1[], int v2[]);

const int atletas = 25000;

int main()
{
	int matricula[atletas];
	int tempo[atletas];
	
	ler_matricula(matricula);
	ler_tempo(tempo);
	media_tempo(tempo, matricula);
	
	return 0;
}

void ler_matricula(int v[])
{
	int i;
	
	for(i=0; i<atletas; i++)
	{
		printf("\nDigite sua matricula atleta #%d: " , i+1);
		scanf("%d" , &v[i]);
	}
}

void ler_tempo(int v[])
{
	int i;
	
	for(i=0; i<atletas; i++)
	{
		printf("\nDigite seu tempo atleta #%d: " , i+1);
		scanf("%d" , &v[i]);
	}
}

void media_tempo(int v1[], int v2[])
{
	int i;
	int soma=0;
	int media=0;
	
	for(i=0; i<atletas; i++)
	{
		soma += v1[i];	
	}
	
	media = soma/atletas;
	
	for(i=0; i<atletas; i++)
	{
		if(v1[i] < media)
		{
			printf("\n\nJogador #%d ficou com o tempo abaixo da media, matricula: %d" , i, v2[i]);
		}
	}
}