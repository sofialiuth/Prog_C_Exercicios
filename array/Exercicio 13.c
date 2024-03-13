/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] 
	com valores reais aleatórios (rand/srand) no intervalo entre [10, 99] com uma (1) 
	casa decimal de precisão. Após isso, faça:

	13. Exibir na tela a posição e a soma dos termos menores que B^2. 
	Declarar BETHA (B = 27.54) como constante com o comando const.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

const int SIZE = 10;
const float betha = pow(27.54, 2);
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
	float soma=0; 
	
	printf("\n\nPosicao e soma dos termos menores que betha(27.54) ao quadrado(%.2f):\n" , betha);
	for(j=0; j<SIZE; j++)
	{
		if(vetor[j] < betha)
		{
			printf("\n\tPosicao %d e vetor %.1f" , j+1, vetor[j]);
			soma += vetor[j];
		}
	}
	printf("\n\n\tSoma: %.1f\n" , soma);
	
	return 0;
}