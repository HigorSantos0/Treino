#include <stdio.h>

/*Fa�a um programa que, dadas duas datas (cada
qual com dia, m�s e ano) fornecido pelo
usu�rio, determine qual delas � a mais recente.
*/

vazio principal ()
{
   int dia, mes, ano;
    int dia2, mes2, ano2;
    int dataRecente;
    
    
    printf("Entre com o dia:\n");
    scanf ("%d", &dia);
    
    printf("Entre com o dia:\n");
    scanf ("%d", &mes);
    
    printf("Entre com o dia:\n");
    scanf ("%d", &ano);
    
    printf("Entre com o dia:\n");
    scanf ("%d", &dia2);
    
    printf("Entre com o dia:\n");
    scanf ("%d", &mes2);
    
    printf("Entre com o dia:\n");
    scanf ("%d", &ano2);
    
    se (ano > ano2)
    {
        printf("Dados mais recentes: %d/%d/%d\n", dia, mes, ano);
    }
    sen�o
        {
            printf("Dados mais recentes: %d/%d/%d\n", dia2, mes2, ano2);
        }
        se (ano == ano2)
        {
            if (mes > mes2)
            {
                printf("Dados mais recentes: %d/%d/%d\n", dia, mes, ano);
            }
            sen�o
                {
                    printf("Dados mais recentes: %d/%d/%d\n", dia2, mes2, ano2);
                }
                if (mes == mes2)
                {
                    if ((dia > dia2)
                    {
                        printf("Dados mais recentes: %d/%d/%d\n", dia, mes, ano);
                    }
                    sen�o
                        {
                           printf("Dados mais recentes: %d/%d/%d\n", dia2, mes2, ano2);
                        }
                        
                }
        }
    
        
    
        
	
}
