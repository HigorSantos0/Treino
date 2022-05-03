#include <stdio.h>
#define CONT 100
/*QUESTÃO 07: QUESTÃO 08: Faça um programa que leia
um número real xe um número inteiro y.
Em seguida, o programa deve ler 100
números reais e calcular quantos destes
não estão intervalados por [xy,x+y].
*/

void main()
{
	int i, y, soma = 0, valor;
	flutuar x;
	
	
	printf("Entre com um numero real:\n");
	scanf ("%f", &x);
		
	printf("Entre com um numero inteiro:\n");
	scanf ("%d", &y);
	
	para (i = 1; i <= CONT; i++)
	{
		printf("Entre com um valor:\n");
		scanf ("%d", &valor);
		
		if ((xy <= valor) && (valor <= x+y ))
		{
			soma++;
		}
	}
	printf("%d", soma);
	
}
