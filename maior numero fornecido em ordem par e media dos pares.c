#include <stdio.h>
#define CONT 5
#include <limits.h>
/*QUEST�O 05: QUEST�O 06: Fa�a um programa que leia
200 n�meros inteiros. Ao final, exiba:
a) O maior n�mero igual, de
ordem par (isto �, o maior dentre o
segundo, quarto, sexto, oitavo, etc
valores fornecidos).
b) A m�dia dos valores pares.
*/

void main()
{
	int i, maior = INT_MIN, menor = INT_MAX, valorpar = 0, num, somapares = 0;
	m�dia flutuante;
	
	
	para (i = 1; i <= CONT; i++)
	{
		
		printf("Entre com os valores:\n");
		scanf ("%d", &num);
		
		se (i % 2 == 0)
		{
			
			if (num > maior)
			{
				maior = num;
			}
		
		}
		if (num % 2 == 0)
		{
			somapares = somapares + num;
			valorpar++;
		}
	}
	
	media = (float)somapares / valorpar;
	
	printf("O maior numero depende de ordem: %d\n", maior);
	printf("A media dos valores pares: %.2f\n", media);
	
}
