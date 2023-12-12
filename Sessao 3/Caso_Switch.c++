#include <iostream>

int main()
{
    int Num1, Num2;
    char Operacao;
    std::cout << "Digite um numero: ";
    std::cin >> Num1;
    std::cout << "Digite outro numero: ";
    std::cin >> Num2;
    std::cout << "\nQual operacao deseja executar: \n+ Adicao \n- Subtracao \n * multiplicacao \n / divisao \n% resto da divisao ";
    std::cout << "\nDigite a sua opcao: ";
    std::cin >> Operacao;
    switch (Operacao)
    {
        case '+': std::cout << "\nSoma de Num 1 e Num2 = " << Num1 + Num2;
            break;
        case '-': std::cout << "\nSubtracao de Num 1 e Num2 = " << Num1 - Num2;
            break;
        case '*': std::cout << "\nMultiplicacao de Num 1 e Num2 = " << Num1 * Num2;
            break;
        case '/': std::cout << "\nDivisao de Num 1 e Num2 = " << Num1 / Num2;
            break;
        case '%': std::cout << "\nResto da divisao de Num 1 e Num2 = " << Num1 % Num2;
            break;
        default:
        std::cout << "\nVoce digitou um valor nao valido";
            break;
    }
}