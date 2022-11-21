#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <bitset>

using namespace std;

int main (){
    int Qtd_enderecos = 8;
    //cout << "Insira a quantidade de endereços da memória principal: " << endl;
    //cin >> Qtd_enderecos;
    int Qtd_bits = log2(Qtd_enderecos);
    int aux = Qtd_bits - 1;
    int mem_prin[Qtd_enderecos];
    int mem_cache[Qtd_bits];


    cout << "Memória principal de " << Qtd_enderecos << endl;
    cout << "Memória cache de " << Qtd_bits << endl;

    for (int a = 1; a <= Qtd_enderecos; a++){
        string binario = bitset<8>(a).to_string(); //converte "a" para binário e armazena em uma string
        int binario_int = stoi(binario); // converte a string em int
        mem_prin[a] = binario_int; // armazena o int no vetor
    }
    for (int b = 1; b <= Qtd_bits; b++){
        string binario = bitset<8>(b).to_string(); //converte "b" para binário e armazena em uma string
        int binario_int = stoi(binario); // converte a string em int
        mem_cache[b] = binario_int; // armazena o int no vetor
    }
    for (int c = 1; c <= Qtd_enderecos; c++){
        string binario = bitset<8>(c).to_string();
        //cout << binario << endl;
        int aux2 = 8 - aux;
        string r = binario.substr(aux2, Qtd_bits);
        cout << "Memória " << binario << " armazenada em " << r << endl;
        if (r == "01" && binario == "01"){
            cout << "hit" << endl;
        }else if (r == "00" && binario == "00"){
            cout << "hit" << endl;
        }else if (r == "10" && binario == "10"){
            cout << "hit" << endl;
        }else if (r == "11" && binario == "11"){
            cout << "hit" << endl;
        }else{
            cout << "Miss" << endl;
        }

    }

}