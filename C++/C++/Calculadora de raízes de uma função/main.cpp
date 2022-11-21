//Calculadora de raízes de uma função do segundo grau
//Wayne Enterprises 

#include <iostream>
#include <math.h>

using namespace std;

class bhaskara
{
    public:
        float a, b, c, x1, x2;

        void funcao (double a, double b, double c, double x1, double x2)
        {
            std::cout << "x1: " << (-b+sqrt((b*b)-4*a*c))/(2*a) << std::endl;
            std::cout << "x2: " << (-b-sqrt((b*b)-4*a*c))/(2*a) << std::endl;
        }
};

int main()

{
    printf("Calculadora para encontrar raizes de uma funcao do segundo grau\n");
    printf("higorslva\n");
    printf("Quem roubar e' corno kkkkkk\n\n");
    
    bhaskara object;
    
    std::cout << "Informe o valor de a: ";
    std::cin >> object.a;
    
    std::cout << "Informe o valor de b: ";
    std::cin >> object.b;
    
    std::cout << "Informe o valor de c: ";
    std::cin >> object.c;

    object.funcao(object.a, object.b, object.c, object.x1, object.x2);
    
    return 0;
}