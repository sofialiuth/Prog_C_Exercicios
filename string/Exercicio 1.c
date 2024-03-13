/*

	1) Escrever um programa em C que leia uma string e exiba a string original e ao contrário na tela.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int tam=100;

void inverte(char *m);

int main()
{
	char mensagem[tam];
	
	printf("\nDigite uma mensagem: ");
	scanf("%[^\n]" , mensagem);
	
	inverte(mensagem);
	
	return 0;
}

void inverte(char *m)
{
	int i;
	int comprimento = strlen(m);
	
	for(i=comprimento; i >= 0; i--)
	{
		printf("%c" , m[i]);
	}
}

