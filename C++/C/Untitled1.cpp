#include <iostream>
#include <string>
using namespace std;

class soma
{
    public:
        double  n1, n2;

        void somar (double n1, double n2)
        {
            std::cout << "O resultado é igual a: " << n1 + n2 << std::endl;
        }
};

int main()
{
    soma objeto;
    std::cout << "Informe o primeiro numero: ";
    std::cin >> objeto.n1;
    std::cout << "Informe o segundo numero: ";
    std::cin >> objeto.n2;

    objeto.somar(objeto.n1, objeto.n2);

    return 0;
}