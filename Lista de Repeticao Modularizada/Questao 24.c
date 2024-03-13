/*

	24) Escreva um algoritmo que leia o preço em reais de 50 mercadorias e exiba-as com 5% de reajuste.
	Entretanto, se o reajuste exceder o teto de R$ 25.50 reais, retirar 2% do preço reajustado.

*/

#include <stdio.h>

float calcula_dados(float preco_mercadoria);
void imprimi_dados();


int main() {
    
    imprimi_dados();

    return 0;
}


float calcula_dados(float preco_mercadoria) {
	
    float reajuste=0, preco_reajustado=0;
	
	reajuste = preco_mercadoria * 0.05; 

    if (reajuste > 25.50) 
	{
        reajuste = preco_mercadoria * 0.02; 
    }

    preco_reajustado = preco_mercadoria + reajuste;

    return preco_reajustado;
}

void imprimi_dados() {
	
    int num_mercadorias = 50; 
    float preco_mercadoria, preco_reajustado;

    for (int i = 0; i < num_mercadorias; i++) 
	{
        while (1) 
		{
            printf("\nDigite o preco da mercadoria %d: ", i + 1);
            scanf("%f", &preco_mercadoria);
            
            if (preco_mercadoria < 0) 
			{
                printf("\n--ERRO: Digite um valor positivo para a mercadoria--");
            } 
			else 
			{
                break; 
            }
        }
        
        preco_reajustado = calcula_dados(preco_mercadoria);
        
        printf("Preco reajustado da mercadoria %d: R$ %.2f\n", i + 1, preco_reajustado);
    }
}
