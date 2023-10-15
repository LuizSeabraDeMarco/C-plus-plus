#include <iostream>

#define PauseText "PAUSE"
#define PuleLinha "\n"
#define Retorne return

int main()
{
    typedef char caractere;
    caractere  Letra = 'C';
    std::cout << Letra << PuleLinha;
    system(PauseText);
    Retorne 0;
}