#include <stdio.h>

/*
	QUEST�O 04:
Implementar um programa que leia um valor
inteiro n1. Se este n�o estiver no intervalo de
100 a 99, uma mensagem deve ser exibida9 ao
usu�rio informando que o n�mero � inv�lido e,
em seguida, a execu��o do programa terminar�.
Caso o valor n�o � intervalo definido, o

programa deve criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de

n1, por�m em ordem crescente.
Exemplos:
n1 514
n2 145
n1 929
n2 299
n1 124
n2 124
Nota:
Como definido no enunciado, n1 consiste em um
n�mero inteiro positivo, com 3 algarismos. n2
tamb�m ser� um �nico n�mero!
*/


vazio principal ()
{
	int alg1, alg2, alg3, n1, menor, maior, meio, num2;
	
	printf ("entre com um numero com 3 algoritmos:\n");
	scanf ("%d", &n1);

	if(n1<100 || n1>900)
	{
		printf("Numero inv�lido.");
		
	}
	sen�o
		{
		alg1 = n1/100;
		alg2 = n1%100;
		alg2 = alg2/10;
		alg3 = n1%10;


		if(alg1>alg2 &&alg1>alg3)
		{
			maior=alg1;

			if(alg2>alg3)
			{
				meio = alg2;
 				menor = alg3;
			}
			sen�o
				{
					meio = alg3;
					menor = alg2;
				}

		}
		sen�o
			{
				if(alg2>alg1 &&alg2>alg3)
				{
					maior = alg2;

					if(alg1>alg3)
					{
						meio=alg1;
						menor=alg3;
					}
					sen�o
						{
							meio= alg3;
							menor=alg1;
						}
				}


				sen�o
					{
						if(alg3>alg1 &&alg3>alg2)
						{
							maior=alg3;

							if(alg2>alg1)
							{
								meio=alg2;
								menor=alg1;
							}
							sen�o
								{
									meio=alg1;
									menor=alg2;
								}
						}
					}
				}

 	num2 = (menor*100)+ (meio*10) + (maior);
     
    printf("%d, Novo valor = %d", n1, num2);
	}

    

}
