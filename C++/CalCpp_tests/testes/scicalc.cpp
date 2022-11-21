#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void Power(float x,float y){
  float p;
  p = pow(x,y);
  cout<< x << "^" << y << ": "<<p;
}

void Sine(float x){
  float s;
  s = sin(x);
  cout<<"sen(" << x << "): " <<s;
}

void Square(float x){
  float sq;
  sq = sqrt(x);
  cout<<sq;
}

void Cos(float x){
  float c;
  c = cos(x);
  cout<<"cos(" << x << "): " <<c;
}

void Tan(float x){
  float t;
  t = tan(x);
  cout<<"tan(" << x << "): " <<t;
}

void Log(float x){
  float l;
  l = log(x);
  cout<<l;
}

void Baselog(float x){
  float bl;
  bl = log10(x);
  cout<<bl;
}
void RaizBaseX(){
    float a, b;
    std::cout << "Insira o valor para achar a raiz: ";
    std::cin >> a;
    std::cout << "Insira o valor a dividir a raiz: ";
    std::cin >> b;
    std::cout << "\nA raiz a " << b << "ª de " << a <<" é igual a: " << pow(a, 1/b) << "\n" << std::endl;
}

void Algebra(){
  while (true){
    float a,b;
    int z;
    std::cout << "[1] - Potência | [2] - Seno | [3] - Raiz Quadrada\n";
    std::cout << "[4] - Coseno | [5] - Tangente | [6] - Logarítimo natural\n";
    std::cout << "[7] - Log base 10 | [8] - Raiz com base X\n";
    std::cout << "[0] - Voltar ao menu anterior\n";

    cin>>z;
      switch(z){
      case 0:
        return 0;

      case 1:
        cout << "Potência: x^y" << endl;
        cout<<"Digite valor de x: ";
        cin>>a;
        cout<<"Digite valor de y: ";
        cin>>b;
        Power(a,b);
        break;

      case 2:
        cout << "sin(x)" << endl;
        cout<<"Digite o valor de x: ";
        cin>>a;
        Sine(a);
        break;

      case 3:
        cout<<"Raiz quadrada de: ";
        cin>>a;
        Square(a);
        break;

      case 4:
        cout << "cos(x)" << endl;
        cout<<"Digite o valor de x: ";
        cin>>a;
        Cos(a);
        break;

      case 5:
        cout << "tan(x)" << endl;
        cout<<"Digite o valor de x: ";
        cin>>a;
        Tan(a);
        break;

      case 6:
        cout<<"Logarítimo natural de: ";
        cin>>a;
        Log(a);
        break;

      case 7:
        cout<<"Logarítimo base 10 de: ";
        cin>>a;
        Baselog(a);
        break;
        
      case 8:
        RaizBaseX();
        break;

    }
  }
}
