/*

	24) Criar uma (1) função e seu protótipo: PESQUISAR, que receba como argumento uma mensagem e uma palavra e 
	retorne a Quantidade de Vezes (QV) que a palavra ocorre na mensagem.
	No programa principal (main), use as funções criadas em 100 (mensagens + palavras) 
	lidas do usuário (uma por uma). Considere letras do alfabeto: 'A' até 'Z' (Maiúsculas) e 'a' até 'z' (Minúsculas).

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PESQUISAR(char *m, char *p);

const int tam = 100;

int main()
{
	int i;
	char mensagem[tam];
	char palavra[tam];
	
	for(i=0; i<5; i++)
	{
		printf("\n#%d Digite a mensagem: " , i + 1);
		scanf(" %[^\n]" , mensagem);
		
		printf("\n#%d Digite uma palavra para pesquisar: " , i + 1);
		scanf(" %[^\n]" , palavra);
		
		PESQUISAR(mensagem, palavra);
	}
}


void PESQUISAR(char *m, char *p)
{
	int contagem =0;
	int i;
	int j;
	
	int tam_m = strlen(m);
	int tam_p = strlen(p);
	
	for(i=0; i<tam_m; i++)
	{
		if(m[i] == p[0])
		{
			for (j=1; j < tam_p; j++)
            {
                if (m[i + j] != p[j])
                {
                    break; 
                }
            }
            
            if (j == tam_p)
            {
                contagem++; 
            }
		}
	}
		
	printf("A substring '%s' aparece %d vezes na string '%s' .\n", p , contagem, m);
	
}