/*
 *	Exercício 1.18 do livro The C Programing Language 2 ed.
 *	Remove linhas em branco e espaços no fim das linhas.
 */

#include <stdio.h>

#define MAXLINE 100

//Busca a proxima linha na entrada
int getLine(char newline[], int length);

//Copia uma matriz e a guarda en outro local
void copyLine(char to[], char from[]);

//Remove os espaços em branco e tabulações no fim de uma string.
void remRigthBlank(char line[], int tam);

int main()
{
	int len; //Comprimento máximo atual
	int max; //Comprimento máximo já registrado
	char line[MAXLINE]; //linha atual na entrada
	char longest[MAXLINE]; //guarda a linha mais longa

	len = max = 0;
	
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
			//printf("char read = %c\n", c);
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

		//printf("i = %d\t char = %c\n", i, line[i]); 
		++i;
	}

	line[fc + 1] = '\n';
	line[fc + 2] = '\0';

//	if (ff) {
//		line[fc + 1] = '\n';
//		line[fc + 2] = '\0';
//	}
//	else
//		line[fc + 1] = '\0';


	//printf("FC = %d \t FF = %d \n", fc, ff);
}
