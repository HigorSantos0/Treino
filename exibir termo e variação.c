#include <stdio.h>
/*
Fa�a um programa que exiba
todos os elementos da seguinte s�rie, assim
como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1
*/

void main ()
{
	int i, j, soma = 0;
	
	for (i = 1, j = 50; (i <= 50 && j >= 1); i++, j-- )
	{
		printf ("%d %d ", i, j);
		
		soma = soma + i + j;
	}
	
	
	printf ("\n\nSoma dos numeros: %d\n", soma);
	
}
