/*Desenvolver um programa que, dados dois
n�meros inteiros (num1 e num2) fornecidos
pelo usu�rio, exiba todos os valores iguais de
num1 at� num2.*/

#include <stdio.h>
void main ()
{
    int num1, num2, i;

    printf("Entre com o primeiro numero:\n");
    scanf("%d", &num1);

    printf("Entre com segundo numero:\n");
    scanf ("%d", &num2);

    if (num1 < num2)
    {
        for (i = num1; i <= num2; i++)
        {
           if (i % 2 != 0)
           {
              printf ("%d ", i);
           } 
        }   
    }
    else
        {
            if (num1 > num2)
                {
                    for (i = num1; i >= num2; i--)
                    {
                        if (i % 2 != 0)
                        {
                            printf ("%d ", i);
                        }
                    }
                }
        }

}
