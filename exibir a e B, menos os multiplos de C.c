#include <stdio.h>
#include <limits.h>

/*:Questão 01:
Dados três números inteiros a, bec,
implementar um programa que exiba os
números do intervalo definido por aeb
(sempre em b), ae terminando em
com exceção de que são vários de
c.
Exemplos:
a = 10, b = 20, c = 3
Saída: 10, 11, 13, 14, 16, 17, 19, 20
a = 25, b = 18, c = 5
Saída: 24, 23, 22, 21, 19, 18
Nota: devem ser executados
programa, uma para cada estrutura de
repetição.
*/

void main()
{
	int a, b, c, i;
	
	printf("Entre com o numero do intervalo de A:\n");
	scanf ("%d", &a);
	
	printf("Entre com o numero do intervalo de B:\n");
	scanf ("%d", &b);
	
	printf("Entre com o numero do intervalo de C:\n");
	scanf ("%d", &c);

	printf("\n");
	
	se (a < b)
	{
		para (i = a; i <= b; i++)
		{
			
			se (i % c != 0)
			{
				printf ("%d", i);	
			}
			
		}
	}
	senão
		{
			se (a > b)
			{
			
				para (i = a; i >= b; i--)
				{
					se (i % c != 0)
					{
						printf ("%d", i);
					}
					
				}
			}
		}
}
