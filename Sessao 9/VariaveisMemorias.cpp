#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\n Tamanho Variavel Numero: " << sizeof(Numero)<< "Bytes\n";
	std::cout << "\n Tamanho Variavel Salario: " << sizeof(Salario) << "Bytes\n";
	std::cout << "\n Endereco de memória da Variavel Numero: " << &Numero << "\n";
	std::cout << "\n Endereco de memória da Variavel Salario: " << &Salario << "\n";

	system("PAUSE");
	return 0;
}