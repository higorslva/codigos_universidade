#include <iostream>
#include <iomanip>

using namespace std;

void PrintArray (int a[] [3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
};

int main ()
{
    int array1[3][3] {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] {{3, 4, 5}, {1, 7, 9}, {2, 8, 6}};

    PrintArray(array1);

    cout << endl;

    PrintArray(array2);

    cout << endl;
    cout << "N sei o que escrever, aaaaaaa" << endl;

    return 0;
}
