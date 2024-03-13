/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] 
	com valores reais aleatórios (rand/srand) no intervalo entre [10, 99] com uma (1) 
	casa decimal de precisão. Após isso, faça:

	12. Exibir na tela a soma dos termos menores que a média dos termos.

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
		soma += vetor[j];
	}
	
	media = soma/SIZE;
	
	
	
	int k;
	float somaMenores=0;
	for(k=0; k<SIZE; k++)
	{
		if(vetor[k] < media)
		{
			somaMenores += vetor[k];
		}
	}
	
	
	printf("\n\nMedia de todos os valores: %.1f" , media);
	printf("\nSoma dos valores menores que a media: %.1f\n" , somaMenores);


	return 0;
}