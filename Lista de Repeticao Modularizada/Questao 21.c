/*

	21) Escreva um algoritmo que leia vários números e exiba a média dos números lidos que estão no intervalo
	fechado: [10 * π3, 100 * π]. Pare o algoritmo quando for digitado um número fora do intervalo.

*/

#include <stdio.h>


// PROTOTIPOS

void ler_dados(float *n, float *M);
float media (float soma, float i);
void imprimi(float M);


// MAIN

int main()
{
    float n, M=0;
    
    ler_dados(&n, &M);
    imprimi(M);
    
    return 0;
}


// FUNÇÕES

float media (float soma, float i)
{
    float media;
    
    media = soma / i;
    
    return media;
}

void ler_dados(float *n, float *M)
{
	float soma=0, i=0, i1, i2, PI=3.14;
    
    i1 = 10 * PI * 3;
    i2 = 100 * PI;
    
    do
    {
        printf("\nDigite um numero: ");
        scanf("%f" , n);
        
        if((i1> *n)||(i2< *n))
        {
            break;
        }
        else
        {
            soma += *n;
            i++;
        }
    }
    while((i1< *n)||(i2> *n));
    
    (*M) = media(soma, i);
}

void imprimi(float M)
{
	printf("\n\nMedia dos numeros dentro do intervalo: %.1f" , M);
}