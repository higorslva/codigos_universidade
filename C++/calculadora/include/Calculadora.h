#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <iostream>

class Calculadora
{
private:
    double n1, n2;

public:
    double get_n1()
    {
        return n1;
    }
    void set_n1(double valor)
    {
        n1 = valor;
    }
    double get_n2()
    {
        return n2;
    }
    void set_n2(double valor)
    {
        n2 = valor;
    }

    void somar()
    {
        std::cout << "O resultado e igual a: " << n1 + n2 << std::endl;
    }
    void subtrair()
    {
        std::cout << "O resultado e igual a: " << n1 - n2 << std::endl;
    }
    void multiplicar()
    {
        std::cout << "O resultado e igual a: " << n1 * n2 << std::endl;
    }
    void dividir()
    {
        std::cout << "O resultado e igual a: " << n1 / n2 << std::endl;
    }
};
#endif
