#include <cstdio> 
#include <iostream>  

using namespace std;  
int main()  
{  
	int linha, i, j;  
	cout << "Digite a altura da piramide: ";  
	cin >> linha;
	cout << endl;
	 
	for (i = 1; i <= linha; i++)  
	{  
		for (j = 1; j <= i; j++)
		{  
			cout << "*";  
		}
    
		cout <<"\n";  
    
	}  
   return 0;  
  }  
