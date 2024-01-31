/*
	Exercício 1.6
	Página 19
	Verifica se "getchar() != EOF" é 0 ou 1.

	Notas da versão:
		* Versão inicial.
*/

#include <stdio.h>

void main() 
{
	int c; 	/* caractere de entrada  */
	int f;	/* indicador do valor da expressão lógica */

	while (f = (c = getchar() != EOF)) {
		printf("A expressão é igual a: %d\n", f);
		putchar(c);
	}

	printf("A expressão é igual a: %d\n", f);
}
