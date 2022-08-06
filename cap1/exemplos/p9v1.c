/*
 * Exemplo 1.9 do livro The C Programing Language 2 ed.
 * Por B. Keenighan e D. Ritchie.
 *	Lê um conjunto de linhas de texto e imprime a mais longa.
 */

#include <stdio.h>

#define MAXLINE 1000

//Fetch the next line of input
int getLine(char newline[], int length);

//Copy a line and save it
void copyLine(char to[], char from[]);

int main()
{
	int len; //current line length
	int max; //maximum length seen so far
	char line[MAXLINE]; //current input line
	char longest[MAXLINE]; //longest line saved here

	max = 0;

	while ((len = getLine(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copyLine(longest, line);
		}
	
	if (max > 0)
		printf("%s", longest);
	
	return 0;
}

int getLine(char line[], int len)
{
	int i, c;

	i = 0;
	c = 0;

	for (i = 0; (i < len - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
		line[i] = c;
	
	if (c == '\n') {
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

//	for (i = 0; (to[i] = from[i]) != '\0'; ++i);
}
