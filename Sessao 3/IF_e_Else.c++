#include <iostream>
#include <string>

int main()
{
	//aqui faltou o _T
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	std::string SenhaDeAcesso = "oi";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		bAcesso = true;
	}
	else
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0);
	}
	bFezSol = true; 
	bCarroPronto = true; 
	bSalarioDepositado = false;
	if (bAcesso)
	{
		if (bFezSol && bCarroPronto && bSalarioDepositado)
		{
			std::cout << "\nVai dar Praia!!!" << std::endl;
		}
		else if (!bSalarioDepositado)
		{
			std::cout << "Nao vai da Praia e salario nao foi Depositado" << "\n";
		}
        else
        {
            std::cout << "Não vai dar Prai e o salario não caiu" << "\n";
        }
	}

	system("PAUSE");
	
}