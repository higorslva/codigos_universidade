#include <iostream>
#include <math.h>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;

void RaizesEquacao(){
    float a, b, c;
    cout << "Calcular raízes de equações 'ax²+bx+c=0'\n";
    cout << "(Caso o resultado mostre 'nan', as raízes não existem para essa função)" << endl;
    cout << "Insira o valor de a: ";
    cin >> a;
    cout << "Insira o valor de b: ";
    cin >> b;
    cout << "Insira o valor de c: ";
    cin >> c;
    cout << "Resultado: " << endl;
    cout << "Raíz x1: " << (-b+sqrt((b*b)-4*a*c))/(2*a) << endl;
    cout << "Raíz x2: " << (-b-sqrt((b*b)-4*a*c))/(2*a) << endl;
}
