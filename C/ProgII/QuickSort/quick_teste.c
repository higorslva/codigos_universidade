#include <stdio.h>
#include <stdlib.h>
 
void quicksort(int *a, int esq, int dir) {
    int i, j, x, y;
     
    i = esq;
    j = dir;
    x = a[(esq + dir) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < dir) {
            i++;
        }
        while(a[j] > x && j > esq) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > esq) {
        quicksort(a, esq, j);
    }
    if(i < dir) {
        quicksort(a, i, dir);
    }
}

 
int main(){
    int i;//, vet[10];
    int vet[10] = {3, 6, 5, 2, 9, 8, 1, 4, 7, 0};
    printf("Valores desordenados: \n|");
    for (i = 0; i < 10; i++){
        printf("%d|", vet[i]);
    }
    
    quicksort(vet, 0, 10 - 1);
 
    printf("\n\nValores ordenados inversamente: \n|");
    for(i = 9; i >= 0; i--){
        printf("%d|", vet[i]);
    }
    return 0;
}
