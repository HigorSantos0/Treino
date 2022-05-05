#include <stdio.h>

/*Questão 01 [3,0 pontos]:
Implementar três programas (um para cada estrutura
de repetição estudada) que leia um valor inteiro N e
exiba os valores de 1 a N, atendendo às seguintes
regras:
1. Na primeira metade dos valores, apresentar apenas
aqueles que não sejam divisores de N;
2. Na segunda metade, mostrar somente os números
pares.*/
void main()
{
	int i = 1, num;

	printf ("ENtre com o numero desejado:\n");
	scanf ("%d", &num);

	do
	{
		if (num % i != 0)
		{
			if (i <= num/2)
			{
				printf ("%d ", i);
			}
		}
		if (i % 2 == 0)
		{
			if (i >= num/2)
			{
				printf ("%d ", i);
			}
		}
		i++;
	}while(i <= num);
}
		
	
