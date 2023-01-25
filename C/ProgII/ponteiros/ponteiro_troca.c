#include <stdio.h>

void troca(int *a, int *b){
  int aux;
  
  aux = *a;
  *a = *b;
  *b = aux;

  printf("Valores durante a troca: %i, %i\n", *a, *b);

  //return a;
  //return b;  
}

int main(){
  int a = 10;
  int b = 20;

  printf("Valores antes da troca: %i, %i\n", a, b);

  troca(&a, &b);

  printf("Valores trocados: %i, %i\n", a, b);
}
