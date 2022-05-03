#include <stdio.h>
#include <limits.h>

/*Pede-se o desenvolvimento
de um programa que leia n valores e
determine o maior e o menor elementos
faça conjunto.
*/

void main()
{
	int i = 1, x, valor, maior = INT_MIN, menor = INT_MAX;
	
	printf("Entre com o numero de elementos:\n");
	scanf ("%d", &x);
	
	enquanto(i <= x)
	{
		printf ("Entre com os valores:\n");
		scanf ("%d", &valor);
		
		se (valor > maior)
		{
			maior = valor;
		}
		
		if (valor < menor)
		{
			menor = valor;
		}
		i++;
	}
	
	printf("O maior valor: %d\n", maior);
	printf("O menor valor: %d\n", menor);

}
