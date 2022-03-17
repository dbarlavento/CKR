/*
	Exercicio 1.6 do livro de K&R 2Ed. 
	Lê um caractere e imprime o caractere lido até EOF
	Verifica se getchar() != EOF é 0 ou 1
	EOF = Ctrl + d
*/

#include <stdio.h>

#define TRUE '1'
#define FALSE '0'


int main()
{
	int c;
	
	while (( c = getchar() ) != EOF) {
		putchar(c);
		putchar(TRUE);
	}

	putchar(FALSE);

	return 0;
	
}//fim de main
