/*
 *	Exercício 1.18 do livro The C Programing Language 2 ed.
 *	Remove linhas em branco e espaços no fim das linhas.
 */

#include <stdio.h>

#define MAXLINE 100

//Busca a proxima linha na entrada
int getLine(char newline[], int length);

//Remove os espaços em branco e tabulações no fim de uma string.
void remRigthBlank(char line[], int tam);

int main()
{
	char line[MAXLINE]; //linha atual na entrada

	getLine(line, MAXLINE);
	remRigthBlank(line, MAXLINE);
	printf("%s", line);

	return 0;
}

int getLine(char line[], int tam)
{
	int i, c;

	i = 0;
	c = 0;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		if(i < tam - 1) {
			line[i] = c;
		}
	
	if ((c == '\n') && (i < tam - 1)) {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
																			
	return i;
}

void copyLine(char to[], char from[])
{
	int i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}

void remRigthBlank(char line[], int tam)
{
	int i = 0;
	int ff = 0;
	int fc = 0;

	while (line[i] != '\0' && i < tam) {

		if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n')
			fc = i;
		//Detecta o fim da string
		if (line[i] == '\n' && line[i + 1] == '\0')
			ff = i;

		++i;
	}

	line[fc + 1] = '\n';
	line[fc + 2] = '\0';

}
