/* 

	23) Escreva um algoritmo que leia a inscrição e a tempo de prova (minutos) de 20000 maratonistas.
	Exiba na tela a inscrição e o tempo de prova do maratonista vencedor. 

*/

#include <stdio.h>
#define participantes 20000

void ler_dados(int *insc, int *tempo);
void imprimi_dados(int *iv, int *tv);

int main()
{
    int insc_vencedor, tempo_vencedor;

    imprimi_dados(&insc_vencedor, &tempo_vencedor);
    
    return 0;
}

void ler_dados(int *insc, int *tempo)
{
    printf("\nDigite a sua inscricao:\n");
    scanf("%i", insc);
    
    printf("\nDigite o seu tempo de prova em minutos:\n");
    scanf("%i", tempo);
    
}

void imprimi_dados(int *iv, int *tv)
{
    int insc, tempo;
    
    for (int i = 0; i < participantes; i++)
    {
        ler_dados(&insc, &tempo);
        
        if ((i == 0)||(tempo < *tv))
        {
            *tv = tempo;
            *iv = insc;
        }   
    }

    printf("\nO maratonista da inscricao %i foi o vencedor da prova, concluindo-a em %i minutos!\n\n", *iv, *tv);
}