/*
	Programa 4 versao 2 do livro de K&R 2ed.
	Conta os caracteres de entrada até EOF
	Usando "for" fica mais elegante
	EOF = ctrl + d
*/

#include <stdio.h>

int main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;

	printf("%.0f\n", nc);

	return 0;
}
