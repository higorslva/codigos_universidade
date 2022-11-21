#include <iostream>
#include <locale>
#define linha 10
#define coluna 10

using namespace std;

void printArray (const int a[] [coluna])
{
	for (int i = 0; i < linha; i++)
	{
		for (int j = 0; j < coluna; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void lugaresArray (const int a[] [coluna])
{
	for (int i = 0; i < linha; i++)
	{
		for (int j = 0; j < coluna; j++)
		{
			cout << "[" << i << j << "]" << endl;
		}
		cout << endl;
	}
}
int main ()
{
	int array1[linha][coluna] = {};
	
	cout << "Os seguintes lugares estão livres" << endl;
	printArray( array1 );
	
	return 0;
}


