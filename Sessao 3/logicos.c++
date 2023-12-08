#include <iostream>

int main()
{
    double Numero;
    bool Result;
    std::cout << "Digite um numero: ";
    std::cin >> Numero;
    std::cout << "True = 1 e False = 0" << std::endl;
    Result = (Numero > 100) &&  (Numero != 0);
    std::cout << "Resultado: " << Result << std::endl;
    system("PAUSE");
}