#include <stdio.h>

/*QUEST�O 03: Jo�ozinho investiu Q reais em
uma aplica��o com rendimento fixo de R% ao
m�s. Pede-se a implementa��o de um
programa que calcule o valor (e exiba-o)
dispon�vel na conta de Jo�ozinho ap�s A anos
de investimento.
*/

void main()
{
	int i, tempo, meses;
	float q, fixo, total, rendimento;

	printf("Entre com o valor investido:\n");
	scanf ("%f", &q);

	printf ("Digite o tempo de investimento:\n");
	scanf ("%d", &tempo);
	
	printf ("Entre com o rendimento:\n");
	scanf ("%f", &fixo);
	
	fixo = fixo / 100;
	total = q;
	meses = tempo * 12;
	
	para (i = 1; i <= meses; i++)
	{
		total = total + (total * fixo); 
	}
	printf ("Seu valor de investimento depois de %d anos ser� de %.2f\n", tempo, total);
	
}
