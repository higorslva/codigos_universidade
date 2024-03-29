//Higor Silva
//Discente da turma de 2019 em Ciência da Computação - UNIFAP
//Programação I
//higors88@gmail.com
//https://github.com/higorslva/hitech-lab/

#include <iostream>
#include <math.h>
#include <locale>
#include <stdlib.h>

using namespace std;

void RaizesEquacao(){
    float a, b, c;
    cout << "Calcular raízes de equações 'ax²+bx+c=0'\n";
    cout << "Caso o resultado mostre 'nan', as raízes não existem para essa função" << endl;
    cout << "Insira o valor de a: ";
    cin >> a;
    cout << "Insira o valor de b: ";
    cin >> b;
    cout << "Insira o valor de c: ";
    cin >> c;
}
void RaizQuadrada(){
    float a;
    cout << "Insira o valor para achar a raiz quadrada: ";
    cin >> a;
    cout << "\nA raiz quadrada de " << a << " = " << sqrt(a) << "\n" << endl;
}
void RaizBaseX(){
    float a, b;
    cout << "Insira o valor para achar a raiz: ";
    cin >> a;
    cout << "Insira o valor a dividir a raiz: ";
    cin >> b;
    cout << "\nA raiz a " << b << "ª de " << a <<" é igual a: " << pow(a, 1/b) << "\n" << endl;
}
int main ()
{
    while (true)
    {
        setlocale (LC_ALL, "Portuguese");
        int op;
        float a, b, c;
        cout << "Calculadora usando Switch Cases v1.0\n" << endl;
        cout << "Operações possíveis:\n\n";
        cout << "[1] - Soma | [2] - Subtração | [3] - Multiplição\n";
        cout << "[4] - Divisão | [5] - Raiz quadrada | [6] - Raiz com base x\n";
        cout << "[7] - Potência | [8] - Raízes de uma função do segundo grau | [9] - Derivada\n\n";
        cout << "Insira o número da operação que deseja: ";
        cin >> op;

        if (op == 8)
        {
            RaizesEquacao();
        }else if (op == 5){
            RaizQuadrada();
        }else if (op == 6){
            RaizBaseX();
        }else if (op <= 4){
            cout << "Insira o primeiro valor: ";
            cin >> a;
            cout << "Insira o segundo valor: ";
            cin >> b;
        }else if (op == 7)
        {
            cout << "Insira a base: ";
            cin >> a;
            cout << "Insira a potência: ";
            cin >> b;
        }else if (op == 9)
        {
            int der;
            cout << "Insira a regra da derivação\n";
            cout << "[1] - Derivada de uma constante \n[2] - Derivada de uma potência (a^x)\n[3] - Derivada da função exponencial" << endl;
            cin >> der;

            switch (der)
            {
                case 1:
                    cout << "Não há nada para fazer. A derivada de uma constante é sempre zero." << endl;
                    cout << "d/dx C = 0" << endl;
                    break;

                case 2:
                    int c;
                    cout << "Insira a base: ";
                    cin >> a;
                    cout << "Insira a potência: ";
                    cin >> b;
                    c = b - 1;
                    cout << "Derivar " << a << "^" << b << endl;
                    cout << "Primeiro, passamos a potência '" << b <<"' multiplicando, ficando: " << b << " * " << a << endl;
                    cout << "Agora, subtraimos -1 da potência. Como " << b << " - 1  é igual a " << c << ", então nos resta " << b << "*" << a << "^" << c << endl;
                    cout << "A derivada de " << a << "^" << b << " é: " << b << "*" << a << "^" << c << endl;
                    cout << "Em outras palavras, " << b * pow(a,c) << endl;
                    break;

                case 3:
                    cout << "Insira a base: ";
                    cin >> a;
                    cout << "A derivada da função exponencial é a^x * ln(a)" << endl;
                    cout << "Logo, temos " << a << "^x * ln(" << a << ")" << endl;
                    break;

                default:
                    cout << "Inválido" << endl;
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
            
            case 6:
               
                break;
            case 7:
                cout << a << "^" << b <<" = " << pow(a, b) << endl;
                break;
            case 8:
                 cout << "Raíz x1: " << (-b+sqrt((b*b)-4*a*c))/(2*a) << endl;
                 cout << "Raíz x2: " << (-b-sqrt((b*b)-4*a*c))/(2*a) << endl;
                 break;
            case 9:
                break;
            default:
                cout << "Comando inválido." << endl;
                break;
        }
            int continuar;
            cout << "Deseja fazer outra operacao? \n [1] - Sim \n [2] - Não" << endl;
            cin >> continuar;

            if(continuar == 2)
            {
                cout << "\nObrigado por ajudar este nobre universitário :D\n" << endl;
                break;
            }
            else if (continuar != 1)
            {
                cout <<  "Comando Invalido. Saindo..." << endl;
                break;
            }

    system("clear");
    }
    return 0;
}
