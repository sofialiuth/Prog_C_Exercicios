/*

	2) Escrever um programa em C que leia uma mensagem e conte a quantidade de caracteres brancos.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int tam = 100;

void conta_branco(char *m);

int main()
{
	char mensagem[tam];
	
	printf("\nDigite uma mensagem: ");
	scanf("%[^\n]" , mensagem);
	
	conta_branco(mensagem);t
	
	return 0;
}

void conta_branco(char *m)
{
	int i;
	int contador=0;
	
	int comprimento = strlen(m);
	
	for(i=0; i<comprimento; i++)
	{
		if(m[i] == ' ')
		{
			contador++;
		}
	}
	
	printf("\n\nNumero de espacoes em branco foi: %d" , contador);
}