//Higor Silva
//Discente da turma de 2019 em Ci�ncia da Computa��o - UNIFAP
//Programa��o I
//higors88@gmail.com
//https://github.com/higorslva/hitech-lab/

#include <iostream>
#include <math.h>
#include <locale>
#include <stdlib.h>

using namespace std;

int main ()
{
    while (true)
    {
        setlocale (LC_ALL, "Portuguese");

        float a, b, c;
        int op;

        cout << "Calculadora usando Switch Cases v1.0\n" << endl;
        cout << "Opera��es poss�veis:\n\n";
        cout << "[1] - Soma\n[2] - Subtra��o\n[3] - Multipli��o\n[4] - Divis�o\n[5] - Raiz quadrada\n[6] - Raiz com base x\n[7] - Pot�ncia\n[8] - Ra�zes de uma fun��o do segundo grau\n[9] - Derivada\n\n";
        cout << "Insira o n�mero da opera��o que deseja: ";
        cin >> op;

        if (op == 8)
        {
            cout << "Calcular ra�zes de equa��es 'ax�+bx+c=0'\n";
            cout << "Caso o resultado mostre 'nan', as ra�zes n�o existem para essa fun��o" << endl;
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
            cout << "Insira a pot�ncia: ";
            cin >> b;
        }
        if (op == 9)
        {
            int der;
            cout << "Insira a regra da deriva��o\n";
            cout << "[1] - Derivada de uma constante \n[2] - Derivada de uma pot�ncia (a^x)\n[3] - Derivada da fun��o exponencial" << endl;
            cin >> der;

            switch (der)
            {
                case 1:
                    cout << "N�o h� nada para fazer. A derivada de uma constante � sempre zero." << endl;
                    cout << "d/dx C = 0" << endl;
                    break;

                case 2:
                    int c;
                    cout << "Insira a base: ";
                    cin >> a;
                    cout << "Insira a pot�ncia: ";
                    cin >> b;
                    c = b - 1;
                    cout << "Derivar " << a << "^" << b << endl;
                    cout << "Primeiro, passamos a pot�ncia '" << b <<"' multiplicando, ficando: " << b << " � " << a << endl;
                    cout << "Agora, subtraimos -1 da pot�ncia. Como " << b << " - 1  � igual a " << c << ", ent�o nos resta " << b << "�" << a << "^" << c << endl;
                    cout << "A derivada de " << a << "^" << b << " �: " << b << "�" << a << "^" << c << endl;
                    cout << "Em outras palavras, " << b * pow(a,c) << endl;
                    break;

                case 3:
                    cout << "Insira a base: ";
                    cin >> a;
                    cout << "A derivada da fun��o exponencial � a^x � ln(a)" << endl;
                    cout << "Logo, temos " << a << "^x � ln(" << a << ")" << endl;
                    break;

                default:
                    cout << "Inv�lido" << endl;
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
                cout << "\nA raiz quadrada de " << a << " = " << sqrt(a) << "\n" << endl;
                break;
            case 6:
                cout << "\nA raiz a " << b << "� de " << a <<" � igual a: " << pow(a, 1/b) << "\n" << endl;
                break;
            case 7:
                cout << a << " elevado a " << b <<"� pot�ncia �: " << pow(a, b) << endl;
                break;
            case 8:
                 cout << "Ra�z x1: " << (-b+sqrt((b*b)-4*a*c))/(2*a) << endl;
                 cout << "Ra�z x2: " << (-b-sqrt((b*b)-4*a*c))/(2*a) << endl;
                 break;
            case 9:
                break;
            default:
                cout << "Comando inv�lido." << endl;
                break;
        }
            int continuar;
            cout << "Deseja fazer outra operacao? \n [1] - Sim \n [2] - N�o" << endl;
            cin >> continuar;

            if(continuar == 2)
            {
                cout << "\nObrigado por ajudar este nobre universit�rio :D\n" << endl;
                break;
            }
            else if (continuar != 1)
            {
                cout <<  "Comando Invalido. Saindo..." << endl;
                break;
            }

    system("cls");
    }
    return 0;
}
