#include <stdio.h>
#define CONT 5
/*QUEST�O 03: Implementar um programa
que calcule o valor de base e expoente, onde
base e expoente s�o n�meros inteiros
dados pelo usu�rio.
*/

void main()
{
	int i, base, expoente, valor = 1;
	
	printf("Entre com o valor da base:\n");
	scanf ("%d", &base);
	
	printf("Entre com o valor do expoente:\n");
	scanf ("%d", &expoente);
	
	for (i = 1; i <= expoente; i++)
	{
		valor = valor * base;
		printf ("%d", valor);
	}
	
	printf("O resultado e' = %d\n", valor);

}
