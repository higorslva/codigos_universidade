#include <iostream>

using namespace std;

int main ()
{
	int tam;
	
	cout << "Insira um numero: " << endl;
	cin >> tam;
	
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
