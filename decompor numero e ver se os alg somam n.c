#include <stdio.h>

vazio principal ()
{
	/*QUEST�O 06: Fa�a um programa que leia um
	n�mero N inteiro, menor ou igual a 18. Se for
	maior do que 18, o programa exibir uma
	mensagem de erro e terminar a sua
	execu��o; caso contr�rio, deve exibir os
	n�meros no intervalo 1 a 99 de 1 a 99
	algarismos somem N.
	
	Exemplo:
	
	N = 2 Portanto, o programa deve exibir 1
	os n�meros que est�o n�o
	1 a 9 intervalo de 1 a 9 intervalo de
	algarismos somam 12. Ou seja:
	39, 48, 57, 66, 75, 84 e 93.
	
	*/
	
	int i, num, algA, algB;
	
	printf("Digite um numero para ser somado:\n");
	scanf ("%d", &num);
	
	se (num > 18)
	{
		printf ("N�mero inv�lido.");
	}
	sen�o
		{
			para (i = 1; i <= 99; i++)
			{
				algA = i/10;
				algB = 1% 10;
				
				if (algA + algB == num)
				{
					printf ("%d", i);
				}
			}
		}

}
