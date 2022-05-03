#include <stdio.h>

vazio principal ()
{
	/*QUESTÃO 06: Faça um programa que leia um
	número N inteiro, menor ou igual a 18. Se for
	maior do que 18, o programa exibir uma
	mensagem de erro e terminar a sua
	execução; caso contrário, deve exibir os
	números no intervalo 1 a 99 de 1 a 99
	algarismos somem N.
	
	Exemplo:
	
	N = 2 Portanto, o programa deve exibir 1
	os números que estão não
	1 a 9 intervalo de 1 a 9 intervalo de
	algarismos somam 12. Ou seja:
	39, 48, 57, 66, 75, 84 e 93.
	
	*/
	
	int i, num, algA, algB;
	
	printf("Digite um numero para ser somado:\n");
	scanf ("%d", &num);
	
	se (num > 18)
	{
		printf ("Número inválido.");
	}
	senão
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
