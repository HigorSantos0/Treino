#include <stdio.h>

void main()
{
	/*
	Implementar um programa que exiba os N
	primeiros termos de uma PA (Progress�o
	Aritm�tica) com primeiro termo a1 e raz�o
	r. 
	*/
	
	int termos, i;
	float r, primeirotermo, termo;
	
	printf ("Digite o numero de termos da PA: ");
	scanf ("%d", &ntemos);
	
	printf("Entre com a raz�o:\n");
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
