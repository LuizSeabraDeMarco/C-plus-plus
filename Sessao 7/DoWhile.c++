#include <iostream>

int main()
{
    int escolha = 0;
    do
    {  
        std::cout << "**************** --Tickets Cinemas-- ****************" << std::endl;
        std::cout << "1 - Para meia entrada \n";
        std::cout << "2 - Para Inteira \n";
        std::cout << "3 - Sair \n";

        std::cout << "\nEscolha a sua opcao: ";
        std::cin >> escolha;
        switch (escolha)
        {
        case 1:
            std::cout << "Meia entrada comprada\n";
            break;
        case 2:
            std::cout << "Entrada Inteira comprada\n";
            break;
        case 3:
            std::cout << "Saindo do Menu...\n";
            break;
        default:
            std::cout << "Numero nao valido!\n";
            break;
        }

    } while (escolha != 3);
    return 0;
    system("PAUSE");
}