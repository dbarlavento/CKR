/*
	Exemplo 2
	Página 12
	Imprime uma tabela de conversão de F° para C° sendo
	F={0, 20, 40, ..., 280, 300}
*/

#include <stdio.h>

void main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; 		/* Limite inferior de temperatura */
	upper = 300; 	/* Limite superior */
	step = 20;		/* Incrementos */

	fahr = lower;

	while (fahr <= upper) {
		celsius = 5 * (fahr -32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
