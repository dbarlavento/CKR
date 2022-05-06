/*
 *	Exercício 1.16 do livro The C Programing Language 2 ed.
 *	Revisão do exemplo 1.9. Corrige a implementação da função main,
 *	agora processa entradas arbitrariamente grandes.
 */

#include <stdio.h>

#define MAXLINE 10

//Busca a proxima linha na entrada
int getLine(char newline[], int length);

//Copia uma matriz e a guarda en outro local
void copyLine(char to[], char from[]);

int main()
{
	int len; //Comprimento máximo atual
	int max; //Comprimento máximo já registrado
	char line[MAXLINE]; //linha atual na entrada
	char longest[MAXLINE]; //guarda a linha mais longa

	len = max = 0;

	while ((len = getLine(line, MAXLINE)) > 0) {
		printf("%d\n", len);
		if (len > max) {
			max = len;
			copyLine(longest, line);
		}
	
	}														
	if (max > 0)
		printf("%s\n", longest);
																					
	return 0;
}

int getLine(char line[], int tam)
{
	int i, c;

	i = 0;
	c = 0;

	for (i = 0;((c = getchar()) != EOF) && (c != '\n'); ++i)
		if(i < tam - 1)
			line[i] = c;

	if ((c == '\n') && (i < tam - 1)) {
		line[i] = c;
		++i;
	}

	line[tam - 1] = '\0';
																			
	return i;
}

void copyLine(char to[], char from[])
{
	int i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;

	//for (i = 0; (to[i] = from[i]) != '\0'; ++i);
}
