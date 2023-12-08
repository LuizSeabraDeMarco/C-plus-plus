#include <iostream>

int main(){
    const int Num_Vidas = 10;
    int TotalVidas;
    TotalVidas =Num_Vidas - 1;
    std::cout << "Total de vidas: "<<  TotalVidas << std::endl;
    std::cout << "Valor de Num_Vidas: "<<  Num_Vidas << std::endl;
    std::cout << "Endereço na memoria: "<< &Num_Vidas << std::endl;

}