/*envolver um programa queDesenvolve
lendo dados (idade, peso e altura) de algumas
pessoas at� que a idade seja igual a -1
(ou seja, assim que a idade -1 for fornecida, mais
nenhuma informa��o deve ser solicitada). Ao
final, exibir:
1. A quantidade de pessoas que
fornecer seus dados;
2. O n�mero de pessoas com 18 anos ou
mais;
3. A m�dia de altura com mais de
65 anos;
4. A maior altura das pessoas que possuem
80 kg ou mais.*/

#include <stdio.h>
#include <limits.h>
void main()
{
    int idade, pessoas = 0, pessoasmais18 = 0, idademais65 = 0;
    float peso, altura, alturamais65 = 0, maioraltura = 0, media;

    Faz
    {
        printf("Entre com sua idade:\n");
        scanf ("%d", &idade);

        if (idade != -1)
        {
            printf("Entre com seu peso:\n");
            scanf ("%f", &peso);

            printf("Entre com sua altura:\n");
            scanf ("%f", &altura);
            

            pessoas++;

            if (idade > 18)
            {
                pessoasmais18++;
            }
            if (idade > 65)
            {
                alturamais65 += altura;
                idademais65++;
            }
            if (peso >= 80)
            {
                if (altura > maioraltura)
                {
                    maioraltura = altura;
                }
            }


        }
        
    } while (idade != -1);

    m�dia = (float)alturamais65/idademais65;

    printf ("A quantidade de pessoas que forneceram seus dados = %d\n", pessoas);
    printf ("O numero de pessoas com 18 anos ou mais = %d\n", pessoasmais18);
    printf ("A media de altura com mais de 65 anos = %.2f\n", media);
    printf ("A maior altura das pessoas que possuem 80 kg ou mais: %.2f\n", maioraltura);
    
}
