/*QUESTÃO 02: Um fazendeiro realizou um experimento
tratamento sobre sua plantação de café
que gerou um crescimento constante de C
% em sua produção, por ano.
Considerando que atualmente sua
produção anual seja de M up,
implementar um programa que determine
a quantidade de anos necessários para que
a produção duplicada.*/

#include <stdio.h>

vazio principal ()
{
    int = 0;
    float m, c, valor;

    printf("Entre com o valor da producao anual:\n");
    scanf ("%f", &m);

    printf ("Entre com o valor da taxa para o crescimento:\n");
    scanf ("%f", &c);

    valor = m;

    enquanto (valor <= m*2)
    {
        valor = valor + (c/100) * valor;
        i++;
    }
    printf ("Sera necessário %d anos para gerar crescimento de %.2f -> %.2f\n", i, m, valor);
    
    
}
