/*

	16) Escreva um algoritmo que leia 300 números positivos e exiba o menor e o maior: par e ímpar

*/

#include <stdio.h>
#include <limits.h> 

void Le_Dados(int *num, int *maior_par, int *maior_impar, int *menor_par, int *menor_impar);
void Imprimi_Dados(int maior_par, int maior_impar, int menor_par, int menor_impar);

int main()
{
    int num, maior_par = 0, maior_impar = 0;
    int menor_par = INT_MAX , menor_impar = INT_MAX;
    
    Le_Dados(&num, &maior_par, &maior_impar, &menor_par, &menor_impar);
    Imprimi_Dados(maior_par, maior_impar, menor_par, menor_impar);
    
    return 0;
}

void Le_Dados(int *num, int *maior_par, int *maior_impar, int *menor_par, int *menor_impar)
{
	int i;
	
	const int vezes = 300;
    
    for (i = 0; i < vezes; i++)
    {
        do
        {
            printf("\nNumero %d", i + 1);
            printf("\nDigite um numero positivo: ");
            scanf("%d", num);
            
            if (*num < 0)
            {
                printf("\n--ERRO--");
            }
            else if ((*num) % 2 == 0)
            {
                if (*num > *maior_par)
                {
                    (*maior_par) = *num;
                }
                
                if (*num < *menor_par)
                {
                    (*menor_par) = *num;
                }
            }
            else
            {
                if (*num > *maior_impar)
                {
                    (*maior_impar) = *num;
                }
                
                if (*num < *menor_impar)
                {
                    (*menor_impar) = *num;
                }
            }
        } 
        while (*num < 0);
    }
}

void Imprimi_Dados(int maior_par, int maior_impar, int menor_par, int menor_impar)
{
	printf("\nMaior par: %d", maior_par);
    printf("\nMaior impar: %d", maior_impar);
    printf("\nMenor par: %d", menor_par);        
    printf("\nMenor impar: %d", menor_impar);
}