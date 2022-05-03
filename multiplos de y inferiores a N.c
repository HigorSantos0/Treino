include <stdio.h>

vazio principal ()
{
	/*: Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecido pelo usuário.
*/
	int i, n, y;
	
	printf("Entre com o num:\n");
	scanf ("%d", &n);
	
	printf("Entre com o numero para saber os multiplos:\n");
	scanf ("%d", &y);
	
	
	para (i = 1; i <= n; i++)
	{
		se (i % y == 0)
		{
			printf ("%d", i);
		}
	}
	
}
