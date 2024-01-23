/*
	Exemplo 4
	Página 15
	Imprime uma tabela de conversão de F° para C° sendo
	F={0, 20, 40, ..., 280, 300}.

	Notas da versão:
		* Utilização de variáveis de ponto flutuante (float).
		* Loop é implementado com o comando "for".
*/

#include <stdio.h>

void main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; 		/* Limite inferior de temperatura */
	upper = 300; 	/* Limite superior */
	step = 20;		/* Incrementos */

	for(fahr = lower; fahr <= upper; fahr = fahr + step) 
		printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
