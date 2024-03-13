/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] 
	com valores reais aleatórios (rand/srand) no intervalo entre [10, 99] com uma (1) 
	casa decimal de precisão. Após isso, faça:
	
	10. Exibir na tela somente os termos entre [35, 40] do vetor acrescidos de 5%.

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
	
	
	
	printf("\n\nValores entre [35-40] com acrescimo de 5%: \n\n");
	int j;
	for(j=0; j<SIZE; j++)
	{
		if((vetor[j] >= 35) && (vetor[j] <= 40))
		{
			vetor[j] *= 1.05;
			printf("Indice %d %8.1f\n" , j , vetor[j]);
		}
	}
	
	return 0;
}