#include <iostream>

using namespace std;

int main()
{
    int a;
    int *aPtr;
    cout << "Digite um número: " << endl;
    cin >> a;

    aPtr = &a;

    cout << "Endereço de memória: " << &a << endl;
    return 0;
}
