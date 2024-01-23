/*
	Exercício 1-3
	Página 15
	Imprime uma tabela de conversão de F° para C° sendo
	F={0, 20, 40, ..., 280, 300}.

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
	step = 20;		/* Incrementos */

	fahr = lower;

	printf("F°\t  C°\n");

	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
