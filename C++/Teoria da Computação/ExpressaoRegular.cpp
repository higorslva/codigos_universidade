#include <iostream>
#include <regex>
#include <string>
using namespace std;
  
int main()
{
    string input;
    regex integer_expr("(\\+|-)?[[:digit:]]+");
    while(true)
    {
        cout<<"Insira a entrada: ";
        cin>>input;
        if(!cin) break;
        //Sai quando usuário digita 'q' na entrada
        if(input=="q")
            break;
        if(regex_match(input,integer_expr)){
            cout<<"Entrada é numero inteiro"<<endl;
        }else{
            cout<<"Invalid input : Not an integer"<<endl;
        }
    }
}