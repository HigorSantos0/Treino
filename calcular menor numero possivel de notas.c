/*
Escrever um mundo que, dada uma quantidade
em reais, calcule o menor n�mero poss�vel de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
o valor pode ser decomposto.
*/
#include <stdio.h>

vazio principal ()
{
int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0, notas1 = 0;
n�mero inteiro;
int resto;

printf("Digite uma quantidade em reais:\n");
scanf ("%d", &num);  

if (num >= 100)
{
notas100 = num/100;
resto = num%100;
}
sen�o
{
resto = num;
}
if (resto >= 50)
{
notas50 = resto/50;
resto = resto % 50;
}
if (resto >= 20)
{
notas20 = resto/20;
resto = resto % 20;
}
if (resto >= 10)
{
notas10 = resto/10;
resto = resto % 10;
}
if (resto >= 5)
{
notas5 = resto/5;
resto = resto % 5;
}
if (resto >= 2)
{
notas2 = resto/2;
resto = resto % 2;
}
if (resto >= 1)
{
notas1 = resto/1;
resto = resto % 1;
}


printf("Notas de 100: %d\n", notas100);
printf("Notas de 50: %d\n", notas50);
printf("Notas de 20: %d\n", notas20);
printf("Notas de 10: %d\n", notas10);
printf("Notas de 5: %d\n", notas5);
printf ("Notas de 2 ou moedas: %d\n", notas2);
printf("Moedas de 1: %d\n", notas1);




}
