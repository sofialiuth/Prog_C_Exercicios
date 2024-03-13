/*

	21. Escreva um algoritmo que leia as notas (1° e 2° Bimestre) e o sexo ('M': Masculino ou 'F': Feminino) 
	de 30 alunos e armazene os dados em (3) vetores apropriados. Após isso, exiba na tela:
	
	a) A média final das notas dos alunos do sexo Feminino.
	b) A maior média final do aluno do sexo Masculino.
	c) A quantidade de alunos que ficaram acima da média final 7.0 para aprovação.
	d) A quantidade total de alunos que ficaram com média final entre [3.0, 7.0[.
	e) A quantidade de alunos que ficaram acima da média final das notas da turma.

*/

#include <stdio.h>
#include <stdlib.h>

const int tam = 3; //DEPOIS MUDA ESSA PORRA SOFIA

void nota_1B(float v[]);
void nota_2B(float v[]);
void sexo(char v[]);
void media_F(float b1[], float b2[], char s[]);
void media_maior_M(float b1[], float b2[], char s[]);
void alunos_passaram(float b1[], float b2[], char s[]);
void media_final_turma(float b1[], float b2[], char s[]);

int main()
{
	float b1[tam], b2[tam];
	char s[tam];
	
	nota_1B(b1);
	nota_2B(b2);
	sexo(s);
	
	media_F(b1, b2, s);
	media_maior_M(b1, b2, s);
	alunos_passaram(b1, b2, s);
	media_final_turma(b1, b2, s);
	
	return 0;
}

void nota_1B(float v[])
{
	int i;
	
	printf("\nNota 1 Bimestre - deve ser entre [0-10]\n");
	
	for(i=0; i<tam; i++)
	{
		printf("\nAluno %d - Digite sua nota do 1 bimestre: " , i+1);
		do
		{
			scanf("%f" , &v[i]);
			
			if((v[i] < 0.0)||(v[i] > 10.0))
			{
				printf("\n--erro na entrada de dados--\n\n");
				printf("\nAluno %d - Digite sua nota do 1 bimestre: " , i+1);
			}
		}
		while((v[i] < 0.0)||(v[i] > 10.0));
	}	
}

void nota_2B(float v[])
{
	int i;
	
	printf("\n\nNota 2 Bimestre - deve ser entre [0-10]\n");
	
	for(i=0; i<tam; i++)
	{
		printf("\nAluno %d - Digite sua nota do 2 bimestre: " , i+1);
		do
		{
			scanf("%f" , &v[i]);
			
			if((v[i] < 0.0)||(v[i] > 10.0))
			{
				printf("\n--erro na entrada de dados--\n\n");
				printf("\nAluno %d - Digite sua nota do 2 bimestre: " , i+1);
			}
		}
		while((v[i] < 0.0)||(v[i] > 10.0));
	}	
}

void sexo(char v[])
{
	int i;
	
	printf("\n\nSexo dos alunos:\n");
	for(i=0; i<tam; i++)
	{
		printf("\nAluno %d - Digite seu sexo [M ou F]: " , i+1);
		
		do
		{
			scanf(" %c" , &v[i]);
			
			if((v[i] != 'M') && (v[i] != 'F'))
			{
				printf("--erro na entrada de dados--\n\n");	
				printf("\nAluno %d - Digite seu sexo [M ou F]: " , i+1);
			}	
		}
		while((v[i] != 'M') && (v[i] != 'F'));
	}	
}

void media_F(float b1[], float b2[], char s[])
{
	int i;
	float soma=0, media=0;
	
	printf("\n\n- Media das mulheres:");
	for(i=0; i<tam; i++)
	{
		if(s[i] == 'F')
		{
			soma += (b1[i] + b2[i]);
			media = soma/2;
			printf("\n\tMedia da aluna %d: %.2f" , i+1, media);
			soma=0;
			media=0;
		}
	}
}

void media_maior_M(float b1[], float b2[], char s[])
{
	int i;
	float soma=0, media=0, maiorMedia=0;
	
	printf("\n\n- Maior media dos homens: ");
	for(i=0; i<tam; i++)
	{
		if(s[i] == 'M')
		{
			soma += (b1[i] + b2[i]);
			media = soma/2;
			if(media > maiorMedia)
			{
				maiorMedia = media;
			}
			soma=0;
			media=0;
		}
	}
	
	printf("%.2f" , maiorMedia);
}

void alunos_passaram(float b1[], float b2[], char s[])
{
	int i, qntd_media_7=0, qntd_media_3=0;
	float soma=0, media=0;
	
	for(i=0; i<tam; i++)
	{
		soma += (b1[i] + b2[i]);
		media = soma/2;
		
		if(media >= 7.0)
		{
			qntd_media_7++;
		}
		else if(media >= 3)
		{
			qntd_media_3++;
		}
		
		soma=0;
		media=0;
	}
	
	printf("\n\n- Quantidade de alunos que ficaram com media final em 7 ou acima: %d" , qntd_media_7);
	printf("\n\n- Quantidade de alunos que ficaram com media final abaixo de 7 e maior ou igual a 3: %d" , qntd_media_3);
}

void media_final_turma(float b1[], float b2[], char s[])
{
	int i;
	float soma_turma=0, media_turma=0, soma=0, media=0;
	for(i=0; i<tam; i++)
	{
		soma += (b1[i] + b2[i]);
		media = soma/2;
		
		soma_turma += media;
		
		soma=0;
		media=0;
	}
	
	media_turma = soma_turma/tam;
	
	int j, qntd=0;
	
	for(j=0; j<tam; j++)
	{
		if( ((b1[j] + b2[j])/2) > media_turma )
		{
			qntd++;
		}
	}
	
	printf("\n\n- Quantidade de alunos que ficarem acima de media final da turma (%.2f): %d\n" , media_turma, qntd);
}


