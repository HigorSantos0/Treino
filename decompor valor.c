#include <stdio.h>
#include <limits.h>
void main()
{
    int num1, num2, alg1, alg2, alg3, resto;

    printf("Entre com o numero\n");
    scanf ("%d", &num1);

    alg1 = num1/100;
    resto = num1 % 100;
    alg2 = resto/10;
    alg3 = resto % 10;

    num2 = alg3 * 100 + alg2 * 10 + alg1;

    printf ("N�mero: %d\n", num2);


    
    
}
