/*

	8) Um marca de sucos que saber a opinião dos seus clientes sobre três diferentes novos “mix” de sabores.
	As degustações e votação se realizaram num supermercado durante certo período. Faça um algoritmo em
	C, que exiba a porcentagem dos clientes que gostaram da opção: 1: Mix 1, 2: Mix 2 ou 3: Mix 3 de
	sabores. Pare o algoritmo quando for digitada a opção zero (0).

*/

#include <stdio.h>

void Votacao(float *mix1, float *mix2, float *mix3, int *entrevistados);
void Imprimi(float mix1, float mix2, float mix3, int entrevistados);

int main() 
{
    float mix1 = 0, mix2 = 0, mix3 = 0;
    int entrevistados = 0;

    Votacao(&mix1, &mix2, &mix3, &entrevistados);
    Imprimi(mix1, mix2, mix3, entrevistados);

    return 0;
}

void Votacao(float *mix1, float *mix2, float *mix3, int *entrevistados) 
{
    float voto;

    while (1) 
	{
        printf("\nVote: 1: Mix 1 / 2: Mix 2 ou 3 / 3: Mix 3");
        printf("\n( Caso queira sair, digite 0 )");
        printf("\nDigite seu voto: ");
        scanf("%f", &voto);

        if (voto == 0) 
		{
            break;
        } 
		else if (voto != 1 && voto != 2 && voto != 3) 
		{
            printf("\n---ERRO: ENTRADA DE DADOS---");
        } 
		else 
		{
            if (voto == 1) 
			{
                (*mix1)++;
            } 
			else if (voto == 2) 
			{
                (*mix2)++;
            } 
			else 
			{
                (*mix3)++;
            }
            
            (*entrevistados)++;
        }
    }
}

void Imprimi(float mix1, float mix2, float mix3, int entrevistados) 
{
    printf("\nPorcentagem dos votos para cada mix:\n\n");
    
    if (entrevistados == 0) 
	{
        printf("Nenhum voto registrado.\n");
    } 
	else 
	{
        printf("Mix 1: %.1f%%\n", (mix1 / entrevistados) * 100);
        printf("Mix 2: %.1f%%\n", (mix2 / entrevistados) * 100);
        printf("Mix 3: %.1f%%\n", (mix3 / entrevistados) * 100);
    }
}
