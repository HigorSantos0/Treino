include <stdio.h>

vazio principal ()
{
	/*: Fa�a um programa que leia um
n�mero inteiro positivo N e exiba todos os
m�ltiplos de Y inferiores a N, onde N e Y s�o
fornecido pelo usu�rio.
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
