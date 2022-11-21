#include <iostream>
#include <iomanip>

using namespace std;

//prot�tipos de fun��o
void selectionSort( int [], const int, bool (*)(int, int));
void swap(int * const, int * const);
bool ascending(int, int );
bool descending(int, int );

int main ()
{
    const int arraySize = 10;
    int order; // 1 = crescente, 2 = decrescente
    int counter; // �ndice do array
    int a[ arraySize ] = {};

    cout << "Digite 1 para ordem crescente,\nDigite 2 para ordem decrescente: ";
    cin >> order;
    cout << "\nDados na ordem original\n";

    //gera sa�da do array original
    for (counter = 0; counter < arraySize; counter++)
    {
        cout << setw( 4 ) << a[counter];
    }
    if (order == 1)
    {
        selectionSort(a, arraySize, ascending);
        cout << "\nDados na ordem crescente\n";
    }
    else
    {
        selectionSort(a, arraySize, descending);
        cout << "\nDados na ordem decrescente\n";
    }
    // gera a sa�da do array classificado
    for (counter = 0; counter < arraySize; counter++)
    {
        cout << setw(4) << a[counter];
    }
    cout << endl;
    return 0;
}

/* classifica��o por sele��o para m�ltiplos prop�sitos. o par�metro compare � um ponteiro para
 a fun��o compare que determina a ordem de classifica��o */

 void selectionSort (int work [], const int size, bool (*compare)(int, int))
 {
     int maiorOuMenor;
     for (int i = 0; i < size -1; i++)
     {
         maiorOuMenor = i;
         for (int index = i + 1; index < size; index++)
         {
             if (!(*compare)(work [maiorOuMenor], work [index]))
             {
                 maiorOuMenor = index;
                 swap ( &work[ maiorOuMenor], &work [i]);
             }
         }
     }
 } // fim da fun��o selectionSort
 //-------------------------------------------------------
// troca os valores nas posi��es da mem�ria para as quais
// element1Ptr e element2Ptr apontem
 void swap( int * const element1Ptr, int * const element2Ptr)
 {
     int hold = *element1Ptr;
     *element1Ptr = *element2Ptr;
     *element2Ptr = hold;
 } // fim da fun��o swap

 bool ascending (int a, int b)
 {
     return a < b;
 }

 bool descending ( int a, int b)
 {
     return a > b;
 }
