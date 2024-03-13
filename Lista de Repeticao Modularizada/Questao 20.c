/*

	20) Escreva um algoritmo que leia o salário em reais de vários clientes de um shopping e exiba em
	porcentagem a divisão dos clientes por tipo de cartão, conforme a seguir:
	✓ Cartão VIP: Maior ou igual a R$ 5.000
	✓ Cartão STANDARD: Menor que R$ 5.000
	Faça um Menu de opções para o usuário: 1: Cadastrar Cliente ou 0: Sair do Programa.

*/

#include <stdio.h>

void conta(float *percent_standard, float *percent_vip);
void imprimir(float percent_standard, float percent_vip);

int main()
{
    float percent_standard=0, percent_vip=0;
    
    conta(&percent_standard, &percent_vip);
    imprimir(percent_standard, percent_vip);
    
    return 0;
}

void conta(float *percent_standard, float *percent_vip)
{
	int o, vip = 0, standard = 0;
    float salario;
    int total_clientes = 0;
    
    do
    {
        printf("\nCliente Numero %d", total_clientes + 1);
        printf("\nDigite 1 para se registrar ou 0 para sair: ");
        scanf("%d", &o);
        
        if (o == 0)
        {
            break;
        }
        else if (o == 1)
        {
            printf("\nDigite seu salario:\n");
            scanf("%f", &salario);
            
            if (salario < 5000)
            {
                standard++;
            }
            else
            {
                vip++;
            }
            
            total_clientes++; 
        }
        else 
        {
            printf("\n--ERRO--");
        }
    } 
	while (o != 0);
    
    if (total_clientes > 0) 
	{
        (*percent_vip) = 100.0 * vip / total_clientes;
        (*percent_standard) = 100.0 * standard / total_clientes;
    }
}

void imprimir(float percent_standard, float percent_vip)
{
	printf("\n\nPorcentagem vip = %.2f%%" , percent_vip);
    printf("\nPorcentagem standard = %.2f%%" , percent_standard);
}