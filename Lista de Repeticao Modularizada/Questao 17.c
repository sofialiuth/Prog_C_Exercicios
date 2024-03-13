/*

	17) Escreva um algoritmo que leia vários números reais positivos e exiba o menor deles.
	Pare a leitura quando for digitado o número zero.

*/

#include <stdio.h>
#include <limits.h>

void Conta(float *num, float *menor_num);

int main()
{
    
    float num;
    float menor_num = INT_MAX;
    
    Conta(&num, &menor_num);
    
    return 0;
}

void Conta(float *num, float *menor_num)
{
	do
    {
        printf("\nDigite um numero real positivo");
        printf("\n(Para parar o programa, digite zero): ");
        scanf("%f" , num);
        if(*num < 0)
        {
            printf("\n--ERRO--");
        }
        else if(*num == 0)
        {
            break;
        }
        else
        {
            if(*num < *menor_num)
            {
                (*menor_num) = *num;
            }
        }
    }
    while(*num != 0);
    
    printf("\n\nMenor numero: %.2f" , *menor_num);
}