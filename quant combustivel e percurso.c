#include <stdio.h>

vazio principal ()
{
/*
QUEST�O 04: Desenvolva um mundo que
calcule o consumo de combustivel de um
autom�vel em viagem determinada. Para isso,
devem ser obtidos: i) o percurso (em
milhas) da viagem; ii) o n�mero de
milhas que o carro percorreu com um litro
combust�vel (km/l); e iii) o pre�o do litro do
combust�vel.
Ao final, o deve determinar:
� A quantidade de combust�vel, em litros,
servi�o durante a viagem;
� O custo total de combust�vel.
*/
float percurso, numkm1l, preco, quantlitros, custototal;

printf ("Digite o quilometragem do seu percurso:\n");
scanf ("%f", &percurso);

printf ("Digite o numero de quilometros que o carro percorreu com 1 litro:\n");
scanf ("%f", &numkm1l);

printf ("preco do combustivel, litro:\n");
scanf ("%f", &preco);


quantlitros = percurso / numkm1l;
custototal = preco * quantlitros;

print quantidade de combustivel durante a viagem: %.2f\n", litros);
printf ("Custo total de combustivel: %.2f\n", custototal);


}
