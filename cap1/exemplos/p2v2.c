/*
	Programa 2 verçao 2 do livro de K&R 2Ed. 
	Imprime uma tabela Fahrenheit-Celsius utilizando variaveis de 
	ponto flutuante
*/

#include <stdio.h>

int meu_loop(float f);

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; //limite inferior de temperatura
	upper = 300; //limite superior
	step = 20; //incremento

	fahr = lower;
	
	while (fahr <= upper) {
		celsius = (fahr-32)* 5 / 9;
		printf("%3.0f\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}//fim do while

	//fahr = meu_loop (fahr);
}//fim de main

//Função recursiva para substituir o loop while
int meu_loop(float f) 
{
	float c = 0;

	if (f <= 300) {
		c = (f-32) * 5/9;
		printf("%3.0f\t%6.1f\n", f, c);
		f = f + 20;
		meu_loop( f );
	}

	return 0;
}
