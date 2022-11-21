#include <stdio.h>
#include <string.h>

int main(){
  int DIM = 5;
  int *pont_dim;
  
  printf(" Variável DIM: %d \n", DIM);
  pont_dim = &DIM;
  printf(" *pont_dim: %d \n pont_dim: %d \n", *pont_dim, pont_dim);
  
  printf("\nParte 2 - Operações de ponteiros: ");
  int *aux = pont_dim + 10;
  printf("\n Resultado da operação: %d\n", *aux);
  printf("\n\nParte 3: - Novo ponteiro que faz operações e altera o valor inicial: \n\n");
  int *pont_dim_02;
  pont_dim_02 = pont_dim;
  *pont_dim_02 = *pont_dim_02 + 10;
  printf(" *pont_dim_02: %d \n", *pont_dim_02);
  printf(" DIM: %d\n", DIM);
  return 0;
}
