#include <stdio.h>

/*QUEST�O 03:
Construir um programa que permita ao usu�rio
calcular a �rea de uma figura geom�trica. P�ra
isto, o usu�rio deve escolher a figura desejada
([C]�rculo, [R]et�ngulo, [Q]uadrado ou
[T]ri�ngulo) e fornecer as informa��es
Opera��o para que a �rea desta figura possa
servi�os.
Notas:
1. F�rmulas para o c�lculo das �reas:
uma. c�rculo = p.raio2, onde p = 3,14159;
b. natural = base.altura;
c. quadrado = lado2;
d. tri�ngulo = (base.altura)/2.
2. Caso o usu�rio escolha uma op��o inv�lida,
uma mensagem de erro deve ser exibida ea
execu��o do programa terminado.
*/

vazio principal ()
{
	float circular, tri�ngulo, quadrado, retangulo, raio;
	base flutuante, altura;
	lado flutuante;
	n�mero inteiro;
        
    printf("Digite 1 para saber o calculo do Circulo\n");
    printf("Digite 2 para saber o calculo do Retangulo\n");
    printf("Digite 3 para saber o calculo do Quadrado\n");
    printf("Digite 4 para saber o calculo do Triangulo\n");
    scanf ("%d", &num);
    
    interruptor (num)
    {
    	caso 1:
    		printf("Digite o valor do Raio:\n");
    		scanf ("%f", &raio);
    		circulo = 3,14 * (raio * raio);
    		printf("Valor do circulo: %.2f\n", circulo);
    		pausa;
    		
    	caso 2:
    		printf("Digite o valor da base:\n");
    		scanf ("%f", &base);
    		printf("Digite o valor da altura:\n");
    		scanf ("%f", &altura);
    		retangulo = base * altura;
    		printf("Valor do retangulo: %.2f\n", retangulo);
    		pausa;
    		
    	caso 3:
    		printf("Digite o valor do lado:\n");
    		scanf ("%f", &lado);
    		quadrado = lado * lado;
    		printf ("Valor do lado: %.2f\n", quadrado);
    		pausa;
    		
    	caso 4:
    		printf("Entre com o valor da base:\n");
    		scanf ("%f", &base);
    		printf("Entre com o valor da altura:\n");
    		scanf ("%f", &altura);
    		tri�ngulo = (base * altura) / 2;
    		printf("valor do triangulo: %.2f\n", triangulo);
    		pausa;
    		
    	predefini��o:
    		printf("Erro! Numero digitado invalido.");
	}     
	
}
