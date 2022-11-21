#include <iostream>

typedef struct pessoa
{
    int idade;
    char nome [30];
} pessoa;

using namespace std;

int main ()
{
    pessoa vetor[10];

    cout << "Insira o nome: ";
    cout << "Insira a idade: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> vetor[i].idade;
        cin >> vetor[i].nome;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Idade: " << vetor[i].idade;
        cout << "Nome: " << vetor[i].nome;
    }

	return 0;
}
