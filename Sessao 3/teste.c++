#include <iostream>

int main()
{
    int Numero[5];
    for (int i=0; i < 5; i++) 
    {
    std::cout << "Digite o Numero" << i+1 << ": " << std::endl;
    std::cin >> Numero[i]; 
    } 
}