/*
	Exercício 1.4 do livro de K&R 2Ed. 
	Imprime uma tabela Celsius-Fahrenheit utilizando variaveis de 
	ponto flutuante.
	Adiciona um cabeçalho antes da tabela
*/

#include <stdio.h>

int meu_loop(float c);

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; //limite inferior de temperatura
	upper = 300; //limite superior
	step = 20; //incremento

	celsius  = lower;

	//Cabeçalho
	printf("%4s\t%6s\n", "C°", "F°");

	while (celsius <= upper) {
		fahr = (celsius * 5 / 9) + 32;
		printf("%3.0f\t%6.2f\n", celsius, fahr);
		celsius = celsius + step;
	}//fim do while

	//fahr = meu_loop (fahr);
}//fim de main

//Função recursiva para substituir o loop while
int meu_loop(float c) 
{
	float f = 0;

	if (c <= 300) {
		f = (c * 5 / 9) + 32;
		printf("%3.0f\t%6.1f\n", c, f);
		c = c + 20;
		meu_loop( c );
	}

	return 0;
}
