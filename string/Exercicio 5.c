/*

	5) Escrever um programa em C que leia 1000 mensagens e conte a quantidade de caractere ?U? ou ?V?.
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int qntd = 5;

int main()
{
	char palavra[100];
	int i;
	
	for(i=0; i<qntd; i++)
	{
		printf("\nEscreva uma mensagem: ");
		scanf(" %[^\n]", palavra);
		
		int j, contador=0;
		
		int tamanho = strlen(palavra);
		
		for(j=0; j<tamanho; j++)
		{
			if((palavra[j] == 'U') || (palavra[j] == 'V') || (palavra[j] == 'u') || (palavra[j] == 'v'))
			{
				contador++;
			}
		}
		
		
		printf("\n\tQuantidade de vezes que os caracteres 'U' ou 'V' aparecem: %d\n\n" , contador);
	}
	
	return 0;
}