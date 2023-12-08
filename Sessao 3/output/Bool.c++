#include <iostream>

int main(){
    //Oque não é 0 ou false é verdadeiro
    bool bAchou;

    bAchou = true;
    std::cout << "Valor de bAchou: " << bAchou << std::endl;
    bAchou = 1;
    std::cout << "Valor de bAchou: " << bAchou << std::endl;
    bAchou = 0;
    std::cout << "Valor de bAchou: " << bAchou << std::endl;
    bAchou = false;
    std::cout << "Valor de bAchou: " << bAchou << std::endl;
    bAchou = 'd';
    std::cout << "Valor de bAchou: " << bAchou << std::endl;
    bAchou = "aYYGhu88";
    std::cout << "Valor de bAchou: " << bAchou << std::endl;
}