#include <iostream>
#include <string>

using namespace std;

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
        std::cout << "O resultado é igual a: " << n1 + n2 << std::endl;
    }
    void subtrair()
    {
        std::cout << "O resultado é igual a: " << n1 - n2 << std::endl;
    }
    void multiplicar()
    {
        std::cout << "O resultado é igual a: " << n1 * n2 << std::endl;
    }
    void dividir()
    {
        std::cout << "O resultado é igual a: " << n1 / n2 << std::endl;
    }
};

int main()
{
    while(true)
    {
        Calculadora conta;

        double var1, var2;

        std::cout << "Insira o primeiro número: ";
        std::cin >> var1;

        std::cout << "Insira o segundo número: ";
        std::cin >> var2;

        conta.set_n1(var1);
        conta.set_n2(var2);

        int operacao;
        std::cout << "Escolha a Operação: \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão" << std::endl;
        std::cin >> operacao;

        if (operacao == 1)
        {
            conta.somar();
        }
        else if(operacao == 2)
        {
            conta.subtrair();
        }
        else if(operacao == 3)
        {
            conta.multiplicar();
        }
        else if(operacao == 4)
        {
            conta.dividir();
        }
        else
        {
            std::cout << "Opção Inválida" << std::endl;
        }

        int continuar;
        std::cout << "Deseja fazer outra operação? \n 1 - Continuar \n 2 - Sair." << std::endl;
        std::cin >> continuar;

        if(continuar == 2){
            break;
            std::cout << "Obrigado por utilizar a Calculadora em C++" << std::endl;
        }
    }
    return 0;
}
