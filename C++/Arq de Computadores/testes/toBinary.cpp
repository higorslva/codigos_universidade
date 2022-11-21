#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int i;
    cout << "Insira um número: ";
    cin >> i;

    string binary = bitset<8>(i).to_string(); //to binary
    //cout<<binary<<"\n";
    string j = binary;
    cout << j;
    return 0;
}