#include <stdio.h>

vazio principal ()
{
	/*
	Fazer um programa que exiba todos os
	divisores de um n�mero pelo mesmo
	usu�rio. 
	*/
	int, num;
	
	printf("Entre com o numero que deseja saber o divisores: ");
	scanf ("%d", &num);
	
	para (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf ("%d", i);
		}
	}
	
}
