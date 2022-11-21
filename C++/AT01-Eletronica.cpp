#include <iostream>
#include <cstdio>
#include <bitset>
#include <typeinfo>

using namespace std;

int main(){
    FILE *arq;
    char Linha[100];
    char *result;
    int i;
    int num;
    
    arq = fopen("teste.txt", "rt");
    if (arq == NULL){
        cout << "Problema na leitura do arquivo" << endl;
    }

    i = 1;

    while(!feof(arq)){
        result = fgets(Linha, 100, arq);
        if (result){  // Se foi possível ler
	      printf("Linha %d : %s",i,Linha);
        cout << "Linha " << Linha << ": " << num << endl;
      }
    i++;
    }
    fclose(arq);

    cout << typeid(Linha).name() << endl;
    
    bitset<8> bs2(num);
    cout << "Decimal: " << num << endl;
    cout << "Binário:  " << bs2 << endl;

    return EXIT_SUCCESS;
}
