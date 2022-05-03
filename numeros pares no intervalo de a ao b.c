#include <stdio.h>

vazio principal ()
{
int i, num, numero2;

printf("Escolher um numero:\n");
scanf ("%d", &num);

printf("Escola o segundo numero:\n");
scanf ("%d", &number2);

if (num < número2)
{
para (i = num;i <= numero2;i++)
{
se (i % 2 == 0)
{
printf ("%d", i);
}
}
}
senão
{
for (i = número2; i <= número;i++)
{
se (i % 2 == 0)
{
printf ("%d", i);
}
}
}


}

/*
Exibir os numeros pares no intervalo de A a B.
