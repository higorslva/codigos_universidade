#include <iostream>
#include <string>

using namespace std;

void PrintArray (int a[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j];
        }

        cout << endl;
    }

    cout << endl;
    cout << "Eae corno" << endl;
}

int main ()
{

    int mat1[3][3] {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] {{3, 4, 5}, {1, 7, 9}, {2, 8, 6}};
    int *array1Ptr, *array2Ptr;

    cout << "Matrizes abaixo: " << endl;
    PrintArray(mat1);
    cout << endl;
    PrintArray(mat2);
    cout << endl;

    array1Ptr = &mat1;
    array2Ptr = &mat2;

    cout << "Ponteiros das matrizes abaixo: " << endl;

    cout << &array1Ptr << " << Endere�o ae" << endl;
    cout << &array2Ptr << " << Outro endere�o ae" << endl;

    return 0;

}
