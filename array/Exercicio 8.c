/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] 
	com valores reais aleatórios (rand/srand) no intervalo entre [10, 99] com uma (1) 
	casa decimal de precisão. Após isso, faça:
	
	8. Exibir na tela o menor e o maior dos termos (e seus respectivos índices).

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SIZE = 10;

int main()
{
	srand(time(NULL));
	
	float vetor[SIZE];
	int i;
	
	printf("\nValores do vetor:\n\n");
	for(i=0; i<SIZE; i++)
	{
		vetor[i] = ((rand () % 90) + 10 ) + (rand() % 10) / 10.0;
		printf("%8.1f" , vetor[i]);
	}
	
	
	
	int j;
	int posicaoMaior=0, posicaoMenor=0;
	float maiorNumero=0, menorNumero=100;
	
	for(j=0; j<SIZE; j++)
	{
		if(vetor[j] > maiorNumero)
		{
			maiorNumero = vetor[j];
			posicaoMaior = j;
		}
		
		if(vetor[j] < menorNumero)
		{
			menorNumero = vetor[j];
			posicaoMenor = j;
		}
	}
	
	printf("\n\n\nMaior numero foi %.2f e sua posicao no vetor eh %d\n" , maiorNumero, posicaoMaior);
	printf("Maior numero foi %.2f e sua posicao no vetor eh %d\n" , menorNumero, posicaoMenor);
	
	return 0;
}