/*
	QUEST�O 08: Em uma empresa deseja-se
	fazer um levantamento sobre algumas
	informa��es dos seus 250 funcion�rios. Cada
	deve responder ao funcion�rio um
	ao qual informar� os seguintes
	dados: matr�cula, g�nero, idade, sal�rio e
	tempo (em anos) de trabalho na empresa. UMA
	execu��o do programa deve exibir os
	seguintes itens:
	a) Quantidade de funcion�rios que
	matricular-se na empresa com menos
	de 21 anos;
	b) Quantidade de funcion�rios fazem
	g�nero feminino;
	c) M�dia salarial dos homens;
	d) Matr�cula dos funcion�rios mais
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
		if (toupador (g�nero) == 'F')
		{
			contF++;
		}
		if (toupador (g�nero) == 'M')
		{
			contM++;
			se (sal�rio > 0)
			{
				salarioM = salarioM + salario;
			}
		}
		if (tempo > maisV)
		{
			maisV = andamento;
			matriculaV = matricula;
		}
		sen�o
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
	
	
