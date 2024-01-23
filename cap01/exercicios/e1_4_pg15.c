/*
	Exercício 1-4
	Página 15
	Imprime uma tabela de conversão de C° para F° sendo
	F={0, 10, 20, ..., 290, 300}.

	Nesta versão são utilizadas variáveis de ponto flutuante (float)
	para melhor precisão e um cabeçalho é impresso antes da tabela.
*/

#include <stdio.h>

void main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; 		/* Limite inferior de temperatura */
	upper = 300; 	/* Limite superior */
	step = 10;		/* Incrementos */

	celsius = lower;

	printf("C°\t  F°\n");

	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
