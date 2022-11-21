#include <iostream>
//#include "IntegralSimples.h"
#include "IntegralDupla.h"
//#include "IntegralTripla.h"

void Integrais(){
  int option;
  std::cout << "Selecione a integral\n";
  std::cout << "[1] - Integral Simples \n[2] - Integral Dupla\n[3] - Integral Tripla" << std::endl;
  std::cin >> option;

  switch (option){
    case 1:
      //IntegralSimples();
      std::cout << "Ainda não implementado :(" << std::endl;
      break;
    case 2:
      IntegralDupla();
      break;
    case 3:
    //IntegralTripla();
    std::cout << "Ainda não implementado :(" << std::endl;
    break;

    default:
      std::cout << "Inválido" << std::endl;
      break;
  }
}
