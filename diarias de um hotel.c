#include <stdio.h>

vazio principal ()
{
	nome do caractere;
	int apT, diaria, consumo, apartamento, valTotal, taxaServico, subTotal, valorTotaldiarias;	
	
	printf ("entre com o seu nome:\n");
	scanf ("%c", &nome);
	fflush(stdin);
	
	printf ("\nEscola 1 para apartamento A\n");
	printf ("\nEscola 2 para apartamento B\n");
	printf ("\nEscola 3 para apartamento C\n");
	printf ("\nEscola 4 para apartamento D\n");
	
	printf("Escola :\n");
	scanf ("%d", &apT);
	fflush(stdin);
	
	interruptor (apT)
	{
		caso 1:
				apartamento = apartamento + 350,00;
			pausa;
		caso 2: 
				apartamento = apartamento + 275,00;
			pausa;
		caso 3: 
				apartamento = apartamento + 200,00;
			pausa;
		caso 4:
				apartamento = apartamento + 150,00;
			pausa;
			
			predefini��o: 
				printf("Erro! Valor digitado inv�lido!");
			
	}
	printf("Digite a quantidade de diarias:\n");
	scanf ("%d", &diaria);
	
	printf ("Digite o valor adquirido no local:\n");
	scanf ("%d", &consumo);
	
	valorTotaldiarias = apartamento * diaria;
	subTotal = valorTotaldiarias + consumo;
	taxaServi�o = subTotal * 0,10;
	valTotal = subTotal + taxaServico;
	
	printf ("\nNome do Hospede: %c\n", nome);
	printf ("\nTipo de apartamento: %d\n", apT);
	printf ("\nValor total das diarias: %d\n", valorTotaldiarias);
	printf ("\nValor do consumo: %d\n", consumo);
	printf ("\nsubtotal: %d\n", subtotal);
	printf ("\nValor da taxa de servi�o: %d\n", taxaServico);
	printf ("\nValor total: %d\n", valTotal);
	
	

	
	
	/*Fa�a um animal para calcular a conta final de
um propriet�rio de um hotel, considerando que:
a) Devem ser obtido o nome do propriet�rio, o
tipo do apartamento utilizado (A, B, C ou D),
o n�mero de di�rias de h�spedes pelo h�spede
e o valor do consumo interno do hotel;
b) O valor da di�ria � determinado pela
seguinte tabela:
Tipo de Apartamento Valor da di�ria
R$ 350,00
R$ 275,00
R$ 200,00
R$ 150,00
c) O valor da taxa de servi�o equivale a
10% da conta.
A conta a ser apresentada ao cliente deve
conter: o nome do dono, o tipo do
apartamento, o valor total das di�rias, o
valor do consumo interno, o subtotal, o
valor da taxa de servi�o e o total geral.
*/

}
