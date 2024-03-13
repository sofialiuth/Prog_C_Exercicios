/*

	6) Escreva um algoritmo em C que leia o salário em reais (R$) de 1000 clientes de um shopping e exiba na 
	tela, em porcentagem, a divisão dos clientes por tipo: A, B ou C, conforme a seguir:
✓ 	A: Maior ou igual a 15 Salários Mínimos ou
✓ 	B: Menor que 15 Salários Mínimos ou maior ou igual a 5 Salários Mínimos ou
✓ 	C: Menor que 5 Salários Mínimos.
	Declarar o Salário Mínimo (SM: R$ 880.05) como constante com o comando: #define.

*/

#include <stdio.h>
#define sal_min 880.05;

void Salario(float *clienteA, float *clienteB, float *clienteC);
void Imprimi(float clienteA, float clienteB, float clienteC);

int main()
{
    
    float clienteA=0, clienteB=0, clienteC=0;
    
    Salario(&clienteA, &clienteB, &clienteC);
    Imprimi(clienteA, clienteB, clienteC);

    return 0;
}

void Salario(float *clienteA, float *clienteB, float *clienteC)
{
	float entrevistados, salario, n_salario;
    entrevistados = 0;
    const float clientes = 1000;
    
    while (entrevistados < clientes)
    {
        printf("\nDigite o seu salario:\n");
        printf("Salario - Cliente %.f: " , entrevistados + 1);
        scanf("%f" , &salario);
        
        n_salario = salario/sal_min;
        
        if (n_salario >= 15)
        {
            (*clienteA)++;
        }
        else if (n_salario >= 5)
        {
            (*clienteB)++;
        }
        else
        {
            (*clienteC)++;
        }
        
        entrevistados++;
    }
}

void Imprimi(float clienteA, float clienteB, float clienteC)
{
	const float clientes = 1000;
	
    printf("\nClasse A (Maior ou igual a 15 Salarios Minimos): %.f%%" , 100.0 * clienteA/clientes);
    printf("\nClasse B (Menor que 15 Salarios Minimos ou Maior ou igual a 5 Salarios Minimos): %.f%%" , 100.0 * clienteB/clientes);
    printf("\nClasse C (Menor que 5 Salarios Minimos): %.f%%" , 100.0 * clienteC/clientes);
}
