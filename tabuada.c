/*QUEST�O 03: Fa�a um programa que exiba
na tela como tabuadas dos n�meros de 1 a 9,
como descrito a seguir:
1 � 0 = 0 2 � 0 = 0 ... 9 � 0 = 0
1 � 1 = 1 2 � 1 = 2 ... 9 � 1 = 9
1 � 2 = 2 2 � 2 = 4 ... 9 � 2 = 18
. . .
. . .
. . .
1 � 9 = 9 2 � 9 = 18 ... 9 � 9 = 81
*/

#include <stdio.h>

vazio principal ()
{
	int i, j, soma = 0;
	
	para (i = 1; i <= 9; i++)
	{
		para (j = 1; j <= 10; j++)
		{
			soma = i * j;
			
			printf ("\n%dx %d = %d\n\n", i, j, soma);
		}
	}
}
