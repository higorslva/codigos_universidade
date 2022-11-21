#include <iostream>
#include <string>
#include <conio.h>

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
};

int main ()
{
    int continua, contador, lista, x;
    int const k = 10;
    int x[k];

    continua = 's';
    contador = 2;

    while(continua == 's')
    {
        Calculadora conta;
        double var1, var2;
        cout << "Insira o primeiro numero: ";
        cin >> var1;
        cout << "Insira o segundo numero: ";
        cin >> var2;

        conta.set_n1(var1);
        conta.set_n2(var2);


        contador = contador + 1;
        std::cout << "Tecle 's' se deseja continuar\n";
        continua = getch();
    }
    for (int i=0; i < 10; ++i)
    {
        lista [x] = x + 1;
        std::cout << "[" << x << "] = " << lista [x] << std::endl;
    }

}
