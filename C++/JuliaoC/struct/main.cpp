#include <iostream>

using namespace std;

int main ()
{
    int op;
    cout << "Teste de menu" << endl;
    cout << "[1] - Inserir\n[2] - Excluir\n[3] - Pesquisar\n[4] - Limpar\n[5] - Sair" << endl;
    cin >> op;

    switch (op);
    {
    case 1:
        cout << "Comando 'Inserir' selecionado" << endl;
        break;
    case 2:
        cout << "Comando 'Excluir' selecionado" << endl;
        break;
    case 3:
        cout << "Comando 'Pesquisar' selecionado" << endl;
        break;
    case 4:
        cout << "Comando 'Limpar' selecionado" << endl;
        break;
    case 5:
        cout << "Comando 'Sairir' selecionado" << endl;
        break;
    }
    return 0;
}
