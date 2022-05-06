/*
 *	Exercício 1.18 do livro The C Programing Language 2 ed.
 *	Remove linhas em branco e espaços no fim das linhas.
 */

#include <stdio.h>

#define MAXLINE 10

//Busca a proxima linha na entrada
int getLine(char newline[], int length);

//Copia uma matriz e a guarda en outro local
void copyLine(char to[], char from[]);

//Remove os espaços em branco e tabulações no fim de uma string.
int remRigthBlank(char old[], char new[]);

int main()
{
	int len; //Comprimento máximo atual
	int max; //Comprimento máximo já registrado
	char line[MAXLINE]; //linha atual na entrada
	char longest[MAXLINE]; //guarda a linha mais longa

	len = max = 0;

	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copyLine(longest, line);
		}
	
	}													
	if (max > 1)
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
}

int remRigthBlank(char line[], int tam)
{
	int i = tam - 1;
	int fl = 0;

	//Verifica se é uma string bem formada e verifica seu final
	if (line[i] == '\0')
		if(line[i - 1] == '\n') 
			fl = 2;
		else 
			fl = 1;
	else	
		return -1; 
	
	for (i >= 0 && (line[i] == '\t' || line == ' '); --i);
	
	if (fl >= 1)
		line[i + 1] = '\0';
	if (fl >= 2){
		line[i] = '\n';
	}

	return 1;
}
