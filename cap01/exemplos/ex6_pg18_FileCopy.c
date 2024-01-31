/*
	Exemplo 6
	Página 18
	Lê caracteres digitados no console e os copia para a saida até que o
	caractere EOF seja digitado.

	Notas da versão:
		* Versão inicial.
*/

#include <stdio.h>

void main() 
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
