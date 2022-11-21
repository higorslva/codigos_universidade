#include <iostream>

using namespace std;

int main ()
{
	char nome[60];
	int alunos[5];
	int idade;
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "Insira o nome do sujeito: ";
			gets (nome);
			
			cout << "Insira a idade: ";
			cin >> idade;
		}
		
			cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
	}
	

	
	return 0;
}
