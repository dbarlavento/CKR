/*
 * Exemplo 1.5.4 do livro The C Progeming Language 2ed.
 * Por B. Keenighan e D. Ritchie
 * Conta linhas palavras e caracteres fornecidos como entrada.
 */

#include <stdio.h>

#define IN 1 //dentro da palavra
#define OUT 0 //fora da palavra

int main()
{
	int c, //caracter de entrada 
		nl, //numero de linhas
		np, //numero de palavras
		nc, //numero de caracters
		state; //sinal de dentro ou fora de uma palavra

		state = OUT;
		nl = np = nc = 0;

		while ((c = getchar()) != EOF) {
			++nc;

			if (c == '\n')
				++nl;
			if (c == ' ' || c == '\n' || c == '\t')
				state = OUT;
			else if (state == OUT) {
				state = IN;
				++np;
			}
		}

		printf("Linhas: %d\nPalavras: %d\nCaracteres: %d\n", nl, np, nc);
}//fim de main
