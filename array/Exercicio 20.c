/*

	Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil atletas 
	que participaram das 10 Milhas Garoto. Armazene os dados em (2) vetores apropriados. Após isso, 
	responda:
	
	20. Exiba a matrícula dos atletas que ficaram acima de um determinado tempo em minutos escolhido pelo usuário.
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matriculas(int v[]);
void tempo(float v[]);
void acimaDoTempo(int m[], float t[], float tU);

const int tam = 25000;

int main()
{
	int m[tam];
	float t[tam];
	
	matriculas(m);
	tempo(t);
	
	float tempoUsuario;
	printf("\n\nEscolha um tempo: ");
	scanf("%f" , &tempoUsuario);
	
	acimaDoTempo(m, t, tempoUsuario);
	
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

void acimaDoTempo(int m[], float t[], float tU)
{
	int i;
	
	printf("\n\nAtletas que ficaram acima do tempo (%.2f):\n" , tU);
	for(i=0; i<tam; i++)
	{
		if(t[i] > tU)
		{
			printf("\nMatricula %d e Tempo %.2f\n" , m[i], t[i]);	
		}	
	}	
}

