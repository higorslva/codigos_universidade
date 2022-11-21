#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main ();
int main (void)

{
    {
        int a, b, temp;
        int contador = a;

        while (contador < 10)
        {

           int x[10];
            for (a = 0; a < 10; a++)
            {
                cout << "Digite um número: " << endl;
                cin >> a, &x[a];
            }

            for (a = 0; a < 10; a++)
            for (b = a + 1; b < 10; b++)
            {
                if (x[a] > x [b])
                {
                    temp = x[a];
                    x[a] = x[b];
                    x[b] = temp;
                }
            }
        }
    }

    cout << "Vetor em ordem crescente: \n";
    for (int a = 0; a < 10; a++)
    cout << a;

    //system ("pause");
    return 0;
}