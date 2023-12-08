#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	//Voc� pode usar ( ) para iniciar vari�veis com valores literais
	//{  } � inicializa��o uniforme, permite tanto iniciar tanto valores literais (int, float, caractere, quanto valores escalares, vetores, enums etc.
	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56 };
	char Caractere{ 'c' };
	//String � um cadeia de caracteres, � um texto e deve estar entre aspas duplas "texto da string"
	//Para declarar uma string usamos std::string
	std::string Texto{ "Vou Aprender C++ e descobrir o lado sombrio da for�a!" };
	//%d indica que voc� quer que seja colocado na string:
	//"Valor N�mero Inteiro = %d " o valor da vari�vel NumeroInteiro
	std::printf("Valor Inteiro: %d - Real: %.2f - Caractere: %c - Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	std::cout << "Texto da String: " << Texto << "\n";

	std::printf("O Valor do Caractere Digitado: %c na Tabela ASCII �: %d \n", Caractere, Caractere);
	/*%d N�mero decimal inteiro (int).
	%f	 N�mero decimal de ponto flutuante. serve tanto para float como para double.
	%lf  Serve para double. (l-long , f-float - lf)
	%c	 Caractere: imprime o caractere que tem o c�digo ASCII correspondente ao valor dado.
	%s	 Sequ�ncia de caracteres (string, em ingl�s).
	*/

	system("PAUSE");
	return 0;
}