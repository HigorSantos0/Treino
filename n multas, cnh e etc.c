#include <stdio.h>

vazio principal ()
{
	/*
	QUEST�O 08:
Fazer um programa que auxiliar o �rg�o
regulador no c�lculo do total de recursos
arrecadados com uma aplica��o de multas de
tr�nsito.
O programa deve ler as seguintes
informa��es cada um para o motorista:
- O n�mero da carteira de motorista;
- N�mero de multas;
- Valor de cada uma das multas.
Deve ser exibido o valor da d�vida de cada
motorista e ao final da leitura o total de
recursos arrecadados (somat�rio de todas
como multas). O programa tamb�m deve
apresentar o n�mero da carteira do
motorista que obteve o maior n�mero de
multas. */

	int i, cnh, nmultas, motorista, maiormulta;
	float divida, valor, total;
	
	
	Faz
	{
		printf("Entre com sua carteira:\n");
		scanf ("%d", &cnh);
		
		se (cnh > 0)
		{
			printf("Entre com o numero de multas:\n");
			scanf ("%d", &nmultas);
			
			divida = 0;
			para (i = 1; i <= nmultas; i++)
			{
				printf ("Digite o valor da sua multa:\n");
				scanf ("%f", &valor);
				
				divida += valor;
			}
			
			printf("O valor da sua divida e' = %.2f\n", divida);
			
			total += divida;
			
			if (nmultas > maiormulta)
			{
				maiormulta = nmultas;
				motorista = cnh;
			}
			
				
		}	
		
		
	} while(cnh > 0);
   
   printf("O total arrecadado: %.2f\n", total);
   printf ("O motorista que obteve o maior numero de multas: cn maiorh = %d\ne maior multa :%d\n", motorista, maiormulta);
   
   
}
