/*

	4) Escrever um programa que leia 100 palavras (uma por uma) e inverta somente as N primeiras letras. 
	Onde o valor de N é inteiro: [ N >=2 e N <= Tamanho da Palavra] escolhido pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

const int qntd = 100;
int main()
{
	char palavra[80];
	int i, num=0;
	
	for(i=0; i<qntd; i++)
	{
		printf("\n%d - Digite uma palavra: " , i+1);
		scanf(" %s" , palavra);
		
		
		printf("\n\n\tDigite um valor inteiro maior que 2: ");
		do
		{
			scanf("%d" , &num);
			if(num < 2)
			{
				printf("\n\t--erro na entrada de dados--\n\n");
				printf("\n\n\tDigite um valor inteiro maior que 2: ");
			}
		}
		while(num < 2);
		
		
		int j;
		char temp;
		
		
		for (j = 0; j < num / 2; j++)
        {
            temp = palavra[j];
            palavra[j] = palavra[num - j - 1];
            palavra[num - j - 1] = temp;
        }	
		
		
		printf("\n\tPalavra invertida: %s\n", palavra);
	}
}