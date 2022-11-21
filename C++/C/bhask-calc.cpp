#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main ()

{
	
float a, b, c, delt;
double x1, x2, raiz;
cout << "Digite A: ";
cin >> a;
cout << "Digite B: ";
cin >> b;
cout << "Digite C: ";
cin >> c;

delt=((b*b)-4*a*c);
raiz=sqrt(delt);
x1=((-b + raiz)/2*a);

x2=((-b - raiz)/2*a);
	
	cout<<"x1 =  " <<x1;
	cout<<"\nx2 =  " <<x2;	
	
	return 0;
}

