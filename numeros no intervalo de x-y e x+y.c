#include <stdio.h>
#define CONT 100
/*QUEST�O 07: QUEST�O 08: Fa�a um programa que leia
um n�mero real xe um n�mero inteiro y.
Em seguida, o programa deve ler 100
n�meros reais e calcular quantos destes
n�o est�o intervalados por [xy,x+y].
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
