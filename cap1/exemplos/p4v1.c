/*
	Programa 4 versao 1 do livro de K&R 2ed.
	Conta os caracteres de entrada até EOF
	EOF = ctrl + d
*/

#include <stdio.h>

int main()
{
	long nc;

	nc = 0;

	while (getchar() != EOF) {
		++nc;
	}

	printf("%ld\n", nc);

	return 0;
}
