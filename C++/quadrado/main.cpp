#include <iostream>

using namespace std;

int main ()
{
	int tam;
	int vet[tam][tam];

	cout << "Insira um número: ";
	cin >> tam;

	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
	    {
	    	if (i == 0 || i == tam - 1 || j == 0 || j == tam - 1)
	    	{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
