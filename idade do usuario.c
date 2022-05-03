#include <stdio.h>

vazio principal ()
{
	int dia, mes, ano;
	int diaAtual, anoAtual, mesAtual;
	int idade;
	
	printf ("Entre com o seu dia de nascimento:\n");
	scanf ("%d", &dia);
	
	printf ("Entre com o seu mes de nascimento:\n");
	scanf ("%d", &mes);
	
	printf ("Entre com o seu ano de nascimento:\n");
	scanf ("%d", &ano);
	
	idade = (2022 - ano);
	
	se (mes < 3)
	{
		printf ("Idade do Usuario e': %d", idade);
	}
	se (mes > 3)
	{
		printf ("Idade do Usuario e': %d", idade - 1);
	}
	senão
		{
			if (mes == 3)
			{
				se (dia < 16)
				{
					printf ("Idade do Usuario e': %d", idade);
				}
				senão
					{
						printf ("Idade do Usuario e': %d", idade - 1);
					}
			}
		}
			
			
}
