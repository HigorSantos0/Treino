#include <stdio.h>
#include <limits.h>
#define CONT 4
/*QUEST�O 04: A prefeitura de uma cidade
fez uma pesquisa com 300 de seus
habitantes, coletando dados sobre o
sal�rio e n�mero de filhos. A prefeitura
Saber deseja:
a) m�dia do sal�rio da popula��o;
b) m�dia do n�mero de filhos;
c) maior sal�rio;
d) percentual de pessoas com sal�rio at�
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
		
		if (sal�rio > maiorsal�rio)
		{
			maiorsal�rio = salario;
		}
		if (sal�rio <= 1000)
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
	printf ("O percentual de pessoas com sal�rio menor ou igual a R$ 1.000,00 = %.2f%%\n", perc);
	
}
