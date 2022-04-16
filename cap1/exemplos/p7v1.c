/*
 * Exemplo 1.6 do livro The C Programing Language 2 ed.
 * Por B. Keenighan e D. Ritchie.
 * Conta os digitos, espaços em branco e demais caracteres.
 */

#include <stdio.h>

int main()
{
	int c, 	//Caractere de entrada
		i,		//Índice
		nbrancos,	//Número de espaços, tabulações e nova linha
		noutros;	//Número de outros caracteres

	int ndigitos[10];	//Número de caracteres numéricos

	//Inicializa os contadores
	nbrancos = noutros = 0;

	//Inicializa a matriz
	for (i = 0; i < 10; ++i)
		ndigitos[i] = 0;

	//Lê os caracteres de entrada e os conta
	while ( (c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigitos[c - '0'];
		else if (c == ' ' || c == '\t' || c == '\n')
			++nbrancos;
		else
			++noutros;
	}

	//Imprime os resultados
	printf("Digitos = ");
	
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigitos[i]);

	printf("\nEspaços em branco: %d, outros: %d\n", nbrancos, noutros);
}
