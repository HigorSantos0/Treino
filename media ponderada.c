#include <stdio.h>
#define CONT 2
/*QUEST�O 05: Elabore um programa que
calcule a m�dia ponderada de n elementos.
Observa��o: na m�dia ponderada, cada
elemento possui um peso que representa a
sua avalia��o no da m�dia final.
*/

void main()
{
	int, n; 
	float totalmedia, n1, n2, valordiv = 0, valormult = 0, valorsoma = 0, mult = 0;
	
	printf("Entre com valores:\n");
	scanf ("%d", &n);
	
	para (i = 1; i <= n; i++)
	{
		
		valormult = 0;
		
		printf("Entre com o primeiro valor:\n");
		scanf ("%f", &n1);
		
		printf("Entre com o segundo valor:\n");
		scanf ("%f", &n2);
			
		valormult = n1 * n2;
		mult = mt + valormult;
		valorsoma += n2;
	}
		
		
	
	
	totalmedia = (float)mult / valorsoma;
	printf("A media ponderada: %.2f\n", totalmedia);
	
}
