/*Foi feita uma pesquisa entre os habitantes
de uma regi�o e os dados de
altura e g�nero das pessoas. Fa�a um
programa que leia as informa��es de 50
pessoas e informar:
- a maior e as menores alturas
todos;
- a m�dia de altura das mulheres;
- a m�dia de altura da popula��o;
- o percentual de homens na
popula��o.
*/


#include <stdio.h>
#define QUANT 4

vazio principal ()
{
	float altura, mediaAltura, media, mediaPopulacao, mediaP, percentual, menorAltura = 1000, maiorAltura = 0;
	int i = 1, contM = 0, popula��o = 0, contMas = 0;
	char genero;
	
	
	while(i <= QUANT)
	{
		
		printf("Entre com o seu genero:\n");
		fflush(stdin);
		scanf ("%c", &genero);
		
		printf("Entre com sua altura:\n");
		scanf ("%f", &altura);
		
		genero = toupper(genero);
		
		if (altura > maiorAltura)
		{
			maiorAltura = altura;
		}
		if (altura < menorAltura)
		{
			menorAltura = altura;
		}
					

			
			if (g�nero == 'F')
			{
				contM++;
				mediaAltura += altura;
				
			}
			sen�o
				{
					contMas++;
					
				}
				
				se (altura > 0)
					{
						popula��o++;
						mediaPopulacao += altura;
					}
				i++;
		
			
	}
	media = (float)mediaAltura / contM;
	mediaP = (float)mediaPopulacao / populacao;
	percentual = ((float)contMas / populacao) * 100;
	
	
	printf ("Maior altura: %.2f\n", maiorAltura);
	printf("Menor altura: %.2f\n", menorAltura);
	printf("Media da altura das mulheres: %.2f\n", media);
	printf("Media de altura da populacao: %.2f\n", mediaP);
	printf("Percentual de homens na populacao: %.2f %%\n", percentual);
	
	
	
}
