/*

	Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] 
	com valores inteiros aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, 
	faça:
	
	5. Exibir a média dos termos múltiplos de um Numero (numero >= 10) escolhido pelo usuário.

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
	
	
	
	int mult;
	printf("\n\nEscolha um numero igual ou maior que 10: ");
	do
	{
		scanf("%d" , &mult);
		
		if(mult < 10)
		{
			printf("--erro na entrada de dados: ");
		}
	}
	while(mult < 10);
	
	
	
	int j;
	int contador=0, soma=0;
	float media=0;
	
	for(j=0; j<SIZE; j++)
	{
		if(vetor[j] % mult == 0)
		{
			soma += vetor[j];
			contador++;
		}
	}
	
	media = soma/contador;
	
	printf("\n\nMedia dos termos divisiveis por %d foi de: %.2f" , mult, media);
	
	return 0;
}
