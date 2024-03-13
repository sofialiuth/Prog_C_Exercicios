/*

	24. Faça um algoritmo em C que preencha dois vetores A e B (TAMANHO: 5) com valores inteiros. 
	Depois de preencher os vetores A e B, exiba um vetor C, sendo que C = 3 * A ̶  B.

*/

#include <stdio.h>
#include <stdlib.h>

const int tam=5;

void ler_vet(int v[]);
void calcula_vet(int VC[], int VA[], int VB[]);
void mostra_vet(int VC[]);

int main()
{
	int vet_A[tam], vet_B[tam], vet_C[tam];
	
	printf("\n\nDigite os valores para o vet A:\n");
	ler_vet(vet_A);
	printf("\n\nDigite os valores para o vet B:\n");
	ler_vet(vet_B);
	
	calcula_vet(vet_C, vet_A, vet_B);
	
	mostra_vet(vet_C);
	
	return 0;
}

void ler_vet(int v[])
{
	int i;
	
	for(i=0; i<tam; i++)
	{
		printf("\n#%d Entre com um valor: " , i+1);
		scanf("%d" , &v[i]);
	}
}

void calcula_vet(int VC[], int VA[], int VB[])
{
	int i;
	
	for(i=0; i<tam; i++)
	{
		VC[i] = (3 * VA[i]) - VB[i];
	}
}

void mostra_vet(int VC[])
{
	int i;
	
	printf("\n\nResultado:\n");
	for(i=0; i<tam; i++)
	{
		printf("\n #%d %.d" , i+1, VC[i]);
	}
}





