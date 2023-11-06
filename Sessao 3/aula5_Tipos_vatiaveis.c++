#include <iostream>

int main()
{
    int Numero;
    Numero = 45;
    std::cout << "Valor de numero: " << Numero << std::endl;
    std::cout << "Tamanho do numero: " << sizeof(Numero) << std::endl;
    std::cout << "Endereco Carregado na Memoria: " << &Numero << std::endl;
    system("PAUSE");
}