/*
Construir um animal que calcule o peso ideal
de uma pessoa, de acordo com o seu g�nero e
, usando as seguintes f�rmulas de alturas:
? para homens: (72,7*h)-58
? para mulheres: (62,1*h)-44,7
*/


#include <stdio.h>
/*
vazio principal ()
{
float altura, pesoI;
int genero;

printf("Entre com a sua altura:\n");
scanf ("%f", &altura);

printf("Entre com o seu genero: digite 1 para mas e 2 para fem");
scanf ("%d", &genero);

alternar (g�nero)
{
caso 1:
pesoI = 72,7 * altura - 58;
pausa;
caso 2:
pesoI = 62,1 * altura - 44,7;
pausa;

predefini��o:
printf ("N�mero inv�lido!");
}
printf("Peso ideal: %.1f", pesoI);

}
*/

vazio principal ()
{
peso flutuante, altura;
char genero;

printf("Entre com o seu genero:\n");
scanf ("%c", &genero);

printf("ENTre com a sua altura:\n");
scanf ("%f", &altura);

if (g�nero == 'm')
{
peso = 72,7 * altura - 58;
printf("Peso Ideal: %.2f", peso);
}
sen�o
{
peso = 62,1 * altura - 44,7;
printf("Peso Ideal: %.2f", peso);

}
}
