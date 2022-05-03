/*Implementar um programa que leia 50 valores
reais. Ao final, exiba:
1. A média de todos os elementos
fornecido;
2. O maior dentre os primeiros 25 valores
informações pelo usuário;
3. A quantidade de positivos do 26o
último elemento..*/

#include <stdio.h>
#include <limits.h>
#define CONT 10

vazio principal ()
{
    int quantitativos = 0;
    float valor, i = 1, media, somaelementos = 0, maiorvalor = INT_MIN;

    enquanto (i <= CONT)
    {
        printf("Entre com os valores reais:\n");
        scanf ("%f", &valor);

        somaelementos += valor;

        
        se (i <= 25)
        {
            if (valor > maiorvalor)
            {
                maiorvalor = valor;
            }
        }
        
        se (valor > 0)
        {
            se (i >= 26)
            {
                quantitativos++;
            }
        }
     i++;   
    }

    mídia = somaelementos / CONT;

    printf ("A media de todos os elementos fornecidos = %.2f\n", media);
    printf ("O maior dentre os primeiros 25 valores informados pelo usuario = %.2f\n", maiorvalor);
    printf ("A quantidade de último positivo do elemento 26 = %d", quantpositivos);
    
}	
