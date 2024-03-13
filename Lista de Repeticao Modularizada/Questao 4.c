/*

    4) Faça um algoritmo que exiba a soma dos PARES e ÍMPARES compreendidos entre [999 100].
    
*/

#include <stdio.h>

void Pares();
void Impares();

int main()
{
	printf("\nIntervalo [999, 100]\n");
    Pares();
    Impares();
    
    return 0;
}

void Pares()
{
	int p, soma_pares=0;
    
    printf("\nSoma dos Pares: ");
    for(p=999; p>=100; p--)
    {
        if (p % 2 == 0)
        {
            soma_pares += p;
            
        }
    }
    
    printf("%d" , soma_pares);
}

void Impares()
{
	int i, soma_impares=0;
	
	printf("\nSoma dos Impares: ");
    for(i=999; i>=100; i--)
    {
        if(!(i % 2 == 0))
        {
            soma_impares += i;
        }
    }
    printf("%d\n" , soma_impares);
}