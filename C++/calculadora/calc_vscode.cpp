//Higor Silva
//Discente em Ciência da Computação - UNIFAP
//Programação I
//higors88@gmail.com
//https://github.com/higorslva/hitech-lab/

#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

int main ()
{
    while (true)
    {
        setlocale (LC_ALL, "Portuguese");

        float a, b, c;
        int op;

        cout << "Calculadora usando Switch Cases v1.0 :D\n" << endl;
        cout << "Operações possíveis por enquanto:\n\n";
        cout << "[1] - Soma\n[2] - Subtração\n[3] - Multiplição\n[4] - Divisão\n[5] - Raiz quadrada\n[6] - Raiz com base x\n[7] - Potência\n[8] - Raízes de uma função do segundo grau\n[9] - Derivada\n\n";
        cout << "Insira o número da operação que deseja: ";
        cin >> op;

        if (op == 8)
        {
            cout << "Calcular raízes de equações 'ax²+bx+c=0'\n";
            cout << "Caso o resultado apareça 'nan', as raízes não existem para essa função" << endl;
            cout << "Insira o valor de a: ";
            cin >> a;
            cout << "Insira o valor de b: ";
            cin >> b;
            cout << "Insira o valor de c: ";
            cin >> c;
        }
        if (op == 5)
        {
            cout << "Insira o valor para achar a raiz quadrada: ";
            cin >> a;
        }
        if (op == 6)
        {
            cout << "Insira o valor para achar a raiz: ";
            cin >> a;
            cout << "Insira o valor a dividir a raiz: ";
            cin >> b;
        }

        if (op <= 4)
        {
            cout << "Insira o primeiro valor: ";
            cin >> a;
            cout << "Insira o segundo valor: ";
            cin >> b;
        }
        if (op == 7)
        {
            cout << "Insira a base: ";
            cin >> a;
            cout << "Insira a potência: ";
            cin >> b;
        }
        if (op == 9)
        {
            int der;
            cout << "Insira a regra da derivação\n";
            cout << "[1] - Derivada de uma constante \n[2] - Derivada de uma potência (a^x)\n[3] - Derivada da função exponencial" << endl;
            cin >> der;

            switch (der)
            {
                case 1:
                    cout << "A derivada de uma constante é sempre zero, parça." << endl;
                    break;
                case 2:
                    int c;
                    cout << "Insira a base: ";
                    cin >> a;
                    cout << "Insira a potência: ";
                    cin >> b;
                    c = b - 1;
                    cout << a << "^" << b << endl;
                    cout << "Primeiro, passamos a potência '" << b <<"' multiplicando, ficando: " << b << " × " << a << endl;
                    cout << "Agora, subtraimos -1 da potência. Como " << b << " - 1  é igual a " << c << ", então nos resta " << b << "×" << a << "^" << c << endl;
                    cout << "A derivada de " << a << "^" << b << " é: " << b * a << "^" << c << endl;
                    cout << "Em outras palavras, " << b * pow(a,c) << endl;
                    break;
                case 3:
                    cout << "Insira a base: ";
                    cin >> a;
                    cout << "A derivada da função exponencial é a^x × ln(a)" << endl;
                    cout << "Logo, temos " << a << "^x × ln(" << a << ")" << endl;
                    break;
                default:
                    cout << "Inválido";
                    break;
            }
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
                cout << "A raiz quadrada de " << a << " = " << sqrt(a) << endl;
                break;
            case 6:
                cout << "A raiz a " << b << "ª de " << a <<" é igual a: " << pow(a, 1/b) << endl;
                break;
            case 7:
                cout << a << " elevado a " << b <<"ª potência é: " << pow(a, b) << endl;
                break;
            case 8:
                 cout << "Raíz x1: " << (-b+sqrt((b*b)-4*a*c))/(2*a) << endl;
                 cout << "Raíz x2: " << (-b-sqrt((b*b)-4*a*c))/(2*a) << endl;
                 break;
            case 9:
                break;
            default:
                cout << "There is nothing to do here, Watson. Encerrando..." << endl;
                break;
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
                //return;
            }
        
        system ("pause");
    }
    return 0;
}
