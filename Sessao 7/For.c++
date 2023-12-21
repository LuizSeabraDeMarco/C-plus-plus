#include <iostream>

int main() {
  int soma = 0;
  for (int i = 0; i <= 100; i++) {
    soma += i;
  }

  std::cout << "A soma dos numeros de 0 a 100 vale: " << soma << std::endl;

  return 0;
}
