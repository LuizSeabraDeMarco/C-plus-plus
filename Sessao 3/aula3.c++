#include <iostream>

namespace eixos
{
    int x;
    int y;
    int z;
}

int main(int argc, char * argv[])
{
    eixos::x = 4;
    eixos::y = 5;
    eixos::z = 3;
    std::cout << "X: " << eixos::x << "\nY: " << eixos::y << "\nZ: " << eixos::z << std::endl;
    system("PAUSE");
    return 0;
}