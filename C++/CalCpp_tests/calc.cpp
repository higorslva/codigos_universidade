#include <cmath>
#include <locale>
#include <cstdlib>
// for basics operations
#include "./basic/Adicao.h"
#include "./basic/Subtracao.h"
#include "./basic/Multiplicacao.h"
#include "./basic/Divisao.h"
// for algebra
#include "./algebra/algebra.h"
// for calculus
#include "./calculus/Derivada.h"
#include "./calculus/Integrais.h"

using std::cin;
using std::cout;
using std::endl;

int main ()
{
    while (true){
        setlocale (LC_ALL, "Portuguese");
        int op;
        float a, b, c;
        cout << "Calculadora v0.5.15\n" << endl;
        cout << "Operações possíveis:\n\n";
        cout << "[1] - Soma | [2] - Subtração | [3] - Multiplição\n";
        cout << "[4] - Divisão | [5] - Cálculos Algébricos | [6] - Raízes de uma função do segundo grau\n";
        cout << "[7] - Derivada | [8] - Integrais\n";
        cout << "[0] - Sair\n\n";
        cout << "Insira o número da operação que deseja: ";
        cin >> op;
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
        if (op == 1){
            Adicao();
        }else if (op == 2){
            Subtracao();
        }else if (op == 3){
            Multiplicacao();
        }else if (op == 4){
            Divisao();
        }else if (op == 5){
            Algebra();
        }else if (op == 6){
            RaizesEquacao();
        }else if (op == 7){
            Derivada();
        }else if (op ==8){
            Integrais();
        }
        else if(op == 0){
          break;
        }
        int continuar;
        cout << "Deseja fazer outra operacao? \n [1] - Sim \n [2] - Não" << endl;
        cin >> continuar;
        if(continuar == 2){
            break;
        }else if (continuar != 1){
            cout <<  "Comando Invalido. Saindo..." << endl;
            break;
        }
        #ifdef _WIN32
          system("cls");
        #else
          system("clear");
        #endif
    }
    return 0;
}
