#include <iostream>
#include <cstdlib>
#define MAXSIZE 10

using namespace std;

int main()
{
  int a[MAXSIZE];
  int i, N, power;
  float x, polySum;
  cout << "Insira a ordem do polinômio: ";
  cin >> N;
  cout << "Insira o valor de x: ";
  cin >> x;
    
  cout << "Insira " << N + 1 << " coeficientes:" << endl;
  for (i = 0; i <= N; i++) {
    scanf("%d", & a[i]);
  }
  polySum = a[0];
  for (i = 1; i <= N; i++) {
    polySum = polySum * x + a[i];
  }
power = N;
 
    cout << "O polinômio dado é: ";
    for (i = 0; i <= N; i++)
    {
        if (power < 0)
        {
            break;
        }
        if (a[i] > 0 & i!=0)
            cout << " + ";
        else if (a[i] < 0)
            cout << " - ";
        else
            cout << " ";
        printf("%dx^%d  ", abs(a[i]), power--);
  }
  cout << "\nA soma do polinomio é: " << polySum;
}
