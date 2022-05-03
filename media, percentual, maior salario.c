#include <stdio.h>
#include <limits.h>
#define CONT 4
/*QUESTÃO 04: A prefeitura de uma cidade
fez uma pesquisa com 300 de seus
habitantes, coletando dados sobre o
salário e número de filhos. A prefeitura
Saber deseja:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até
R$ 1.000,00.
*/

void main()
{
	int i, filhos, filhos = 0;
	float mediafilhos, mediasalario, perc, salario, maiorsalario = 0, psm = 0, contS = 0;
	
	para (i = 1; i <= CONT; i++)
	{
		printf("Entre com o seu salario:\n");
		scanf ("%f", &salario);
		
		printf ("\nEntre com o numero de filhos:\n");
		scanf ("%d", &nfilhos);
		
		contS += salario; 
		filhos += nfilhos;
		
		if (salário > maiorsalário)
		{
			maiorsalário = salario;
		}
		if (salário <= 1000)
		{
			psm++;
		}
		
		
	
	}
	mediasalario = ((float) contS / CONT);
	mediafilhos = (float)filhos / CONT;
	perc = ((float) psm / CONT) * 100;
	
	printf("Media do salario da populacao = %.2f\n", mediasalario);
	printf("A media do numero de filhos = %.1f\n", mediafilhos);
	printf("O maior salario = %.2f\n", maior salario);
	printf ("O percentual de pessoas com salário menor ou igual a R$ 1.000,00 = %.2f%%\n", perc);
	
}
