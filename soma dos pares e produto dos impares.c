#include <stdio.h>

vazio principal ()
{
	/*
	Desenvolver um programa no qual o
	usuário entre com vários números inteiros
	e positivo e imprima o produto dos
	números ímpares e soma dos números
	pares. 
	*/
    int N, somaP=0, produto;
    
    
    Faz 
    {
    	printf ("Entre com o número desejado, caso queira sair digite -1:\n");
    	scanf ("%d", &N);
    	
    	se (N > 0)
    	{
    		se (N % 2 == 0)
    		{
    			somaP += N;
			}
			senão
				{
					produto = produto * N;
				}	
		}
    	
		
			
	} while(N > 0);	
    
    
    
    
    printf("\nSoma dos numeros pares: %d\n", somaP);
    
    printf("\nProduto dos numeros imprime: %d\n", produto);
    
}
