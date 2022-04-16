/*
 * Exercício 1.13 do livro The C Programing Language 2 ed.
 * Imprime um histograma do comprimento das palavras inseridas.
 * V.1: Histograma é impresso na horizontal.
 */

#include <stdio.h>
 
#define NL 10 //Número entradas no histograma
#define IN 1 //Dentro de uma palavra
#define OUT 0 //Fora de uma palavra

int main()
{
 	int c,	//Caractere de entrada
		i, j,		//Índices do laço for
		estado,	//Indica se dentro ou forade uma palavra
		numLetras, 	//Número de letras numa palavra
		numPalavras,	//Número de palavras inseridas
		hist[NL]; 	//Histograma do número de letras por palavra
 	
	c = i = j = numLetras = numPalavras = 0;
	
	estado = OUT;

	for (i = 0; i < NL; ++i)
		hist[i] = 0;

	while	((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			estado = IN;
			++numLetras;
		}
		else if (estado) {
			estado = OUT;
			++numPalavras;
			if (numLetras > 0 && numLetras < NL)
				++hist[numLetras - 1];
			else
				++hist[9];

			numLetras = 0;
		}
	}

	printf("Número de palavras: %d\n", numPalavras);

	printf("Distribuição do número de letras:\n");

	for (i = 0; i < (NL - 1); ++i){
		printf("%d\t%d:\t", (i + 1), hist[i]);

		for (j = 0; j <= hist[i]; ++j)
			printf("@");
		
		printf("\n");
	}

	printf("+%d\t%d:\t", NL, hist[NL - 1]);

	for (j = 0; j <= hist[NL - 1]; ++j)
		printf("@");
	
	printf("\n");
}
