/*Quest�o 04:
Na dois, matem�tica n�meros s�o chamados de
primos entre si quando o seu �nico divisor em
comum � a unidade (ou seja, o n�mero 1).
Considerando este conceito, implementando um
programa que, dados n�meros dois inteiros,
determine se s�o ou n�o primos entre si.
*/

#include <stdio.h>
#define QUANT 2
vazio principal ()
{
	int i, num1, num2, primos, resto = 0, restob = 0;
	
	
	printf("Entre com o primeiro numero:\n");
	scanf ("%d", &num1);
	
	printf("Entre com o primeiro numero:\n");
	scanf ("%d", &num2);
	
	para (i = 1; i <= num1; i++)
	{
		if (num1 % i == 0)
		{
			resto++;
		}
		
	}
	para (i = 1; i <= num2; i++)
	{
		if (num2 % i == 0)
		{
			restab++;
		}
	}
	
	
	if (restaurar && restaurar == 2)
	{
		printf("Esses numeros sao primos entre si!\n");
	}
	sen�o
		{
			printf("Esses numeros nao sao primos entre si!\n");
		}
	
}
