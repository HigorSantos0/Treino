/*QUEST�O 03:QUEST�O 04: Fa�a um programa que leia
um n�mero inteiro N e informe se o
mesmo � ou n�o primo.
Nota: um n�mero � aqui primo quando for
divis�vel apenas por 1 e por ele mesmo.
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
	sen�o
		{
			printf("Esse numero nao e' primo!");
		}
	
	
	
}
