/*

	7) Escrever um programa que leia uma string e identifique se esta é um palíndromo. 
	Palíndromo é uma palavra lida da esquerda para direita ou vice-versa permanecendo 
	a mesma palavra. Ex: ANILINA.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, palindromo = 1; 
	char string[80];
	
	printf("\nDigite uma palavra: ");
	scanf(" %[^\n]" , string);
	
	int tam_string = strlen(string);
	
	for (i = 0; i < tam_string; i++) 
	{
        if (string[i] != string[tam_string - 1 - i]) 
		{
            palindromo = 0; // Se encontrarmos caracteres diferentes, a string não é um palíndromo
            break; // Não há necessidade de verificar o restante da string
        }
    }

    if (palindromo = 1) 
	{
        printf("\n- A palavra eh um palindromo.\n");
    } 
	else 
	{
        printf("\n - A palavra nao eh um palindromo.\n");
    }
	
	return 0;
}