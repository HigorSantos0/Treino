#include <stdio.h>



/*Implementar um programa no qual o
usu�rio informa um n�mero e verifica-se
ele � um n�mero triangular.
Obs.: Um n�mero � triangular quando ele
for resultado do produto de tr�s n�meros
seguidos.
Exemplo: 24 = 2 x 3 x 4.
*/
#include <stdio.h>

void main()
{
    int num, i, j, f;
    
    printf("Escolha um numero para saber se ele e triangular");
    scanf("%d", &num);
    
    for(i=1, j = 2, f = 3 ; i<=9, j<=9,f<=9 ;i++, j++, f++)
    {
       if(i*j*f==num)
       {
           printf("%d X %d X %d = %d", i, j, f, num);
       }
       
    }
    
}
