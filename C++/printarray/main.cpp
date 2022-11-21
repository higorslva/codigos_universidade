#include <iostream>

using namespace std;

void calc();
int vetor[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main()
{
    calc();
    return 0;
}

void calc(){

    for (int i=0;i<10;i++){
        cout << vetor[i]*10 << endl;
}
}
