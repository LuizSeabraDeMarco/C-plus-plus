#include <iostream>


int main(){
    char Caracter = '3';
    char Caracter2 = 'k';

    std::cout << "Valor de numero: " << Caracter << std::endl;
    std::cout << "Tamanho do numero: " << sizeof(Caracter) << std::endl;
    std::cout << "Endereco Carregado na Memoria: " << (void *)&Caracter << std::endl;

    std::cout << "Valor de numero: " << Caracter2 << std::endl;
    std::cout << "Tamanho do numero: " << sizeof(Caracter2) << std::endl;
    std::cout << "Endereco Carregado na Memoria: " << (void *)&Caracter2 << std::endl;

    system("PAUSE");
}