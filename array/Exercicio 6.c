/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] 
	com valores inteiros aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, 
	faça:

	6. Exibir na tela a quantidade de vezes que aparece um número multiplo de 3.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SIZE = 100;

int main()
{
	srand(time(NULL));
	
	int vetor[SIZE];
	int i;
	
	for(i=0; i<SIZE; i++)
	{
		
		vetor[i] = (rand() % 90) + 10; 
		printf("%5d" , vetor[i]);
	}
	
	
	
	int j, contador=0;
	
	for(j=0; j<SIZE; j++)
	{
		if(vetor[j] % 3 == 0)
		{
			contador++;
		}
	}
	
	printf("\n\nQuantidade de vezes que apareceu numeros multiplos de 3: %d\n\n" , contador);
	
	
	
	return 0;
}
