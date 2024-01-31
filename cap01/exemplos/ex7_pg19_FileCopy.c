/*
	Exemplo 7
	Página 19
	Lê caracteres digitados no console e os copia para a saida até que o
	caractere EOF seja digitado.

	Notas da versão:
		* Segunda versão.
		* A leitura do caractere agora está na expressão lógica do comando while.
*/

#include <stdio.h>

void main() 
{
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
