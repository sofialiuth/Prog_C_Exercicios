/*

	5) Escreva um algoritmo em C que leia de 10.000 habitantes de uma pequena cidade se está empregado ou
	não e exiba em porcentagem a quantidade de empregados e desempregados desta pequena cidade.

*/

#include <stdio.h>

void Vota(int *emp, int *desemp);
void Imprimi(int emp, int desemp, const int habitantes);

int main() 
{
    int emp=0;
    int desemp=0;
    const int habitantes = 10000; 

    Vota(&emp, &desemp);
    Imprimi(emp, desemp, habitantes);

    return 0;
}

void Vota(int *emp, int *desemp) 
{
    int voto, entrevistados = 0;
    const int habitantes = 10000;
    
    while (entrevistados < habitantes) 
	{
        printf("\nVoto - Habitante %i (1 para empregado, 0 para desempregado): ", entrevistados + 1);
        scanf("%i", &voto);

        if (voto != 0 && voto != 1) 
		{
            printf("\nERRO NA ENTRADA DE DADOS!");
        } 
		else 
		{
            if (voto == 1) 
			{
                (*emp)++;
            } 
			else 
			{
                (*desemp)++;
            }
            entrevistados++;
        }
    }
}

void Imprimi(int emp, int desemp, const int habitantes) 
{
    printf("\n\nRESULTADO FINAL:");
    printf("\n\nPorcentagem dos Empregados: %.2f%%", 100.0 * emp / habitantes);
    printf("\nPorcentagem dos Desempregados: %.2f%%", 100.0 * desemp / habitantes);
}
