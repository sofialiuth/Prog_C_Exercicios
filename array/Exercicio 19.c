/*

	Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil atletas 
	que participaram das 10 Milhas Garoto. Armazene os dados em (2) vetores apropriados. Após isso, 
	responda:
	
	19. Exiba a matrícula dos atletas que ficaram abaixo da META da prova. 
	A META da prova deste ano é 88.7 minutos. Declarar a META como constante 
	com o comando #define.
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define META 88.7

void matriculas(int v[]);
void tempo(float v[]);
void atletas_abaixo_meta(int m[], float t[]);

const int tam = 25000;

int main()
{
	int m[tam];
	float t[tam];
	
	matriculas(m);
	tempo(t);
	atletas_abaixo_meta(m, t);
	
	return 0;
}

void matriculas(int v[])
{
	int i;
	for(i=0; i<tam; i++)
	{
		printf("\nDigite sua matricula atleta n%d: " , i+1);
		scanf("%d" , &v[i]);
	}
	
}

void tempo(float v[])
{
	int i;
	for(i=0; i<tam; i++)
	{
		printf("\nDigite seu tempo atleta n%d: " , i+1);
		scanf("%f" , &v[i]);
	}
	
}

void atletas_abaixo_meta(int m[], float t[])
{
	int i;
	
	printf("\n\nJogadores que ficaram abaixo da META (88.7) da prova: \n");
	for(i=0; i<tam; i++)
	{
		if(t[i] < META)
		{
			printf("\nMatricula %d e Tempo %.2f" , m[i], t[i]);
		}
	}

	
}

