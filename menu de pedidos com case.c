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
	
	printf ("Entre com o código do produto desejado:\n");
	scanf ("%d", &codigo);
	
	printf("Entre com a quantidade:\n");
	scanf ("%d", &quant);
	
	interruptor (código)
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
			
		predefinição:
			printf("Codigo invalido!");
		
	}
	
	precototal = precoP * quant;
	
	
	printf ("Preco total: %.2f", precototal);
	/*O cardápio de uma lanchonete é
o seguinte:
Especificação Código Preço
Cachorro quente 100 3,50
Bauru simples 101 4,50
Bauru com ovo 102 5,20
Hambúrguer 103 3,00
Cheeseburguer 104 4,00
Refrigerante 105 2,50
Escrever um que seja o código
do item pedido, a quantidade e calcule o valor
um ser pago.
Considere que, a cada vez que fizer isso,
somente será cálculos o valor relacionado a
um item.
*/
}	
