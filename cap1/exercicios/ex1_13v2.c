/*
 * Exercício 1.13 do livro The C Programing Language 2 ed.
 * Imprime um histograma do comprimento das palavras inseridas.
 * V.2: Histograma é impresso na vertical.
 */

#include <stdio.h>
 
#define NL 10 //Número entradas no histograma
#define IN 1 //Dentro de uma palavra
#define OUT 0 //Fora de uma palavra

int main()
{
 	int c,	//Caractere de entrada
		i, j,		//Índices para laço for
		estado,	//Indica se dentro ou fora de uma palavra
		numLetras, 	//Número de letras numa palavra
		numPalavras,	//Número de palavras inseridas
		top,	//Número de palvras com número de letras mais frequêntes
		hist[NL]; 	//Histograma do número de letras por palavra
 	
	c = i = j = numLetras = numPalavras = top  = 0;
	
	estado = OUT;
	
	//Inicia o array com zero
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

	//Encontra o maior número de eocorrências de letras
	for (i = 0; i < NL; ++i)
		if (top < hist[i])
			top = hist[i];

	//Imprime o histograma na vertical
	for (i = top; i > 0; --i) {
		printf("%d|\t\t", i);
		
		for (j = 0; j < NL; ++j) {
			if (hist[j] >= i)
				printf("# ");
			else
				printf("  ");
		}

		printf("\n");
	}

	//Imprime o rodapé do gráfico
	printf("\t\t1 2 3 4 5 6 7 8 9 10\n");

	return 0;
}
