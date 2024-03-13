/*

	3) Escrever um algoritmo em C para exibir os múltiplos de n compreendidos entre o intervalo:
	[lImiteInferior LimtieSuperior] E N|. Sendo que:
		{n E N| // n >= 2}
		{LimiteInferiro , LimiteSuperior E N| // LimiteISuperior >= LimiteInferiror}

*/

#include <stdio.h>

int lerMultiplo();
int lerLimiteInferior();
int lerLimiteSuperior(int LI); 
void imprimi(int n, int LI, int LS);

int main()
{
	int n, LS, LI;
	
	n = lerMultiplo();
    LI = lerLimiteInferior();
    LS = lerLimiteSuperior(LI);

    imprimi(n, LI, LS);

    return 0;
}

int lerMultiplo()
{
	int n;
	
    do 
	{
        printf("\nDigite um numero inteiro igual ou maior que 2 para ser o Multiplo:\n");
        scanf("%i", &n);

        if (n < 2) 
		{
            printf("\nERRO NA ENTRADA DE DADOS!");
        }
    } 
	while (n < 2);
    
    return n;
}

int lerLimiteInferior()
{
	int LI;
	
    do 
	{
        printf("\nDigite um numero inteiro para ser o Limite Inferior:\n");
        scanf("%i", &LI);

        if (LI < 1) 
		{
            printf("\nERRO NA ENTRADA DE DADOS!");
        }
    } 
	while (LI < 1);
    
    return LI;
}

int lerLimiteSuperior(int LI)
{
	int LS;
	
    do 
	{
        printf("\nDigite um numero inteiro para ser o Limite Superior:\n");
        scanf("%i", &LS);

        if (LS < LI) 
		{
            printf("\nERRO NA ENTRADA DE DADOS!");
        }
    } 
	while (LS < LI);
    
    return LS;
}

void imprimi(int n, int LI, int LS)
{
	for (int i = LI; i <= LS; i++) 
	{
        if (i % n == 0) 
		{
            printf("\n%i", i);
        }
    }
}


