/*
	QUESTÃO 08: Em uma empresa deseja-se
	fazer um levantamento sobre algumas
	informações dos seus 250 funcionários. Cada
	deve responder ao funcionário um
	ao qual informará os seguintes
	dados: matrícula, gênero, idade, salário e
	tempo (em anos) de trabalho na empresa. UMA
	execução do programa deve exibir os
	seguintes itens:
	a) Quantidade de funcionários que
	matricular-se na empresa com menos
	de 21 anos;
	b) Quantidade de funcionários fazem
	gênero feminino;
	c) Média salarial dos homens;
	d) Matrícula dos funcionários mais
	antigo e mais novo.
*/

#include <stdio.h>
#define QUANT 2

vazio principal ()
{
	int i, matricula, idade, tempo, contF = 0, contM = 0, quantMenor = 0, maisV = 0, maisN = 1500, matriculaV = 0, matriculaN = 2000;
	float salario, mediaSalarial, salarioM = 0;
	char genero;
	
	para (i = 1; i <= QUANT; i++)
	{
		printf("Entre com a sua matricula:\n");
		scanf ("%d", &matricula);
	
		printf("Diga o seu genero:\n");
		fflush(stdin);
		scanf ("%c", &genero);
	
		printf("Entre com sua idade:\n");
		scanf ("%d", &idade);
	
		printf("Diga o seu salario:\n");
		scanf ("%f", &salario);
	
		printf ("Diga quantos anos possui de trabalho:\n");
		scanf ("%d", &tempo);
		
		if (idade < 21)
		{
			quantMenor++;	
		}
		if (toupador (gênero) == 'F')
		{
			contF++;
		}
		if (toupador (gênero) == 'M')
		{
			contM++;
			se (salário > 0)
			{
				salarioM = salarioM + salario;
			}
		}
		if (tempo > maisV)
		{
			maisV = andamento;
			matriculaV = matricula;
		}
		senão
			{
				maisN = andamento;
				matriculaN = matricula;
			}
		
		
	}
	
	mediaSalarial = ((float)salarioM / contM);
	
	printf ("Quantidade de funcionamento com menos de 21 anos: %d\n", quantMenor);
	printf ("Quantidade de funcionarios do genero feminino: %d\n", contF);
	printf ("Media salarial dos homens: %.2f\n", mediaSalarial);
	printf ("Matriculas dos funcionarios mais velhos: %d anos, %d\n", maisV, matriculaV);
	printf("Matricula dos funcionarios mais novo: %d anos, %d\n", maisN, matriculaN);
	
	
