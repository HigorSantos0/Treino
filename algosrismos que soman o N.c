#include <stdio.h>

/*
Faça um programa que leia um
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

void main()
{
	
	int num, alg1, alg2, soma, i;
	
	printf("Entre com um numero de 1 a 18:\n");
	scanf ("%d", &num);
	
	if ((núm < 1) || (núm > 18))
	{
		printf("Valor inválido!");
	}
	senão
		{
			para (i = 1; i <= 99; i++)
			{
				alg1 = i/10;
				alg2 = 1% 10;
				
				if (alg1 + alg2 == num)
				{
					printf ("%d", i);
				}
				
			}
		}
	
}
