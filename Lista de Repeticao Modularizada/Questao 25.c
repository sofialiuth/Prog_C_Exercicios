/*

	25) Escreva um algoritmo que calcule a taxa média de glicose de cada um dos 500 pacientes em função de
	sua idade, massa e se é diabético ou não, conforme a tabela:

		Diabetes Fórmula
			Não Taxa = (sqrt(0.98 * Massa)) / (1.08 * Idade)
			Sim Taxa = (sqrt(Massa)) / (0.93 * Idade)

*/

#include <stdio.h>
#include <math.h>

double calcula_dados(double idade, double massa, int diabetico);
void imprimi_dados();

int main()
{
    imprimi_dados();
    return 0;
}

double calcula_dados(double idade, double massa, int diabetico)
{
    double taxa;

    if (diabetico == 0)
    {
        taxa = (sqrt(0.98 * massa)) / (1.08 * idade);
    }
    else if (diabetico == 1)
    {
        taxa = (sqrt(massa)) / (0.93 * idade);
    }

    return taxa;
}

void imprimi_dados()
{
    double diabetico, massa, idade, taxa=0;
    int i, participantes = 500;

    for (i = 0; i < participantes; i++)
    {
        while (1)
        {
            printf("\n- Digite sua idade: ");
            scanf("%lf", &idade);

            printf("- Digite sua massa (em kg): ");
            scanf("%lf", &massa);

            printf("- Digite se voce eh diabetico ou nao (1 para diabetico, 0 para nao diabetico): ");
            scanf("%lf", &diabetico);

            if ((idade < 0) || (massa < 0) || ((diabetico != 0) && (diabetico != 1)))
            {
                printf("--ERRO--\n");
            }
            else
            {
                break;
            }
        }

        taxa = calcula_dados(idade, massa, diabetico);

        printf("Taxa media de glicose do participante %d: %.2lf\n", i + 1, taxa);
    }
}

