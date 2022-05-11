/*Questão 04 [4,0 pontos]:
Desenvolver uma aplicação que permaneça lendo
dados (código, número de créditos, notas na AV1, AV2 e
AVF – esta última, quando for o caso) sobre as diversas
disciplinas cursadas por determinado aluno. Ao final,
exibir:
? Número de disciplinas cursadas;
? Total de disciplinas nas quais foi aprovado sem
prova final (média igual ou superior a 7), reprovado
sem direito de fazer a prova final (média inferior a
4) e provas finais prestadas;
? Código da disciplina na qual obteve maior média
final;
? Código da disciplina na qual obteve menor média
final;
? Coeficiente de rendimento do aluno (que consiste
em uma média ponderada de todas as médias de
disciplinas, considerando o número de créditos
como peso).*/

#include <stdio.h>
#include <limits.h>

void main ()
{
	int i, codigo, ncreditos, totaldisciplinas = 0, apsemfinal = 0, rp = 0, provaavf = 0, disciplinamai, disciplinamen;
	float av1, av2, avf, totalav1eav2 = 0, mediaav1eav2, media, maiormedia = -1, menormedia = 11, valormult, mult, valorsoma = 0, totalmedia;
	char opiniao;
	
	do
	{
		valormult = 0;
		totalav1eav2 = 0;
		
		printf ("Entre com o codigo da turma:\n");
		scanf ("%d", &codigo);
		
		printf ("Entre com numero de creditos:\n");
		scanf ("%d", &ncreditos);
		
		printf ("Entre com a nota da av1:\n");
		scanf ("%f", &av1);
		
		printf ("Entre com a nota da av2:\n");
		scanf ("%f", &av2);
		
		totaldisciplinas++;
		
		totalav1eav2 += av1 + av2;
		mediaav1eav2 = totalav1eav2 / 2;
		
		if (mediaav1eav2 >= 6)
		{
			apsemfinal++;
		}
		else
			{
				if (mediaav1eav2 < 4)
				{
					rp++;
					
				}
				else
					{
						if ((mediaav1eav2 >= 4) || (mediaav1eav2 <= 5))
						{
							provaavf++;
							
							printf ("Entre com sua nota da avf:\n");
							scanf ("%f", &avf);
							disciplinamen = codigo;
							
							valormult = (mediaav1eav2 * ncreditos) + avf;
							mult += valormult;
							valorsoma += ncreditos;
							
							
						}
					
					}
			}
		
		if (mediaav1eav2 > maiormedia)
		{
			maiormedia = mediaav1eav2;
			disciplinamai = codigo;
		}
		if (mediaav1eav2 < menormedia)
		{
			menormedia = mediaav1eav2;
			disciplinamen = codigo;
		}
		
		
		
		valormult = mediaav1eav2 * ncreditos;
		mult += valormult;
		valorsoma += ncreditos;
		
		
		printf ("Deseja sair? digite S, caso queira ficar digite N:\n");
		fflush(stdin);
		scanf ("%c", &opiniao);
		
		opiniao = toupper(opiniao);
		
	}while(opiniao != 'S');
	
	totalmedia = mult / valorsoma;
	
	
	printf ("NUmero de disciplinas cursadas = %d\n", totaldisciplinas);
	printf ("Numero de alunos que passaram direto = %d\n", apsemfinal);
	printf ("Numero de alunos que reprovaram = %d\n", rp);
	printf ("Numero de alunos que precisaram de prova final: %d\n", provaavf);
	printf ("Codigo da disciplina que obteve a maior media: %d\n", disciplinamai);
	printf ("Codigo da disciplina que obteve a menor media: %d\n", disciplinamen);
	printf ( " A media ponderada: %.2f\n" , totalmedia);
}
