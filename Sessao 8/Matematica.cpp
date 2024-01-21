#include "Matematica.h"
#include <cmath>

//Variavei Global pois declarei fora de
//qualquer fun��o. Logo ela ser� acessivel em qualquer fun��o incluindo a fun��o main()
//
int NumeroGlobal = 10;

int Soma(int num1, int num2)
{
	//esta vari�vel s� � acess�vel dentro da fun��o Soma
	int NumeroLocal = 5;
	return num1 + NumeroGlobal;
}

int Subtracao(int num1, int num2)
{
	if (num1 > num2)
	{
		//neste caso qualquer var��vel declarada entre as chaves de algo. ser� acess�vel somente dentro destas chaves. A isso chamados ESCOPO de vari�vel
		int NumeroLocalAEsteIf = 20;
	}
	//Mesmo NumeroLocalAEsteIf estando dentro da fun��o Subtracao ela somente
	//estar� acess�vel para o escolo{ } de onde ela foi declarada ele � uma vari�vel local a este if!
	return num1 - NumeroGlobal;
	//j� NumeroGlobal � global! possui escopo global.. ou seja � acessada
	//em qualquer fun��o do programa, logo em qualquer parte do programa pois ela � global.
}

int Multiplicacao(int num1, int num2)
{
	
	return num1 * num2;
}

float Divisao(int num1, int num2)
{
	//faz uma divisao inteira pois num1 e num2 s�o inteiros
	//mas podemos fazer cast
	//agora estamos indicando que o inteiro deve ser um float
	return (float)num1 / (float)num2;
}

int Potencia(int num1, int num2)
{
	return pow(num1, num2);
}

float RaizQuadrada(int num)
{
	return sqrt(num);
}