/*

	15) Escrever um algoritmo que leia vários números reais (um por um) e exiba, em porcentagem, a
	quantidade de positivos e de negativos lidos. Pare o programa quando o usuário digitar ZERO.

*/

#include <stdio.h>

void ler_dados(float *i, float *pos_qntd, float *neg_qntd, float *qntd);
void imprimi_dados(float pos_qntd, float neg_qntd, float qntd);

int main()
{
    
    float i, qntd=0, pos_qntd=0, neg_qntd=0;
    
    ler_dados(&i, &pos_qntd, &neg_qntd, &qntd);
    imprimi_dados(pos_qntd, neg_qntd, qntd);
    
    
    return 0;
}

void ler_dados(float *i, float *pos_qntd, float *neg_qntd, float *qntd)
{
	do
    {
        printf("\nDigite um numero real");
        printf("\n(Pare o programa digitando zero):  ");
        scanf("%f" , i);
        
        if(*i>0)
        {
            (*pos_qntd)++;
        }
        else if (*i<0)
        {
            (*neg_qntd)++;
        }
        else
        {
            break;
        }
        
        (*qntd)++;
    }
    while(*i != 0);
}

void imprimi_dados(float pos_qntd, float neg_qntd, float qntd)
{
	printf("\n\nRESULTADO:\n");
    printf("\nPorcentagem dos numeros positivos: %.2f%%" , 100.0 * pos_qntd/qntd);
    printf("\nPorcentagem dos numeros negativos: %.2f%%" , 100.0 * neg_qntd/qntd);
}