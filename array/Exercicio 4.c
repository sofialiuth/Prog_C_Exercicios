/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] 
	com valores inteiros aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, 
	faça:
	
	4. Exibir a quantidade de termos armazenados que são ÍMPARES e PARES; respectivamente.

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
	
	int j, par=0, impar=0;
	
	for(j=0; j<SIZE; j++)
	{
		if(vetor[j] % 2 == 0)
		{
			par++;
		}
		else
		{
			impar++;
		}
	}
	
	printf("\n\nQuantidade de numeros pares: %d" , par);
	printf("\nQuantidade de numeros pares: %d" , impar);
	
	
	return 0;
}

