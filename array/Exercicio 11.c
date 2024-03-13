/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] 
	com valores reais aleatórios (rand/srand) no intervalo entre [10, 99] com uma (1) 
	casa decimal de precisão. Após isso, faça:
	
	11. Exibir na tela os termos maiores que a média dos termos que estão nos índices: 0, 4 e 9.

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
	float soma=0, media=0;
	for(j=0; j<SIZE; j++)
	{
		if((j == 0) || (j == 4) || (j == 9))
		{
			soma += vetor[j];
		}
	}

	media = soma/3;
	
	
	
	int s;
	printf("\n\nValores maiores que a media %.2f: \n\n" , media);
	for(s=0; s<SIZE; s++)
	{
		if(vetor[s] > media)
		{
			printf("%8.1f" , vetor[s]);
		}
	}
	
	
	
	return 0;
}