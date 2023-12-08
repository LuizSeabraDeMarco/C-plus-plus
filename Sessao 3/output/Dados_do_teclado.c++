#include <iostream>

int main()
{
    int Numero01, Numero02;
    int Resultado;
    std::cout << "Digite o primeiro numero: " << "\n";
    std::cin >> Numero01;
    std::cout << "Numero01 = " << Numero01 << "\n";
    std::cout << "Digite o segundo numero: " << "\n";
    std::cin >> Numero02;
    std::cout << "Numero02 = " << Numero02 << "\n";
    Resultado = Numero01 % Numero02;

    std::cout << "O resto da divisao dos 2 numeros: " << Resultado << "\n";
    system("PAUSE");
}