/*

	14)Escrever um algoritmo em C que leia o voto de 50 eleitores de um condomínio nos candidatos (1 ou 2 ou
	0 (Nulo ou Inválido)) para síndico e exiba na tela, em porcentagem, o resultado da eleição por
	candidato e os votos nulos ou inválidos. Crie um Menu de Opções para o eleitor.

*/

#include <stdio.h>

void vota(float *voto, float *sind1, float *sind2, float *nulo);
void imprimi(float voto, float sind1, float sind2, float nulo);

int main()
{
    float voto, sind1=0, sind2=0, nulo=0;
    
    vota(&voto, &sind1, &sind2, &nulo);
    imprimi(voto, sind1, sind2, nulo);

    return 0;
}

void vota(float *voto, float *sind1, float *sind2, float *nulo)
{
	int entrevistados = 0;
	const int eleitores = 5;
    
    while (entrevistados < eleitores)
    {
        printf("\nVote para sindico do condominio:");
        printf("\n1 - Sindico 1");
        printf("\n2 - Sindico 2");
        printf("\n0 - nulo\n");
        printf("Eleitor %.f: " , entrevistados + 1);
        scanf("%f" , voto);
        
        if ((*voto != 1) && (*voto != 2) && (*voto != 0))
        {
            printf("\n-- ERRO NA ENTRADA DE DADOS --");
        }
        else
        {
            if(*voto==1)
            {
                (*sind1)++;
            }
            else if(*voto==2)
            {
                (*sind2)++;
            }
            else 
            {
                (*nulo)++;
            }
            entrevistados++;
        }
    }
}

void imprimi(float voto, float sind1, float sind2, float nulo)
{
	const int eleitores = 5;
	
	printf("\n\nPorcentagens dos votos:");
    printf("\nSíndico 1: %.2f%%", (sind1 / eleitores) * 100);
	printf("\nSíndico 2: %.2f%%", (sind2 / eleitores) * 100);
	printf("\nNulo: %.2f%%", (nulo / eleitores) * 100);

}
