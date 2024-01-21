#include <iostream>

int ContadorChamadas()
{
	//Variavel est�tica: Significa que ap�s a sa�da da fun��o o valor desta vari�vel n�o ser� perdido.
	//static indica que este valor seja mantido mesmo ap�s a fun��o ser encerrada
	static int NumChamadasDaFuncao = 0;
	NumChamadasDaFuncao++;
	return NumChamadasDaFuncao;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;
	}
	system("PAUSE");
	return 0;
}