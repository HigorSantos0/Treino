#include <stdio.h>
#define QUANT 2


vazio principal ()
{
	/*QUEST�O 08: Em uma empresa deseja-se
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
	int i, matr�cula, idade, tempotrabalho, quantMenores = 0, contF = 0, contM = 0;
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
		
		if (toupador (g�nero) == 'F')
		{
			contF++;
		}
		if (toupador (g�nero) == 'M')
		{
			contM++;
			
		}
				
			
		
						
	}
	mediaSalario = ((float)salario / contM);
	
	printf ("Quantidade de funcionamentos que ingressaram na empresa com menos de 21 anos: %d\n", quantMenores);
	printf ("Quantidade de funcionarios do genero feminino: %d\n", contF);
	printf ("A media salaria dos homens %.2f\n", mediaSalario);
	
	
	
}
