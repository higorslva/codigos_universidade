#include "ip_val.h"

using namespace std;

int main(){
    char ip[30];
    do{
        cout << "quote> ";
    	cin >> ip;
    	is_valid_ip(ip) ? cout<<"IP válido\n" : cout<<"IP não válido\n";
    }while(ip!="sair");
    return 0;
}