/*

	3) Escrever um programa que leia 100 palavras (uma por uma) e permute ("embaralhe") todas as suas 
	letras de posição. Para permutar as posições, use a função rand. Exibir cada palavra permutada.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const int tam = 100;

void embaralha(char *m);

int main()
{
	srand(time(NULL));
	
	int i;
	char mensagem[tam];
	
	for (i = 0; i < 100; i++)
    {
        printf("\n#%d Digite uma mensagem: " , i+1);
        scanf(" %[^\n]", mensagem);

        embaralha(mensagem);

        printf("Palavra embaralhada: %s\n", mensagem);
    }

	
	return 0;
}

void embaralha(char *m)
{
	int i, j;
	char temp;
	int comprimento = strlen(m);
	
	for(i=0; i < comprimento-1 ; i++)
	{
		j = i + rand() % (comprimento - i);
   
	    temp = m[i];
	    m[i] = m[j];
	    m[j] = temp;
	}
}