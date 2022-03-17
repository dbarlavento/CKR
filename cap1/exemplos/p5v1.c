/*
	Programa 5 versao 1 do livro de K&R 2ed.
	Conta as linhas de entrada até EOF
	EOF = ctrl + d
*/

#include <stdio.h>

int main()
{
	int c, nl;

	nl = 0;
	
	/* 
		Aninhamento de condicionais com uma única instrucão no seus corpos
		por isso chaves não são necessárias 
	*/
	while ((c = getchar()) != EOF)  
		if (c == '\n') 
			++nl;
	
	printf("%d\n", nl);

	return 0;
}
