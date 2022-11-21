#include <iostream>
#include <string>

using namespace std;

class calc
{
private:
    double n1, n2;

public:
     double get_n1 ()
    {
        return n1;
    }
    void set_n1 (double valor)
    {
        n1 = valor;
    }
    double get_n2 ()
    {
        return n2;
    }
    void set_n2 (double valor)
    {
        n2 = valor;
    }

    void somar (double n1, double n2)
    {
        std::cout << "O resultado e igual a: " << n1 + n2 << std::endl;
    }
    void subtrair (double n1, double n2)
    {
        std::cout << "O resultado e igual a: " << n1 - n2 << std::endl;
    }
    void multiplicar (double n1, double n2)
    {
        std::cout << "O resultado e igual a: " << n1 * n2 << std::endl;
    }
    void dividir (double n1, double n2)
    {
        std::cout << "O resultado e igual a: " << n1 / n2 << std::endl;
    }

};

int main ()
{
    while(true)
    {
        calc objeto;
        int x;

        float n1, n2;
         std::cout << "Digite o primeiro numero: ";
        std::cin >> n1;

        std::cout << "Digite o segundo numero: ";
        std::cin >> n2;

        std::cout << "Escolha a operacao:\n1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao" << std::endl;
        std::cin >> x;

         if (x == 1)
            {
            objeto.somar (objeto.get_n1(), objeto.get_n2());
            }
        else if (x == 2)
        {
            objeto.subtrair (objeto.get_n1(), objeto.get_n2());
        }
        else if (x == 3)
        {
            objeto.multiplicar (objeto.get_n1(), objeto.get_n2());
        }
        else if (x == 4)
        {
            objeto.dividir (objeto.get_n1(), objeto.get_n2());
        }
        else
        {
            std::cout << "opcao invalida";
        }
           

        int continuar, s, n;
        std::cout << "Deseja continuar? (s/n)" <<std::endl;
        std::cin >> continuar;

        if (continuar == n)
        {
            break;
        }
        else if (continuar == s)
        {
            
        }

    }
    return 0;   
}