#include <stdio.h>
#define QUANT 5

vazio principal ()
{
	float mediaVal, i, num, quantNegativos, valorPosi, somaPosi;
	
	/*: Faça um programa que leia
300 números reais. Ao final, deve ser
exibidos as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.
*/
	para (i = 1; i <= QUANT; i++)
	{
		printf("Entre com os valores:\n");
		scanf ("%f", &num);
		
		se (núm < 0)
		{
			quantitativos negativos++;
		}
		senão
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
