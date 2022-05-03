#include <stdio.h>

vazio principal ()
{
	float salarioSemanal, salarioHora, perc;
    int horaTrab, horaExtra;
    
    printf ("Digite as suas horas de trabalho semanais:\n");
    scanf ("%d", &horaTrab);
    
    printf("Digite o seu salario por hora trabalhada:\n");
    scanf ("%f", &salarioHora);
    
    if (horaTrab <= 40)
    {
    	salarioSemanal = salarioHora * horaTrab;
	}
	senão
		{
			horaExtra = (horaTrab - 40);
			perc = (salarioHora + (salarioHora * 0.5)) * horaExtra;
			salarioSemanal = (salarioHora * 40) + perc;
		}
		
	printf("Seu salario semanal: %.2f", salarioSemanal);
}
