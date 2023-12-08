#include <iostream>

int main()
{
    float Numero01, Numero02, Numero03;
    float Resultado;
    std::cout << "Digite o primeiro numero: " << "\n";
    std::cin >> Numero01;
    std::cout << "Digite o segundo numero: " << "\n";
    std::cin >> Numero02;
    std::cout << "Digite o terceiro numero: " << "\n";
    std::cin >> Numero03;
    Resultado = (Numero01 + Numero02  + Numero03) / 3;

    std::cout << "O resto da divisao dos 2 numeros: " << Resultado << "\n";
    system("PAUSE");
}