#include <stdio.h>
#include <stdlib.h>

//#define MAX 10

//Protótipo da função:
void quicksort (int *a, int esquerdo, int direito){
  int i, j, x, y;
  i = esquerdo;
  i = direito;
  x = a[(esquerdo + direito)/2];

  while(i <= j){
    while(a[i] < x && i < direito){
      i++;
    }
    while(a[j] > x && j > esquerdo){
      j--;
    }
    if(i <= j){
      y = a[i];
      a[i] = a[j];
      a[j] = y;
      i++;
      j--;
    }
  }
  if (j > esquerdo){
    quicksort(a, esquerdo, j);
  }
  if(i < direito){
    quicksort(a, i, direito);
  }
}

int main(){
  int i, vet[10];
  for (i = 0; i < 10; i++){
    printf("Digite um valor: ");
    scanf("%d", &vet[i]);
  }
  quicksort(vet, 0, 10 - 1);

  printf("Valores ordenados: \n");
  for(i = 0; i < 10; i++){
    printf("%d", vet[i]);
  }
  //system("pause");
  return 0;
}