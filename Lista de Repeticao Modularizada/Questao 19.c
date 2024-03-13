/*

	19) Escreva um algoritmo que exiba todos os múltiplos de 7 ou 13 que estão no intervalo entre 1000 e 1500.

*/

#include <stdio.h>

void conta();

int main()
{
    conta();

    return 0;
}

void conta()
{
	int i;
    
    
    for(i=1000; i<1500; i++)
    {
        if((i % 7 == 0)||(i % 13 == 0))
        {
            printf("\n%d" , i);
        }
    }
}
