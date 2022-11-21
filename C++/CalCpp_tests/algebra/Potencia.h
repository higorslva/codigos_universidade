#include <math.h>
#include <stdlib.h>
#include <iostream>

void Potencia(){
  float a, b;
  std::cout << "Insira a base: ";
  std::cin >> a;
  std::cout << "Insira a potência: ";
  std::cin >> b;
  std::cout << a << "^" << b <<" = " << pow(a, b) << std::endl;
}
