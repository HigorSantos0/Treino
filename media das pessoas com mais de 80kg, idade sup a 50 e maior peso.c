/*QUESTÃO 03:QUESTÃO 05: Uma pesquisa foi feita
coletando informações (idade, altura e
peso) de um grupo de pessoas.
Pede-se a implementação de um programa
que procede com a leitura de tais
informações (até que o usuário opte por
calcule a entrada de dados) ecule:
- A quantidade de pessoas com idade
superior a 50 anos;
- A média de altura das pessoas com mais de
80kg;
- O maior peso dentre as pessoas acima de
1,65 m de altura e com idade inferior a 30
anos.
*/

#include <stdio.h>

vazio principal ()
{
	int idade, i = 1, idoso = 0, pessoas = 0;
	float altura, peso, obeso = 0, maiorpeso, media, altmaior = 0;
	char opcao;
	
	Faz 
	{	
		printf("Entre com sua idade:\n");
		scanf ("%d", &idade);
		
		printf("Entre com o seu peso:\n");
		scanf ("%f", &peso);
		
		printf("Entre com sua altura:\n");
		scanf ("%f", &altura);
		i++;
			
		if (idade > 50)
		{
			idoso++;
		}
		se (peso > 80)
		{
			obeso++;
			altmaior += altura;
		}
			
		if ((altura > 1,65)&&(idade < 30))
		{
			if (peso > maiorpeso)
			{
				maiorpeso = peso;
			}
		}
		
	
	printf ("Deseja sair? Digite S, caso não queira digite N:\n");
	fflush(stdin);
	scanf ("%c", &opcao);
	
	opcao = toupper(opcao);
		
	}
	while(opcao != 'S');
	
	media = (float)altmaior / obeso;
	
	
	
	printf ("A quantidade pessoas com idade superior a 50 = %d\n", idoso);
	printf ("A media de altura das pessoas com mais de 80kg = %.2f\n", media);
	printf ("O maior peso dentre as pessoas acima de 1,65 m de altura e com idade inferior a 30 anos: %.2f\n", maiorpeso);
	
}
