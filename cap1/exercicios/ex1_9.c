/*
	Exercício 1.9 do livro de K&R 2ed.
	Substitui \t e \n por ' '
	EOF = ctrl + d
*/

#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t')
			c = ' ';
		putchar(c);
	}
	
	putchar('\n');

	return 0;
}
