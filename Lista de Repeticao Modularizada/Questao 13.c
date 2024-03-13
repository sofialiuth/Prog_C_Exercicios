/*

	13) Escrever um algoritmo em C, para cada item a seguir, que leia a altura em metros e o sexo (M: para
	Masculino ou F: para Feminino) de 50 pessoas. Este algoritmo deverá mostrar na tela:
	a) A altura da pessoa mais alta por sexo.
	b) Média da altura dos homens e das mulheres.
	c) Quantidade de Homens e Mulheres, em porcentagem, com mais de 1.82 metros de altura.

*/

#include <stdio.h>

void LerDados_e_SomarDados(char *sexo, int *qntd_homem, int *qntd_mulher, float *altura, float *altura_homem, float *altura_mulher, int *qntd_homem_acima_182, int *qntd_mulher_acima_182, float *altura_alta_homem, float *altura_alta_mulher);
void Medias_Porcentagens(float altura_mulher, int qntd_mulher, float altura_homem, int qntd_homem, int qntd_homem_acima_182, int qntd_mulher_acima_182, float *media_a_mulher, float *media_a_homem, float *percent_homens_acima_182, float *percent_mulheres_acima_182);
void Imprimir(float media_a_mulher, float media_a_homem, float altura_alta_mulher, float altura_alta_homem, float percent_homens_acima_182, float percent_mulheres_acima_182);

int main() {
    char sexo;
    int qntd_homem = 0, qntd_mulher = 0, qntd_homem_acima_182 = 0, qntd_mulher_acima_182 = 0;
    float altura, altura_homem = 0, altura_mulher = 0, altura_alta_homem = 0, altura_alta_mulher = 0;
    float media_a_homem = 0, media_a_mulher = 0, percent_homens_acima_182 = 0, percent_mulheres_acima_182 = 0;

    const int entrevistados = 50;
    int i;

    LerDados_e_SomarDados(&sexo, &qntd_homem, &qntd_mulher, &altura, &altura_homem, &altura_mulher, &qntd_homem_acima_182, &qntd_mulher_acima_182, &altura_alta_homem, &altura_alta_mulher);
    Medias_Porcentagens(altura_mulher, qntd_mulher, altura_homem, qntd_homem, qntd_homem_acima_182, qntd_mulher_acima_182, &media_a_mulher, &media_a_homem, &percent_homens_acima_182, &percent_mulheres_acima_182);
    Imprimir(media_a_mulher, media_a_homem, altura_alta_mulher, altura_alta_homem, percent_homens_acima_182, percent_mulheres_acima_182);

    return 0;
}

void LerDados_e_SomarDados(char *sexo, int *qntd_homem, int *qntd_mulher, float *altura, float *altura_homem, float *altura_mulher, int *qntd_homem_acima_182, int *qntd_mulher_acima_182, float *altura_alta_homem, float *altura_alta_mulher) {
    const int entrevistados = 50;
    int i;

    for (i = 0; i < entrevistados; i++) {
        printf("\nEntrevistado N %d", i + 1);

        do {
            printf("\nDigite seu gênero (F ou M):\n");
            scanf(" %c", sexo);

            if ((*sexo) != 'M' && (*sexo) != 'F') {
                printf("\n--ERRO NA ENTRADA DE DADOS--");
            } else {
                if ((*sexo) == 'M') {
                    (*qntd_homem)++;
                } else {
                    (*qntd_mulher)++;
                }
            }
        } while ((*sexo != 'M') && (*sexo) != 'F');

        do {
            printf("\nDigite sua altura:\n");
            scanf("%f", altura);

            if ((*altura) <= 0) {
                printf("\n--ERRO NA ENTRADA DE DADOS--");
            } else {
                if ((*sexo) == 'M') {
                    (*altura_homem) += (*altura);

                    if (*altura > 1.82) {
                        (*qntd_homem_acima_182)++;
                        if ((*altura) > (*altura_alta_homem)) {
                            (*altura_alta_homem) = (*altura);
                        }
                    }
                } else {
                    (*altura_mulher) += (*altura);

                    if ((*altura) > 1.82) {
                        (*qntd_mulher_acima_182)++;
                        if ((*altura) > (*altura_alta_mulher)) {
                            (*altura_alta_mulher) = (*altura);
                        }
                    }
                }
            }
        } while ((*altura) <= 0);
    }
}

void Medias_Porcentagens(float altura_mulher, int qntd_mulher, float altura_homem, int qntd_homem, int qntd_homem_acima_182, int qntd_mulher_acima_182, float *media_a_mulher, float *media_a_homem, float *percent_homens_acima_182, float *percent_mulheres_acima_182) {
    if (qntd_mulher > 0) {
        (*media_a_mulher) = altura_mulher / qntd_mulher;
    }
    if (qntd_homem > 0) {
        (*media_a_homem) = altura_homem / qntd_homem;
    }

    if (qntd_homem > 0) {
        (*percent_homens_acima_182) = ((float)qntd_homem_acima_182 / qntd_homem) * 100;
    }
    if (qntd_mulher > 0) {
        (*percent_mulheres_acima_182) = ((float)qntd_mulher_acima_182 / qntd_mulher) * 100;
    }
}

void Imprimir(float media_a_mulher, float media_a_homem, float altura_alta_mulher, float altura_alta_homem, float percent_homens_acima_182, float percent_mulheres_acima_182) {
    printf("\n\nResultado:\n");
    printf("\nMedia da altura das mulheres: %.2f", media_a_mulher);
    printf("\nMedia da altura dos homens: %.2f", media_a_homem);
    printf("\n\nAltura mais alta das mulheres: %.2f", altura_alta_mulher);
    printf("\nAltura mais alta dos homens: %.2f", altura_alta_homem);
    printf("\n\nHomens com mais de 1.82m: %.2f%%", percent_homens_acima_182);
    printf("\nMulheres com mais de 1.82m: %.2f%%", percent_mulheres_acima_182);
}
