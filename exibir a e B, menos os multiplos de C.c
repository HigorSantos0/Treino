#include <stdio.h>
#include <limits.h>

/*:Quest�o 01:
Dados tr�s n�meros inteiros a, bec,
implementar um programa que exiba os
n�meros do intervalo definido por aeb
(sempre em b), ae terminando em
com exce��o de que s�o v�rios de
c.
Exemplos:
a = 10, b = 20, c = 3
Sa�da: 10, 11, 13, 14, 16, 17, 19, 20
a = 25, b = 18, c = 5
Sa�da: 24, 23, 22, 21, 19, 18
Nota: devem ser executados
programa, uma para cada estrutura de
repeti��o.
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
	sen�o
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
