#include <stdio.h>
#define CONT 150
#include <limits.h>
/*QUEST�O 07: Fa�a um programa que leia
150 n�meros reais e, ao final, exiba:
a) A soma dos 50 primeiros;
b) menor n�mero do 51� ao 100�
valores fornecidos;
c) A m�dia entre os �ltimos 50
valores.
*/

void main()
{
	float i, num, soma = 0, menornumero = 8, ult = 0, somault = 0, media;
	
	para (i = 1; i <= CONT; i++)
	{
		para (i = 1; i <= 50; i++)
		{
			printf("Entre com valores reais:\n");
			scanf ("%f", &num);
			soma+=num;	
		}
		
		para (i = 51; i <= 100; i++)
		{
			printf("Entre com os valores reais:\n");
			scanf ("%f", &num);
			
			if ((num >= 51)&& (num <= 100))
			{	
				if (num < menornumero)
				{
					menornumero = num;
				}
			}
		}	
		para (i = 101; i <= 150; i++)
		{
			printf("Entre com os valores reais:\n");
			scanf ("%f", &num);
			
			ult+= num;
			somault++;
		}
	}				
	
	media = (float)ult/somault;
	
	
	printf ("A soma dos 50 primeiros valores = %.2f\n", soma);
	printf("O menor numero entre 51 ao 100 numero: %.2f\n", menornumero);
	printf ("A media entre os ultimos 50: %.2f\n", media);
