#include <stdio.h>

void main ()
{
	int numOpcao, parc5x, aVista,parcJuros;
	int precoProduto;
	
	printf ("Digite o preco do produto:\n");
	scanf ("%d", &precoProduto);
	
	printf ("Escolha uma das 3 opcoes de compra:\n");
	
	printf ("1 O valor com 10 de desconto para pagamento a vista\n");
	printf ("2 O valor da prestacao para parcelamento sem juros, em 5x\n");
	printf ("3 O valor da prestacao para parcelamento com juros, em 10x, com 20 de acrescimo no valor do produto\n");
	
	printf ("Escolha o numero da opcao requerida:\n");
	scanf ("%d", &numOpcao);
	
	if (numOpcao == 1)
	{
		aVista = precoProduto - precoProduto * 0.1;
	}
	else
		{
			if (numOpcao == 2)
			{
				parc5x = precoProduto / 5;
			}
			else
				{
					if (numOpcao == 3)
					{
						parcJuros = precoProduto * 1.2/10;
					}
				}
		}
		
		
		printf ("1 O valor com 10 de desconto para pagamento a vista: %d\n", aVista);
		printf ("2 O valor da prestacao para parcelamento sem juros, em 5x:%d\n", parc5x);
		printf ("3 O valor da prestacao para parcelamento com juros, em 10x, com 20 de acrescimo no valor do produto:%d\n", parcJuros);
		
	
	
	
}

/*As vendas parceladas se
tornaram uma �tima op��o para os lojistas que,
a cada dia, criam novas promo��es para tentar
conquistar novos clientes. Fa�a um algoritmo
que permita ao lojista informar o pre�o do
produto e receber as seguintes informa��es:
a) O valor com 10% de desconto para
pagamento � vista;
b) O valor da presta��o para parcelamento
sem juros, em 5x;
c) O valor da presta��o para parcelamento
com juros, em 10x, com 20 de acr�scimo
no valor do produto.
*/
