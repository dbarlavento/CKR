/*
	Exercicio 1.5 do livro de K&R 2Ed. 
	Imprime uma tabela Fahrenheit-Celsius utilizando variaveis de 
	ponto flutuante
	Substitui o loop while por for
	Imprime os valores do maior para o menor
*/

#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; //limite inferior de temperatura
	upper = 300; //limite superior
	step = 20; //incremento

	fahr = lower;
	
	for (fahr = upper; fahr >= lower; fahr -= step) {
		celsius = (fahr-32)* 5 / 9;
		printf("%3.0f\t%6.2f\n", fahr, celsius);
	}//fim do for 

}//fim de main
