#include <iostream>
#include <iomanip>

int main()
{
    int Numero;
    float Numero2;
    double Numero3;
    Numero2 = 55.56f;
    Numero3 = 32424.23424;
    Numero = 45;
    //Numero1
    std::cout << "Valor do Numero: " << Numero << std::endl;
    std::cout << "Tamanho da variavel: : " << sizeof(Numero) << " Bytes" << std::endl;
    std::cout << "Endereço na memoria: : " << &Numero << std::endl;
    //Numero2
    std::cout << "Valor do Numero 2: " << Numero2 << std::endl;
    std::cout << "Tamanho da variavel 2: : " << sizeof(Numero2) << " Bytes" << std::endl;
    std::cout << "Endereço na memoria 2: : " << &Numero2 << std::endl;
    //Numero3
    std::cout << "Valor do Numero 3: " << std::setprecision(12) << Numero3 << std::endl;
    std::cout << "Tamanho da variavel 3: : " << sizeof(Numero3) << " Bytes" << std::endl;
    std::cout << "Endereço na memoria 3: : " << &Numero3 << std::endl;
    system("PAUSE");
}