/*
	Programa 2 verçao 3 do livro de K&R 2Ed. 
	Imprime uma tabela Fahrenheit-Celsius utilizando variaveis de 
	ponto flutuante
	Substitui o loop while por for
	Estabelece lower, upper e step como constantes
*/

#include <stdio.h>

#define LOWER 0 //limite inferior de temperatura em F°
#define UPPER 300 //limite superior de temperatura em F°
#define STEP 20 //incremento dos valores em F°

int main()
{
	float fahr, celsius;
	
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		celsius = (fahr-32)* 5 / 9;
		printf("%3.0f\t%6.2f\n", fahr, celsius);
	}//fim do for 

}//fim de main
