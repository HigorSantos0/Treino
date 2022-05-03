#include <stdio.h>

vazio principal ()
{
	/*
	Desenvolver um programa que calcule a
	soma dos números de 1 a N, sendo N um
	número inteiro pelo usuário.
	*/
	
	int i, num, quant = 0;
	
	printf("Entre com um numero:\n");
	scanf ("%d", &num);
	
	para (i = 1; i <= num; i++)
	{
		quant = quant + i;
	}
	
	printf("A soma dos valores e': %d", quant);


}
