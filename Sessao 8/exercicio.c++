#include <iostream>
#include <math.h>

double num1;
double num2;
int main()
{
	std::cout << "Numero 1: \n";
	std::cin >> num1;
    std::cout << "Numero 2: \n";
	std::cin >> num2;
    std::cout << "A soma desses numeros: " << num1 + num2 << std::endl;
    std::cout << "A subtracao desses numeros: " << num1 - num2 << std::endl;
    std::cout << "A multiplicacao desses numeros: " << num1 * num2 << std::endl;
    std::cout << "A divisao desses numeros: " << num1 / num2 << std::endl;
    std::cout << "A raiz quadrada de num1: " << sqrt(num1) << " e de num2: " << sqrt(num2) << std::endl;
    std::cout << "A potencia desses nuumeros: " <<  pow(num1, 2) << " e de num2: " << pow(num2, 2) << std::endl;

    return 0;
}
