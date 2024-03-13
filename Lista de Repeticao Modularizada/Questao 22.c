/*

	22) Escreva um algoritmo que leia a temperatura diária de inverno de uma estação de esqui. Sabe-se que as
	temperaturas no inverno variam de -15° a 5° C. Exiba a temperatura média da estação parando o
	algoritmo quando for digitada uma temperatura fora da estação de inverno.

*/

#include <stdio.h>


// PROTÓTIPOS

void le_e_conta_dados(float *temperatura, float *M);
float media (float soma, float i);
 
// MAIN 

int main()
{
    float temperatura, M=0;
    
    le_e_conta_dados(&temperatura, &M);
    
    return 0;
}


// FUNÇÕES

float media (float soma, float i)
{
    float media;
    media = soma / i;
    
    return media;
}

void le_e_conta_dados(float *temperatura, float *M)
{
	float soma=0, i=0;
	
	do
    {
        printf("\nDigite a temperatur diaria: ");
        scanf("%f" , temperatura);
        
        if((*temperatura>=-15)&&(*temperatura<=5))
        {
            soma += *temperatura;
            i++;
        }
        else
        {
            break;
        }
    }
    while ((*temperatura >= -15) && (*temperatura <= 5));

    
    (*M) = media(soma, i);
    
    printf("\nMedia das temperaturas diarias de inverno: %.2f" , *M);
}