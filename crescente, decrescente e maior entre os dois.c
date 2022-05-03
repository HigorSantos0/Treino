#include <stdio.h>


void main()
{
	//declaração de variáveis
	int i, a, b, c, maior, menor, meio;
	
	//leitura dos dados
	printf("Entre com o primeiro valor: ");
	scanf ("%d", &a);
	
	printf("Entre com o segundo valor: ");
	scanf ("%d", &b);
	
	printf ("Entre com o terceiro valor: ");
	scanf ("%d", &c);
	
	printf ("\nEntre com o tipo de ordenação que deseja: 1 = crescente, = decrescente e 3 = maior no meio dos demais:\n");
	scanf ("%d", &i);
	
	se ((a > b) && (a > c))
	{
		maior = a;
		
		se (b > c)
		{
			meio = b;
			menor = c;
		}
		senão
			{
				meio = c;
				menor = b;
			}
	}
	senão
		{
			se (b > c)
			{
				maior = b;
				
				se (a > c)
				{
					meio = a;
					menor = b;
				}
				senão
					{
						meio = b;
						menor = a;
					}
			}
			senão
				{
					maior = c;
					
					se (a > b)
					{
						meio = a;
						menor = b;
					}
					senão
						{
							meio = b;
							menor = a;
						}
				}
			
		}
	
			
		
	se (i == 1)
	{
		printf ("Resultado em ordem crescente: %d, %d, %d", menor, meio, maior);
	}
	senão
		{
			se (i == 2)
			{
				printf ("Resultado de ordem decrescente: %d, %d, %d", maior, meio, menor);
			}
			senão
				{
					printf ("Resultado com o maior no meio: %d, %d, %d", menor, maior, meio);
				}
		}
		
	
}
