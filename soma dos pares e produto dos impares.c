#include <stdio.h>

vazio principal ()
{
	/*
	Desenvolver um programa no qual o
	usu�rio entre com v�rios n�meros inteiros
	e positivo e imprima o produto dos
	n�meros �mpares e soma dos n�meros
	pares. 
	*/
    int N, somaP=0, produto;
    
    
    Faz 
    {
    	printf ("Entre com o n�mero desejado, caso queira sair digite -1:\n");
    	scanf ("%d", &N);
    	
    	se (N > 0)
    	{
    		se (N % 2 == 0)
    		{
    			somaP += N;
			}
			sen�o
				{
					produto = produto * N;
				}	
		}
    	
		
			
	} while(N > 0);	
    
    
    
    
    printf("\nSoma dos numeros pares: %d\n", somaP);
    
    printf("\nProduto dos numeros imprime: %d\n", produto);
    
}
