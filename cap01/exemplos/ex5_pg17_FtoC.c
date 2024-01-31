/*
	Exemplo 5
	Página 17
	Imprime uma tabela de conversão de F° para C° sendo
	F={0, 20, 40, ..., 280, 300}.

	Notas da versão:
		* Utilização de variáveis de ponto flutuante (float).
		* Loop implementado com o comando "for".
		* Definição dos valores como constantes simbólicas.
*/

#include <stdio.h>

#define LOWER 0			/* Limite inferior de temperatura */
#define UPPER 300			/* Limite superior */
#define STEP 20			/* Incremento */
#define CONST (5.0/9.0)	/* Constante de conversão */

void main()
{
	float fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) 
		printf("%3.0f\t%6.1f\n", fahr, CONST*(fahr-32));
}
