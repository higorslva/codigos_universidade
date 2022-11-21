#include <iostream>
#include <string>
//#include <calculadora.h>

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

int main()
{
    while(true)
    {
        Calculadora conta;
        double var1, var2;
        std::cout << "Insira o primeiro numero: ";
        std::cin >> var1;
        std::cout << "Insira o segundo numero: ";
        std::cin >> var2;

        conta.set_n1(var1);
        conta.set_n2(var2);

        int operacao;
        std::cout << "Escolha a Operacao: \n 1 - Somar \n 2 - Subtrair \n 3 - Multiplicar \n 4 - Dividir" << std::endl;
        std::cin >> operacao;

        switch (operacao)
        {
            case 1:
                conta.somar();
                break;

            case 2:
                conta.subtrair();
                break;

            case 3:
                conta.multiplicar();
                break;
            case 4:
                conta.dividir();
                break;

            default:
                std::cout << "Opcao invalida" << std::endl;
        }



        int continuar;
        std::cout << "Deseja fazer outra operacao? \n 1 - Continuar \n 2 - Sair." << std::endl;
        std::cin >> continuar;

        if(continuar == 2)
        {
            std::cout << "Obrigado!\n" << std::endl;
            break;
        }
        else if (continuar != 1)
        {
            std::cout <<  "Comando Invalido" << std::endl;
            return;
        }
    }
    return 0;
}
