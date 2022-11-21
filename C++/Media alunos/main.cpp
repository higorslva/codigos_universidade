#include <iostream>
#include <ostream>

using namespace std;

int main ()
{
  int x, y, media;
  cout << "Calculadora de média aritmética" << endl;
  cout << "Insira um número: " << endl;
  cin >> x;
  
  cout << "Insira outro número: " << endl;
  cin >> y;
 
  media = (x + y)/2;
  
  cout << "A média de " << x << " e " << y << " é igual a " << media << endl;
  return 0;
}
