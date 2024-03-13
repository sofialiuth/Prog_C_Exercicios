/*

	18) Escreva um algoritmo que leia 100 números ímpares e múltiplos de 7. Exiba a média dos números lidos.

*/

#include <stdio.h>

void ler_dados(int *num, float *soma, int *i);
void conta_e_imprimi(float soma, int i);

int main()
{
    int i=0, num;
    float soma=0, media=0;
    
    ler_dados(&num, &soma, &i);
    conta_e_imprimi(soma, i);
    
    
    return 0;
}

void ler_dados(int *num, float *soma, int *i)
{
	const int vezes = 100;
	
	while (*i<vezes)
    {
        printf("\nDigite um numero impar e multiplo de 7: ");
        scanf("%d" , num);
            
        if((*num % 2 != 0) && (*num % 7 == 0))
        {
            (*soma) += *num;
            (*i)++;
        }
        else
        {
            printf("\n--Erro na entrada de dado. O numero deve ser impar e multiplo de 7 --");
        }
    }
}

void conta_e_imprimi(float soma, int i)
{
	float media=0;
	
	media = soma/i;
    
    printf("\nMedia: %.2f" , media);
}


