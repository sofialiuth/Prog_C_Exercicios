/*

	2) Escrever um algoritmo em C para exibir os múltiplos de 11 e a soma dos múltiplos de 11, em ordem
	decrescente (inversa), compreendidos entre o intervalo: [300 400].

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
	
	int i, soma=0;
	
	printf("\nIntervalo [300 , 400]\n");
	printf("\nMultiplos de 11:\n");
    for(i=400; i>=300; i--)
    {
        if(i % 11 == 0){
            printf("\n%d" , i);
            soma += i;
        }
    }
    
    printf("\n\nSoma dos multiplos de 11: %d\n" , soma);
}
