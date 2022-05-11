#include <stdio.h>
#include <limits.h>

void main ()
{
/*
Implementar um programa que leia N valores reais
positivos (caso o valor não seja positivo, outro valor
deverá ser lido). Ao final, exibir:
a. O maior valor positivo fornecido;
b. A média de todos os valores informados.
*/
	float somapositivos, num, valor, maiorvalor = INT_MIN, mediavalores, media, quant  = 0;
	int i = 1;
	
	printf ("Diga quantos valores deseja:\n");
	scanf ("%f", &num);
	
	do
	{
		if (valor > 0)
		{
			printf ("Entre com os valores reais:\n");
			scanf ("%f", &valor);
			somapositivos += valor;
			i++;
		}
		else
			{
				printf ("O valor digita e' negativo! Entre com um valor positivo:\n");
				scanf ("%d", &valor);
			}
			
			quant++;
			
		if (valor > maiorvalor)
		{
			maiorvalor = valor;
		}
		
			
	}while (i < num);
	
	media = (float)somapositivos / quant;
	printf ("O maior valor positivos fornecido: %.2f\n", maiorvalor);
	printf ("A media de todos os valores informados: %.2f\n", media);

	
}
  

