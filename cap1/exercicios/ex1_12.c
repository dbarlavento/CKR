/*
 * Exercício 1.12 do Livro The C Programing Language 2 ed.
 * Imprime a entrada, uma palavra por linha.
 */

 #include <stdio.h>

 #define IN 1 //dentro de uma palvra
 #define OUT 0 //fora da palavra

 int main()
 {
 	int c, //caracter de entrada
		estado; //indica se dentro ou fora de uma palavra

		estado = OUT;

		while ((c = getchar()) != EOF) {
			if (c!= ' ' && c != '\t' && c != '\n'){
				putchar(c);
				estado = IN;
			}
			else if (estado)
			{
				putchar('\n');
				estado = OUT;
			}
		}

		return 0;
}//fim de main
