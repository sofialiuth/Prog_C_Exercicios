/*

	9)Escrever um algoritmo que leia vários Números N (um por vez) que, no intervalo entre [10 90],
	divididos por 5 possuem resto 2. Exiba a soma dos números lidos, parando o programa para N = 0.

*/

#include <stdio.h>

void Ler(int *n, int *soma);
void Imprimi(int soma);


int main() {
	
	int n, soma=0;
	
	Ler(&n, &soma);
	Imprimi(soma);

    return 0;
}

void Ler(int *n, int *soma)
{
	while (1) {
        printf("Digite um numero (ou 0 para sair): ");
        scanf("%d", n);

        if (*n == 0) {
            break; 
        }

        if ((*n >= 10) && (*n <= 90) && (*n % 5 == 2)) {
            (*soma) += *n;
        }
    }
}

void Imprimi(int soma)
{
	printf("\n\nA soma dos numeros validos e: %d\n", soma);
}
