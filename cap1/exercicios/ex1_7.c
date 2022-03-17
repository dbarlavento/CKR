/*
	Exercicio 1.7 do livro de K&R 2Ed. 
	Lê um caractere e imprime o caractere lido até EOF
	Imprime o valor de EOF
	EOF = Ctrl + d
*/

#include <stdio.h>

int main()
{
	int c;
	
	while (( c = getchar() ) != EOF) {
		putchar(c);
	}

	printf("EOF = %d\n", c);

	return 0;
	
}//fim de main
