#include <iostream>

using namespace std;

int main()
{
    int a;
    int *aPtr;
    cout << "Digite um n�mero: " << endl;
    cin >> a;

    aPtr = &a;

    cout << "Endere�o de mem�ria: " << &a << endl;
    return 0;
}
