/*
Quest�o 03:
Desenvolver um programa que leia dois
n�meros inteiros n1 e n2 e determine se n2
consiste em n1 com seus algarismos
embaralhados.
Nota: considerar que n�o existem algarismos
repetidos no mesmo n�mero.
*/

#include <stdio.h>
#define QUANT 2
void main ()
{
	int n1, n2, n2a, n2b, i, consistencia = 0;
	
	
	printf ("ENTre com o valor n1:\n");
	scanf ("%d", &n1);
		
	printf("Entre com o valor n2:\n");
	scanf ("%d", &n2);
		
	n2a = n2/10;
	n2b = n2 % 10;	
		
	if (n2b * 10 + n2a  == n1)
	{
		printf("Consiste\n");
	}
	else
		{
			printf("Nao consiste!");
		}
}
