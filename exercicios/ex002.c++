#include <iostream>;

namespace eixos
{
    int NumComputadores;
    int SerialComputadores;
}
int main()
{
    eixos::NumComputadores = 100;
    eixos::SerialComputadores = 11111;
    std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
    std::cout << "NumComputadores: " << eixos::NumComputadores << std::endl;
    std::cout << "SerialComputadores: " << eixos::SerialComputadores << std::endl;
    std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
    system("PAUSE");
    return 0;
}