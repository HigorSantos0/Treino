#include <stdio.h>

vazio principal ()
{
	/*
	Dado um número inteiro N, fazer um
	programa que exiba os números pares
	iguais ou inferiores a N. 
	*/
	
	int, num;
	
	printf("Entre com um numero:\n");
	scanf ("%d", &num);
	
	para (i = 1; i <= num; i++)
	{
		se (i % 2 == 0)
		{
			printf ("%d", i);
		}
	}
}
