/*
 *	Exercício 1.17 do livro The C Programing Language 2 ed.
 *	Imprime todas as linhas de entrada que tenham mais de 80 caracteres.
 */

#include <stdio.h>

#define MAXLINE 80

//Busca a proxima linha na entrada
int getLine(char newline[], int length);

//Copia uma matriz e a guarda en outro local
void copyLine(char to[], char from[]);

int main()
{
	int len; //Comprimento máximo atual
	char line[MAXLINE]; //linha atual na entrada
	char longest[MAXLINE]; //guarda a linha mais longa

	len = 0;

	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > MAXLINE)
			printf("%s\n\n", line);

		len = 0;
	}																				
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
