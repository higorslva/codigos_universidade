#include <stdio.h>

void teste(){
    static int inteiro = 5;
    inteiro++;
    printf("Meu inteiro: %d \n", inteiro);
}

int main(){
    teste();
    teste();
}