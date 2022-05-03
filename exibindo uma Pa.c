#include <stdio.h>

void main()
{
	/*
	Implementar um programa que exiba os N
	primeiros termos de uma PA (Progressão
	Aritmética) com primeiro termo a1 e razão
	r. 
	*/
	
	int termos, i;
	float r, primeirotermo, termo;
	
	printf ("Digite o numero de termos da PA: ");
	scanf ("%d", &ntemos);
	
	printf("Entre com a razão:\n");
	scanf ("%f", &r);
	
	printf("Quem sera o primeiro elemento: ");
	scanf ("%f", &primeirotermo);
	
	termo = primeiro termo;
	
	for (i = 1; i <= termos; i++)
	{
		printf ("%.1f ", termo);
		termo = termo + r;
	}
	
	
	
	
}
