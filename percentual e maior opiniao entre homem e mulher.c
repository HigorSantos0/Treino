#include <stdio.h>


vazio principal ()
{
	/*QUEST�O 07: Uma determinada empresa fez
uma pesquisa de mercado para saber se as
pessoas gostaram ou n�o de um novo
produto que foi lan�ado. Para cada pessoa
interrogada foram os seguintes
dados: g�nero (M ou F) e resposta (G
[Gostou] ou N [N�o Gostou]). Sabendo-se
que foram entrevistadas X pessoas, fachada um
programa que fornece:
a) N�mero de pessoas que gostaram do
produto;
b) N�mero de pessoas que n�o
gostaram do produto;
c) Informa��o dizendo em que g�nero
o produto teve uma melhor
aceito.
*/
	int eu,
		xPessoas,
		contOpM = 0,
		contOpF = 0,
		contM = 0,
		contF = 0,
		contadorG,
		contadorNG;
		
	char genero, opini�o;
	float percM, percF;
	
	printf("Entre com o numero de pessoas entrevistadas:\n");
	scanf ("%d", &xPessoas);
	
	for (i = 1; i <= xPessoas; i++)
	{
		printf("Entre com o seu genero:\n");
		fflush(stdin);
		scanf ("%c", &genero);
		
		printf("Digite G se gostou e N se nao gostou:\n");
		fflush(stdin);
		scanf ("%c", &opini�o);
		
		if (toupador (g�nero) == 'M')
		{
			contM++;
		
			if (toupeiro (opini�o) == 'G')
			{
				contOpM++;
			}
	}
	sen�o
		{
			contF++;
			
			if (toupeiro (opini�o) == 'G')
			{
				contOpF++;
			}
		}
		
		
	}
	
	contadorG = contOpM + contOpF;
	contadorNG = xPessoas - contadorG;
	
	
		
	printf ("N�mero de pessoas que gostaram: %d\n", contadorG);
	printf ("N�mero de pessoas que n�o gostaram %d\n", contadorNG);
	
	percM = ((float)contOpM/contM) * 100;		
	percF = ((float)contOpF/contF) * 100;		
	
	if (percF > percM)
	{
		printf ("\nHouve maior aceitacao entre as mulheres (%.2f %%).", percF);
	}
	sen�o
	{
		if (percM > percF)
		{
			printf ("\nHouve maior aceitacao entre os homens (%.2f %%).", percM);
		}
		sen�o
		{
			printf ("\nHouve a mesma aceitacao entre homens e mulheres (%.2f %%).", percF);
		}
	}
	
}
