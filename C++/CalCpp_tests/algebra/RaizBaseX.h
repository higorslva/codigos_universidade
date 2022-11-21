#include <iostream>
#include <stdlib.h>
#include <math.h>

void RaizBaseX(){
    float a, b;
    std::cout << "Insira o valor para achar a raiz: ";
    std::cin >> a;
    std::cout << "Insira o valor a dividir a raiz: ";
    std::cin >> b;
    std::cout << "\nA raiz a " << b << "ª de " << a <<" é igual a: " << pow(a, 1/b) << "\n" << std::endl;
}
