/*
 *	Lista os números primos dentro de um intervalo definido.
 *	Primeiro parâmetro: limite inferior do intervalo.
 *	Segundo Parâmetro: limite superior do intervalo.
 */

#include <stdio.h>
#include <string.h>

void encontraPrimo(int *primos, int numPrimos, int ini, int fim);

int main(int argc, char *argv[])
{
	int numPrimos = 1000;
	int primos[numPrimos];
	encontraPrimo(primos, numPrimos, 3, 10000);
	for (;numPrimos >= 1; --numPrimos)
		printf("%d: %d\n", (numPrimos - 1), primos[numPrimos - 1]);
	return 0;
}

void encontraPrimo(int *primos, int numPrimos, int ini, int fim)
{
	//Candidato a primo
	int nc = 0;
	
	//Divisor - primeiro primo depois de 2
	int div = 3;

	//índice
	int i = 0;

	//Tratando as entradas
	if (ini <= 2) { 
		primos[i] = 2;
		++i;
	}

	if (ini % 2 != 0)
		nc = ini;
	else
		nc = ini + 1;

	//Busca por primos
	while ((nc <= fim) && (i <= numPrimos)) {
		div = 3;
		while ((nc % div != 0) && (div <= nc))
			div = div + 2;
		
		if (div == nc) {
			primos[i] = nc;
			++i;
		}

		nc = nc + 2;
	}
}
