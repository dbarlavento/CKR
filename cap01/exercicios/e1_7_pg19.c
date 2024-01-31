/*
	Exercício 1.7
	Página 19
	Imprime o valor de EOF.

	Notas da versão:
		* Versão inicial.
*/

#include <stdio.h>

void main() 
{

	int c; 	/* caractere de entrada  */

	while ((c = getchar()) != EOF)
		;

	printf("EOF =  %d\n", c);
}
