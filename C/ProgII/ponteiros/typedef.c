#include <stdio.h>
typedef struct{
    char nome[31];
    int idade;
} pessoa;

void main(void){
    pessoa *p, x = {"Silvio", 32};
    p = &x;
    printf("{%s,%d}",  p -> nome, p -> idade);
}