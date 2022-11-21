#include <iostream>
#define linha 10
#define coluna 10

using namespace std;

int main ()
{
	int i, j;
	int lugar[linha][coluna];
	
	char areavip[30];
	char areasemivip[50];
	char areapadrao[20];
	
	float lugares[linha][coluna];
	
	cout << "Sistema de bilheteria P.I.C.A" << endl;
	cout << "Ponto Inevitavel de Compra Aleatoria" << endl;
	
	cout << "Os lugares abaixo estao disponiveis:\n" << endl;
	for (i=0; i < linha; i++)
	{
		for (j=0; j < linha; j++)
		{
			cout << "[" << " x " << "]";
		}
		
		cout << endl;
	}
	
	
	return 0;
}
