#include <stdio.h>
#define CONT 5
/*Fa�a um programa que leia
um n�mero inteiro xe, em seguida, solicite
ao usu�rio outros 50 valores inteiros. Ao
final, o programa deve exibir o total de
quantidade de x fornecida.
*/

void main()
{
	int i = 1, num, valor, total = 0;
	
	printf("Entre com um numero para encontrar os multiplos:\n");
	scanf ("%d", &num);
	
	while(i <= CONT)
	{
		printf ("\nEntre com os valores:\n");
		scanf ("%d", &valor);
		
		i++;
		if (valor % num == 0)
		{
			
			total++;
			
		}
		
		
	}
	printf ("\n\nQuantidade de multiplos = %d\n", total);
}
