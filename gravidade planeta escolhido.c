#include <stdio.h>

vazio principal ()
{
	float pesoTerra, pesoPlaneta, gravidadePlaneta;
	int numPlaneta;
		
			
	printf("Digite o seu peso na terra:\n");
	scanf ("%f", &pesoTerra);
	
	
	printf ("1 Merc�rio:\n");
	printf("2 V�nus:\n");
	printf("3 Marte:\n");
	printf("4 J�piter:\n");
	printf("5 Saturno:\n");
	printf("6 Urano:\n");
	
	printf ("Entre com o numero do planeta desejado: ");
	scanf ("%d", &numPlaneta);
	
	if (numPlaneta == 1)
	{
		gravidadePlaneta = 0,37;
	}
	sen�o
		{
			if (numPlaneta == 2)
			{
				gravidadePlaneta = 0,88;
			}
		}
	
	pesoPlaneta = (pesoTerra/10) * gravidadePlaneta;
	
	printf ("O peso devido a gravidade do planeta escolhido e': %.1f", pesoPlaneta);
	
	
	
}

/*: Escrever um que
o peso de uma pessoa na Terra e o
n�mero de um planeta. Ao final, com ajuda da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.
N�mero Planeta Gravidade Relativa g

1 Merc�rio 0,37
2 V�nus 0,88
3 Marte 0,38
4 J�piter 2,64
5 Saturno 1,15
6 Urano 1,17

Para calcular o peso no planeta escolhido,
utilize a seguinte f�rmula:

pesoPlaneta = (pesoTerra/10) * gravidadePlaneta

*/
