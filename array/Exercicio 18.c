/*

Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil atletas que participaram das 10 Milhas Garoto.
Armazene os dados em (2) vetores apropriados. Após isso, responda:

18. Exiba na tela também, a diferença de tempo final, entre eles, da prova. (entre o primeiro e o ultimo colocado)

*/

#include <stdio.h>
#include <stdlib.h>

const int atletas = 25000;

void ler_matricula(int v[]);
void ler_tempo(int v[]);
void calcula(int v1[], int v2[]);

int main()
{
	int matricula[atletas];
	int tempo[atletas];
	
	ler_matricula(matricula);
	ler_tempo(tempo);
	
	calcula(tempo, matricula);
	
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

void calcula(int v1[], int v2[])
{
	int i;
	
	int vencedor=0;
	int ultimoColocado=0;
	int temp_vencedor=0;
	int temp_ultimoColocado=0;
	
	for(i=0; i<atletas; i++)
	{
		if(v1[i] < v1[vencedor])
		{
			vencedor = i;

		}
		
		if(v1[i] > v1[ultimoColocado])
		{
			ultimoColocado = i;
		}
	}
	
	int diferenca = v1[ultimoColocado] - v1[vencedor];
	
	printf("\n\nJogador %d foi o vencedor!" , v2[vencedor]);
	printf("\n\nJogador %d foi o ultimo colocado." , v2[ultimoColocado]);
	
	printf("\n\nDiferenca de tempo entre os dois foi de %d minutos" , diferenca);
}

