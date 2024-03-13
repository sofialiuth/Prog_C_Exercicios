/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] 
	com valores reais aleatórios (rand/srand) no intervalo entre [10, 99] com uma (1) 
	casa decimal de precisão. Após isso, faça:

	14. Exibir os termos (e seus índices) maiores que um valor ƞ (float) escolhido pelo usuário.

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
	
	
	
	float numero;
	printf("\n\nEntre um com numero real entre [10-99]: ");
	do
	{
		scanf("%f" , &numero);
		if((numero < 10.0) || (numero > 99.9))
		{
			printf("--erro na entrada de dados--\n\n");
		}
	}
	while((numero < 10.0) || (numero > 99.9));
	
	
	printf("\nTermos e seus Indices maiores que %.1f: \n" , numero);
	int j;
	for(j=0; j<SIZE; j++)
	{
		if(vetor[j] > numero)
		{
			printf("\nNumero %.1f e Indice %d" , vetor[j], j);
		}
	}
	
	
	return 0;
}