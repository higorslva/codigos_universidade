#include <iostream>
#include <math.h>

void Derivada(){
  int der;
  float a, b;
  std::cout << "Insira a regra da derivação\n";
  std::cout << "[1] - Derivada de uma constante \n[2] - Derivada de uma potência (a^x)\n[3] - Derivada da função exponencial" << std::endl;
  std::cin >> der;

  switch (der){
      case 1:
          std::cout << "Não há nada para fazer. A derivada de uma constante é sempre zero." << std::endl;
          std::cout << "d/dx C = 0" << std::endl;
          break;

      case 2:
          int c;
          std::cout << "Insira a base: ";
          std::cin >> a;
          std::cout << "Insira a potência: ";
          std::cin >> b;
          c = b - 1;
          std::cout << "Derivar " << a << "^" << b << std::endl;
          std::cout << "Primeiro, passamos a potência '" << b <<"' multiplicando, ficando: " << b << " * " << a << std::endl;
          std::cout << "Agora, subtraimos -1 da potência. Como " << b << " - 1  é igual a " << c << ", então nos resta " << b << "*" << a << "^" << c << std::endl;
          std::cout << "A derivada de " << a << "^" << b << " é: " << b << "*" << a << "^" << c << std::endl;
          std::cout << "Em outras palavras, " << b * pow(a,c) << std::endl;
          break;

      case 3:
          std::cout << "Insira a base: ";
          std::cin >> a;
          std::cout << "A derivada da função exponencial é a^x * ln(a)" << std::endl;
          std::cout << "Logo, temos " << a << "^x * ln(" << a << ")" << std::endl;
          break;

      default:
          std::cout << "Inválido" << std::endl;
          break;
  }
}
