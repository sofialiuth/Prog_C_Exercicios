/*

	8) Escrever um programa que leia várias mensagens (uma por uma) e exiba 
	cada mensagem com um espaço em branco entre todos os caracteres. 
	Pare o programa quando for digitada a palavra “FIM”.

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	int i, j;
	char palavra[100];
	
	for(i=0; ; i++)
	{
		printf("\nMensagem %d - Digite uma palavra: " , i+1);
		scanf(" %[^\n]" , palavra);
		
		if (strcmp(palavra, "FIM") == 0) 
		{
            break;
        }

        int tam_pal = strlen(palavra);

        for (int j = 0; j < tam_pal; j++) 
		{
            printf("%c ", palavra[j]);
        }
        
        printf("\n");
	}
	
	return 0;
}