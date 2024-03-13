/*

	27) Escreva um algoritmo que leia vários números (E R|) e exiba a média dos positivos lidos e a média dos
	negativos lidos, parando o programa quando for digitado o número zero.

*/

#include <stdio.h>

float calcula_media(float soma, int qntd);
void imprimi_dados();

int main()
{
	imprimi_dados();
}

float calcula_media(float soma, int qntd)
{
	float media=0;
	
	media = soma / qntd;
	
	return media;
}

void imprimi_dados()
{
	
	int qntdP=0, qntdN=0;
	float n, somaP=0, somaN=0, mediaP=0, mediaN=0;
	
	do
	{
		printf("\nDigite um numero real (caso queira parar, digite 0):  ");
		scanf("%f" , &n);
		
		if(n == 0)
		{
			break;
		}
		else
		{
			if(n>0)
			{
				somaP += n;
				qntdP++;
			}
			else
			{
				somaN += n;
				qntdN++;
			}
		}
	}
	while(n != 0);
	
	mediaP = calcula_media(somaP, qntdP);
	mediaN = calcula_media(somaN, qntdN);
	
	printf("\n\nMedia dos numeros positivos: %.2f" , mediaP);
	printf("\n\nMedia dos numeros negativos: %.2f\n\n" , mediaN);
}





