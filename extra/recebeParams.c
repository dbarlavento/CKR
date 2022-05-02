/*
 *	Recebe um número qualquer de parâmetros e os imprime como uma lista
 *	vertical.
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	++argv;
	while (*argv) {
		(void)fputs(*argv, stdout);
		if (*++argv)
			putchar('\n');
	}
	putchar('\n');
	return 0;
}
