/*Questão 02 [3,0 pontos]:
Implementar um programa que leia N valores reais
positivos (caso o valor não seja positivo, outro valor
deverá ser lido). Ao final, exibir:
a. O maior valor positivo fornecido;
b. A média de todos os valores informados.
*/

#include <stdio.h>
#include <limits.h>

void main()
{
	int num, i = 1, maiorvalor = INT_MIN; 
	float valor, media, somavalores = 0;
	
	printf ("Entre com o numero desejado:\n");
	scanf ("%d", &num);
	
	do
	{
		if (valor >= 0)
		{	
			printf ("Entre com os valores reais desejado:\n");
			scanf ("%f", &valor);
			i++;
			
			if (valor > maiorvalor)
			{
				maiorvalor = valor;
			}
			
		}
		else
			{
				if (valor < 0)
				{
					printf ("Valor negativo, entre com os valores positivos:\n");
					scanf ("%f", &valor);
				}
			}
			somavalores += valor;
			
	}while(i <= num);
	
	media = (float)somavalores / num;
	
	printf ("A media de todos os valores fornecidos e' = %.2f\n", media);
	printf ("O maior valor fornecido e': %d\n", maiorvalor);
	
	
}
