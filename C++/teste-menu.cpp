#include <iostream>

using namespace std;

void menu(){
	int opt;

	cout << "Teste de menuzinho" << endl;
	cout << "1 - Teste1" << endl;
	cout << "2 - Teste2" << endl;
	cout << "3 - Teste3" << endl;

	cin >> opt;
	do{
		if (opt == 1){
			cout << "Hey, teste 1" << endl;
		}else if (opt == 2){
			cout << "Hey, teste 2" << endl;
		}else if (opt == 3){
			cout << "Hey, teste 4" << endl;
		}else{
			cout << "Opção inválida" << endl;
		}
	}while(opt!=4);
}
int main(){

	cout << "Teste" << endl;
	menu();

}