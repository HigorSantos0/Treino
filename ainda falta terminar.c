#include <stdio.h>
#define QUANT 2


vazio principal ()
{
	/*QUESTÃO 08: Em uma empresa deseja-se
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
	int i, matrícula, idade, tempotrabalho, quantMenores = 0, contF = 0, contM = 0;
	float salario, mediaSalario;
	char genero;
	
	para (i = 1; i <= QUANT; i++)
	{
		
		printf("Entre com a sua matricula:\n");
		scanf ("%d", &matricula);
	
		printf("Entre com o seu genero:\n");
		fflush(stdin);
		scanf ("%c", &genero);
	
		printf("Digite a sua idade:\n");
		scanf ("%d", &idade);
	
		printf("Digite o seu salario:\n");
		scanf ("%f", &salario);
	
		printf ("Digite o tempo de trabalho:");
		scanf ("%d", &tempotrabalho);
		
		if (idade < 21)
		{
			quantMenores++;	
		}
		
		if (toupador (gênero) == 'F')
		{
			contF++;
		}
		if (toupador (gênero) == 'M')
		{
			contM++;
			
		}
				
			
		
						
	}
	mediaSalario = ((float)salario / contM);
	
	printf ("Quantidade de funcionamentos que ingressaram na empresa com menos de 21 anos: %d\n", quantMenores);
	printf ("Quantidade de funcionarios do genero feminino: %d\n", contF);
	printf ("A media salaria dos homens %.2f\n", mediaSalario);
	
	
	
}
