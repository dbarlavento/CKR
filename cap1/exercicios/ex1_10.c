/*
	Exercício 1.10 do livro de K&R 2ed.
	Substitui tabs, backspaces e backslashes por \t, \b e \\
	EOF = ctrl + d
*/

#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\\')
			printf("\\\\");
		if (c == '\b')
			printf("\\b");
		if (c == '\t')
			printf("\\t");
		else
			putchar(c);
	}
	
	putchar('\n');

	return 0;
}
