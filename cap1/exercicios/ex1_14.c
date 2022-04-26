/*
 * Exercício 1.14 do livro The C Programing Language 2 ed.
 * Imprime um histograma do número de ocorrência de cada letra na entrada.
 */

#include <stdio.h>
 
#define NC 37 //Número entradas no histograma

int main()
{
 	int c,	//Caractere de entrada
		i, j,		//Índices para laço for
		top,	//Número de palvras com número de letras mais frequêntes
		hist[NC]; 	//Histograma do número caracteres de entrada
 	
	c = i = j = top  = 0;
	
	//Inicia o array com zero
	for (i = 0; i < NC; ++i)
		hist[i] = 0;

	while	((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'Z')
			++hist[10 + c - 'A'];
		else if (c >= 'a' && c <= 'z')
			++hist[10+ c - 'a'];
		else if (c >= '0' && c <= '9')
			++hist[c - '0'];
		else 
			++hist[NC - 1];
	}

	//Encontra o maior número de eocorrências de letras
	for (i = 0; i < NC; ++i)
		if (top < hist[i])
			top = hist[i];

	//Imprime o histograma na vertical
	for (i = top; i > 0; --i) {
		printf("%4d|\t", i);
		
		for (j = 0; j < NC; ++j) {
			if (hist[j] >= i)
				printf("# ");
			else
				printf("  ");
		}

		printf("\n");
	}

	//Imprime o rodapé do gráfico
	printf("    \t");
	for (i = 0; i < NC; ++i){
		if (i >= 0 && i <= 9)
			printf("%c ", (i + '0'));
		else if (i >= 10 && i < (NC - 1))
			printf("%c ", (i - 10 + 'A')); 
		else
			printf("* "); 
	}
	
	printf("\n");

	return 0;
}
