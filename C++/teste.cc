#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

int main (void)
{
    setlocale (LC_ALL, "Portuguese");

    float a, b, raiz;
    int op;

    cout << "Calculadora usando Switch Cases :D\n" << endl;
    cout << "Insira a operação desejada:\n";
    cout << "[1] - Soma, [2] - Subtração, [3] - Multiplição, [4] - Divisão, [5] - Raiz quadrada, [6] - Potência\n";
    cin >> op;
    
    if (op >= 7)
    {
        cout << "Opção invalida. Encerrando...";
        return 0;
    }
	if (op == 5)
	{
		cout << "Insira o valor para achar a raiz quadrada: ";
    	cin >> raiz;
	}
    
    if (op <= 4)
    {
    	cout << "Insira o primeiro valor: ";
    	cin >> a;
        cout << "Insira o segundo valor: ";
        cin >> b;
    }
    if (op == 6)
    {
    	cout << "Insira a base: ";
    	cin >> a;
    	cout << "Insira a potência: ";
        cin >> b;
	}


    switch (op)
    {
        case 1:
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case 2:
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case 3:
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case 4:
            cout << a << " / " << b << " = " << a / b << endl;
            break;
        case 5:
            cout << "A raiz quadrada de " << raiz << " = " << sqrt(raiz) << endl;
            break;
        case 6:
            cout << a << " elevado a " << b <<"ª potência é: " << pow(a, b) << endl;
            break;
        default:
            cout << "Comando invalido :c" << endl;
            break;
    }   
    system ("pause");
    return 0;
}

