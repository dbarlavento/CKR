/*
	Programa 2 do livro de K&R 2Ed. 
	Imprime uma tabela Fahrenheit-Celsius
*/

#include <stdio.h>

int meu_loop(int f);

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; //limite inferior de temperatura
	upper = 300; //limite superior
	step = 20; //incremento

	fahr = lower;

	/*
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}//fim do while
	*/

	fahr = meu_loop (fahr);
}//fim de main

int meu_loop(int f) 
{
	int c = 0;
	if (f <= 300) {
		c = 5 * (f-32) / 9;
		printf("%3d\t%6d\n", f, c);
		f = f + 20;
		meu_loop( f );
	}

	return 0;
}
