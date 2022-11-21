//Calculadora de raízes de uma função do segundo grau
//Wayne Enterpreses 

#include <iostream>
#include <math.h>

using namespace std;

class bhaskara
{
    public:
        float a, b, c, x1, x2;

        void funcao (double a, double b, double c, double x1, double x2)
        {
            cout << "x1: " << (-b+sqrt((b*b)-4*a*c))/(2*a) << endl;
            cout << "x2: " << (-b-sqrt((b*b)-4*a*c))/(2*a) << endl;
        }
};

int main()

{
    cout << "Calculadora para encontrar raizes de uma funcao do segundo grau\n" << endl;
    
    bhaskara object;
    
    cout << "Informe o valor de a: ";
    cin >> object.a;
    
    cout << "Informe o valor de b: ";
    cin >> object.b;
    
    cout << "Informe o valor de c: ";
    cin >> object.c;

    object.funcao(object.a, object.b, object.c, object.x1, object.x2);
    
    return 0;
}