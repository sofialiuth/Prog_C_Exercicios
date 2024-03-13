/*

	6) Escrever um programa que leia várias mensagens (uma por uma) e conte a quantidade de 
	vezes que uma sílaba (duas letras) qualquer, escolhida pelo usuário, aparece na mensagem.
	Pare de ler mensagens, quando a sílaba, escolhida pelo usuário, NÃO estiver na mensagem lida.
	
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100];
    char silaba[3]; // Adicionei um espaço para o caractere nulo '\0'

    printf("\n\nDigite uma silaba (2 letras maximo) que voce deseja procurar: ");
    scanf(" %2s", silaba); // Leitura da silaba com no máximo 2 caracteres

    int contador_geral = 0;
    int i;
    for (i=0;; i++)
    {
        printf("\n%d - Digite uma mensagem: " , i+1);
        scanf(" %[^\n]", palavra);

        int tam_pal = strlen(palavra);
        int j, contador = 0;

        for (j = 0; j < tam_pal - 1; j++)
        {
            if (palavra[j] == silaba[0] && palavra[j + 1] == silaba[1])
            {
                contador++;
            }
        }

        contador_geral += contador;

        if (contador == 0)
        {
            break;
        }
    }

    printf("\n\nQuantidade de vezes que a silaba '%s' aparece: %d\n", silaba, contador_geral);

    return 0;
}
