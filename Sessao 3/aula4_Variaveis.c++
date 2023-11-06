#include <iostream>
#include <tchar.h>

int main()
{
    int numVidas = 5;
    int Score = 1350;
    std::cout << "*******INICIO DO JOGO*******\n";
    std::cout << "Vidas Jogador: " << numVidas << std::endl;
    std::cout << "Score: " << Score << std::endl;
    std::cout << "Tamanho da variavel Score: " << sizeof(Score) << "\n";
    std::cout << "Endereço que numVidas ocupa na memoria RAM: " << &numVidas << std::endl;
    std::cout << "Endereço de Score ocupa na memoria RAM: " << &Score << std::endl;
    std::cout << "*******DURANTE DO JOGO*******\n";
    Score = Score + 150; //Pontuação += 150
    numVidas = numVidas - 1; //numVidas -= 1
    std::cout << "Vidas Jogador: " << numVidas << std::endl;
    std::cout << "Score: " << Score << std::endl;
    std::cout << "************************" << std::endl;
    system("PAUSE");
    return 0;
}