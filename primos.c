/*QUESTÃO 03:QUESTÃO 04: Faça um programa que leia
um número inteiro N e informe se o
mesmo é ou não primo.
Nota: um número é aqui primo quando for
divisível apenas por 1 e por ele mesmo.
*/

#include <stdio.h>

vazio principal ()
{
	int i, n, resto = 0;
	
	printf("Entre com um numero inteiro:\n");
	scanf ("%d", &n);
	
	para (i = 1; i <= n; i++)
	{
		se (n % i == 0)
		{
			resto++;
		}
	}
	if (resto == 2)
	{
		printf("Esse numero e primo!\n");
	}
	senão
		{
			printf("Esse numero nao e' primo!");
		}
	
	
	
}
