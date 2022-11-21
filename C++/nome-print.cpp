#include <iostream>
using namespace std;
int main();

void PrintName(){
    string nome;
    cout << "Insira aqui seu nome: " << endl;
    cin >> nome;
    cout << "Seu nome é: " << nome;
}
int main (){
    
    PrintName();

    return 0;
}