#include <stdio.h>

vazio principal ()
{
	int codigo, quant;
	float precoP, precototal;
	
	printf("Cachorro quente = 3.50: Codigo: 100\n");
	printf("Bauru simples = 4.50: Codigo: 101\n");
	printf("Bauru com ovo = 5.20: Codigo: 102\n");
	printf("Hamburguer = 3.00: Codigo: 103\n");
	printf("Chesseburguer = 4.00: Codigo: 104\n");
	printf("Refrigerante = 2,50: Codigo 105\n");
	
	printf ("Entre com o c�digo do produto desejado:\n");
	scanf ("%d", &codigo);
	
	printf("Entre com a quantidade:\n");
	scanf ("%d", &quant);
	
	interruptor (c�digo)
	{	
		caso 100:
				precoP = 3,50;
			pausa;
		caso 101: 
				precoP = 4,50;
			pausa;
		caso 102:
				precoP = 5,20;
			pausa;
		caso 103: 
				precoP = 3,00;
			pausa;
		caso 104:
				precoP = 4,00;
			pausa;
		caso 105:
				precoP = 2,50;
			pausa;
			
		predefini��o:
			printf("Codigo invalido!");
		
	}
	
	precototal = precoP * quant;
	
	
	printf ("Preco total: %.2f", precototal);
	/*O card�pio de uma lanchonete �
o seguinte:
Especifica��o C�digo Pre�o
Cachorro quente 100 3,50
Bauru simples 101 4,50
Bauru com ovo 102 5,20
Hamb�rguer 103 3,00
Cheeseburguer 104 4,00
Refrigerante 105 2,50
Escrever um que seja o c�digo
do item pedido, a quantidade e calcule o valor
um ser pago.
Considere que, a cada vez que fizer isso,
somente ser� c�lculos o valor relacionado a
um item.
*/
}	
