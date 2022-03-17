/*
	Programa 3 verçao 1 do livro de K&R 2Ed. 
	Lê um caractere e imprime o caractere lido até o fim do arquivo EOF
	Em UNIX: EOF = Ctrl + d
*/

#include <stdio.h>

int main()
{
	int c;
	
	while ((c = getchar()) != EOF) {
		putchar(c);
	}

	return 0;
	
}//fim de main
