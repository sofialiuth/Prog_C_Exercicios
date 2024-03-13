/* 

	1) Escrever um algoritmo em C para exibir os múltiplos de 3 compreendidos no intervalo: [3 100]. 

*/

#include <stdio.h>

void Calcula();

int main()
{  
    Calcula();
    
    return 0;
}

void Calcula()
{
	int i; 
	
	for (int i=3; i<=100; i++)
    {
        if (i % 3 == 0)
        {
            printf("\n %d" , i);
        }
    }
}