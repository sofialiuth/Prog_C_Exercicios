/*

	26) Escreva um algoritmo que leia o salário bruto de 10.000 entrevistados e exiba na tela a média salarial
	entre as pessoas com escolaridade de ensino: Fundamental, Médio e Superior.

*/

#include <stdio.h>
#define entrevistados 10000

float calcula_dados(float soma, float qntd);
void imprimi_dados();

int main()
{
	imprimi_dados();
}

float calcula_dados(float soma, float qntd)
{
	float media=0;
	
	media = soma / qntd;
	
	return media;
}

void imprimi_dados()
{
	int i, escolaridade;
	float salario, somaF=0, somaM=0, somaS=0, qntdF=0, qntdM=0, qntdS=0, mediaF=0, mediaM=0, mediaS=0;
	
	for(i=0; i<entrevistados; i++)
	{
		do
		{
			printf("\nEntrevistado Numero %d" , i + 1);
			printf("\nDigite o seu salario: ");
			scanf("%f" , &salario);
			
			printf("\nDigite sua escolaridade:");
			printf("\n(1) - Fundamental");
			printf("\n(2) - Medio");
			printf("\n(3) - Superior\n");
			scanf("%d" , &escolaridade);
			
			if((salario<0)||((escolaridade != 1)&&(escolaridade != 2)&&(escolaridade != 3)))
			{
				printf("\n--ERRO NA ENTRADA DE DADOS--");
			}
			else
			{
				if(escolaridade == 1)
				{
					somaF += salario;
					qntdF++;
				}
				else if(escolaridade == 2)
				{
					somaM += salario;
					qntdM++;
				}
				else
				{
					somaS += salario;
					qntdS++;
				}
			}
		}
		while(((salario<0)||((escolaridade != 1)&&(escolaridade != 2)&&(escolaridade != 3))));
	}
	
	mediaF = calcula_dados(somaF, qntdF);
	mediaM = calcula_dados(somaM, qntdM);
	mediaS = calcula_dados(somaS, qntdS);
	
	printf("\n\nMedia salarios dos entrevistados de escolaridade:\n");
	printf("\nFundamental: %.2f" , mediaF);
	printf("\nMedio: %.2f" , mediaM);
	printf("\nSuperior: %.2f" , mediaS);
}