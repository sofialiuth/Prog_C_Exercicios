/*

	9) Escrever um programa que leia uma mensagem e exiba a 
	quantidade de vezes que aparece a substring 'UVV'ùna mensagem. 
	Repetir o procedimento anterior 100 vezes.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int tam = 80;

void contarSubstring(char *str, char *subs);


int main()
{
    char frase[tam];
    char uvv[] = "UVV"; 
    int v;
    
    for (v=0; v < 100; v++)
    {
        printf("\n#%d Digite a mensagem: ", v + 1);
        scanf(" %[^\n]", frase); 

        contarSubstring(frase, uvv);
    }

    return 0;
}

void contarSubstring(char *str, char *subs)
{
    int contagem = 0;
	int i;
	int j;
	
	int tam_str = strlen(str);
	int tam_subs = strlen(subs);
	
    for (i=0; i < tam_str; i++)
    {
    	
        if (str[i] == subs[0]) 
        {
        	
            for (j=1; j < tam_subs; j++)
            {
                if (str[i + j] != subs[j])
                {
                    break; 
                }
            }

            if (j == tam_subs)
            {
                contagem++; 
            }
        }
    }

    printf("A substring 'UVV' aparece %d vezes na string.\n", contagem);
}
