#include <iostream>
//#include <conio.h>

using namespace std;

int main ()
{
    float nota1, nota2, media;
    char nome[60];
    int med[5];//{i};

    for (int i = 0; i < 5; i++)
    {
        cout << "Insira o nome do aluno: ";
        cin >> nome;

        cout << "Primeira nota: ";
        cin >> nota1;
        cout << "Segunda nota ";
        cin >> nota2;

         media = (nota1 + nota2)/2;

        cout << "\n" << endl;
        cout << "Aluno: " << nome << endl;
        cout << "Nota: " << media << endl;
        cout << endl;
    }
    cout << "Media da turma: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << med[i]/5 << endl;
    }
}
