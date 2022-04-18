/*
 * Exercício 1.15 do livro The C Programing Language 2 ed.
 * Implementação da função de conversão de Fahrenheit-Celsius.
 */

#include <stdio.h>

#define LOWER 0 //limite inferior de temperatura
#define UPPER 300 //limite superior
#define STEP 20 //incremento

float celsius2fahr(float celsiusr);

int main()
{
	float farh, celsius;

	celsius = LOWER;

	//Cabeçalho da tabela
	printf("%4s\t%6s\n", "C", "F");

	while (celsius <= UPPER) {
		printf("%3.0f\t%6.2f\n",  celsius, celsius2fahr(celsius));
		celsius += STEP;
	}
	return 0;
}

/* Converte de Celsius para Fahrenheit. */
float celsius2fahr(float celsius)
{
	return (celsius * 5 / 9) + 32;
}
