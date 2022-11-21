#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

//int binaryNum[8]; // array para armazenar os bits binários

int DecToBin(int bin) //converte para binário
{
    int binaryNum[32];
    int i = 0;
    while (bin > 0) {
        binaryNum[i] = bin % 2;
        bin = bin / 2;
        i++;
    }/*
    for (int j = i - 1; j >= 0; j--){
        cout << binaryNum[j];
    }*/
}
int main()
{
    int Qtd_enderecos = 0;
    int Qtd_bits = 0;
    int a, b;
    int mem_principal[Qtd_enderecos];
    int mem_cache[Qtd_bits];

    //cout << "Digite a quantidade de endereços na memória principal na base 2: ";
    //cin >> Qtd_enderecos;
    Qtd_enderecos = 8;
    Qtd_bits = log2(Qtd_enderecos);
    cout <<"\n\n";
    cout << "Memória principal de " << Qtd_enderecos << " endereços." << endl;
    cout << "Memória cache de " << Qtd_bits << " endereços." << endl;

    cout << "\nMemória Principal:\n" << endl;
    // construção da array e memórias
    for (a = 1; a <= Qtd_enderecos; a++){
        cout << endl;
        mem_principal[Qtd_enderecos] = DecToBin(a);
    }   

    cout << "\nMemória Cache:\n" << endl;
    for (b = 1; b <= Qtd_bits; b++){
        
        cout << endl;
        mem_cache[Qtd_bits] = DecToBin(b);
    }
    for (int i = 0; b < Qtd_bits; i++){
        cout << "Teste" << mem_cache[Qtd_bits] << endl;
    }
}