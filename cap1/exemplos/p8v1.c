/*
 * Exemplo 1.7 do livro The C Programing Language 2 ed.
 * PorB Keenighan e D. Ritchie.
 * Implementa uma função para o cálculo da potência de números inteiros.
 */

#include <stdio.h>

int power(int base, int n);

int main()
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i));

	return 0;
}

/* power: eleva o numero "base" a enésima potência sendo n >= 0 */
int power(int base, int n)
{
	int i, p;

	p = 1;

	for (i = 1; i <= n; ++i)
		p = p * base;

	return p;
}
