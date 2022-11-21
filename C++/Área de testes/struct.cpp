#include <iostream>
#include <cstdlib>

using namespace std;

struct data
{
	int dia;
	int mes;
	int ano;
};

int main (void)
{
	data hoje;
	hoje.dia = 23;
	hoje.mes = 9;
	hoje.ano = 2019;
	cout << "Hoje e " << hoje.dia << "/" <<hoje.mes<<"/"<<hoje.ano<< endl;
	system("pause");
	return EXIT_SUCCESS;
}
