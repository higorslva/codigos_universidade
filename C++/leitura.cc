#include <iostream>
#include <fstream>

using namespace std;
int main()
{     
    ifstream fin("a:teste.txt");
                                        //            
    char ch;
    while(fin.get(ch))
    cout << ch;   // imprime o caracter no vídeo 
}