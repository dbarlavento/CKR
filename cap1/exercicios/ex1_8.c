/*
	Exercício 1.8 do livro de K&R 2ed.
	Conta espaços em branco: ' ', \t e \n
	EOF = ctrl + d
*/

#include <stdio.h>

int main()
{
	int c, bc;

	bc = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n' || c == '\t' || c == ' ')
			++bc;

	printf("%d\n", bc);

	return 0;
}
