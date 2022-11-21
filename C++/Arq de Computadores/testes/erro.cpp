#include <iostream>
#include <bitset>

using namespace std;

int main (){
    int Qtd_enderecos = 8;
    int mem_prin[Qtd_enderecos];

    for (int a = 1; a <= Qtd_enderecos; a++){
        string binario = bitset<8>(a).to_string(); //converte "a" para binário
        int binario_int = stoi(binario);
        mem_prin[a] = binario_int;
        cout << mem_prin[a];
        cout << endl;
    }
}