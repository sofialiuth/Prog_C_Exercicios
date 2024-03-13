/*

	12) Os comerciantes das Praias de Vila-Velha querem saber a temperatura média do verão capixaba. Escreva
	um algoritmo em C que leia a temperatura diária no verão e exiba a temperatura média da estação
	parando o algoritmo quando for digitada uma temperatura fora da estação. Sabe-se que as temperaturas,
	na estação de verão Capixaba, ficam acima de 28 °C. 

*/

#include <stdio.h>

void Ler_e_Conta(float *temp, float *soma, float *media);
void Imprimi(float media);

int main()
{
    float temp, soma=0, media=0;
    
    Ler_e_Conta(&temp, &soma, &media);
    Imprimi(media);
    
    return 0;
}

void Ler_e_Conta(float *temp, float *soma, float *media)
{
	int dias=0;
	
	while(1)
    {
        printf("\nDigite a temperatura diaria no verao (pare o algoritmo ao digitar uma tempera igual ou abaixo de 28 Graus\n");
        printf("Dia %i:\n" , dias + 1);
        scanf("%f" , temp);
        
        if (*temp<=28)
        {
            break;
        }
        
        (*soma) += *temp;
        dias++;
    }
    
    if (dias > 0) 
	{
        (*media) = *soma / dias;
    }
}

void Imprimi(float media)
{
	printf("\n\nA temperatura media do verao capixaba foi: %.2f graus Celsius\n", media);
}
