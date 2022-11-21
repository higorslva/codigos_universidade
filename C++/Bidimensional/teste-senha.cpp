#include <iostream>
using namespace std;
int main (){

    char* senha = "SENHAABC";
    char* senha_control;
    cout << "Insira a senha: ";
    cin >> senha_control;
    if (senha_control == senha){
        cout << "Senha correta" << endl;
    }else{
        cout << "Senha incorreta" << endl;
    }
    return 0;
}