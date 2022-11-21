#include <iostream>
#include <stdlib.h>

using namespace std;

int main()

{

int x[10];
int i, j, temp;

for (i = 0; i<10; i++)

    {
        std::cout << "Digite um numero: ";
        std::cin >> i ,&x[i];
    }


        for (i=0;i<10; i++)
        for(j=i+1;j<10;j++)
        {
            if (x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }



           std::cout << "Vetor em ordem crescente: \n";
            for(i=0;i<10;i++)
            std::cin >> i ,x[i];

        system("pause");
    return 0;
}
