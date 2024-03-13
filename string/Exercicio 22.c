/*

	22) Criar uma (1) funçao e seu prototipo que receba como argumento somente uma mensagem e retorne 
	a mesma mensagem (mesmo vetor) escrita com todos os caracteres MAIUSCULOS.
	No programa principal (main), use a funsao criada em 100 mensagens lidas do usuario.
	Observaçao: Considere apenas as letras do alfabeto: 'A' ate 'Z' ou 'a' ate 'z'.
	Demais caracteres da mensagem devem ser apenas copiados.

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

const int tam=80;

void exibeMaisculo(char *s);

int main()
{
	char frase[tam];
    int i;
    
    for (i=0; i < 100; i++)
    {
        printf("\n#%d Digite a mensagem: ", i + 1);
        scanf(" %[^\n]", frase);
		 
        exibeMaisculo(frase);
    }

    return 0;
}

void exibeMaisculo(char *s)
{
	int i;
	
	for (i=0; s[i] != '\0'; i++)
	{
		if (((s[i] >= 'a') && (s[i] <= 'z')) || ((s[i] >= 'A') && (s[i] <= 'Z')))
		{
			s[i] = toupper(s[i]);
		}
	}
	
	printf("Mensagem convertida: %s\n" , s);

}
