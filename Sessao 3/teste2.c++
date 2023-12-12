#include <iostream>

int main()
{
    int Num1 = 10, Num2 = 20, Num3, Num4;
    Num3 = Num1++;
    Num4 = ++Num2;
    std::cout << "Num1: " << Num1 << "Num2: " << Num2 << "Num3: " << Num3 << "Num4: " << Num4 << std::endl;
    //------------------------------------------------------------------------------------------------------------
    float Numero01, Numero02;
    //int Resultado;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero01;
    std::cout << "Digite o segundo numero: " << std::endl;
    std::cin >> Numero02;
    //Resultado = Numero01 % Numero02;
    //std::cout << Resultado << std::endl;
    //------------------------------------------------------------------------------------------------------------
    int Numero1 = 10, Numero2 = 20;
    bool Comparacao;
    Comparacao = (Numero1 = Numero2);
    std::cout << Comparacao << std::endl;
	system("PAUSE");

}