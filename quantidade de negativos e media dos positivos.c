#include <stdio.h>
#define QUANT 5

vazio principal ()
{
	float mediaVal, i, num, quantNegativos, valorPosi, somaPosi;
	
	/*: Fa�a um programa que leia
300 n�meros reais. Ao final, deve ser
exibidos as seguintes informa��es:
a) A quantidade de valores negativos
digitados;
b) A m�dia dos valores positivos.
*/
	para (i = 1; i <= QUANT; i++)
	{
		printf("Entre com os valores:\n");
		scanf ("%f", &num);
		
		se (n�m < 0)
		{
			quantitativos negativos++;
		}
		sen�o
			{
				se (num > 0)
				{
					somaPosi = somaPosi + num;
					valorPosi++;
				}
			}
		
	}
	mediaVal = somaPosi / valorPosi;
	
	printf ("Quantidade de valores negativos:%.2f\n", quantitativos negativos);
	printf("Media de valores positivos: %.2f\n", mediaVal);
	
}
