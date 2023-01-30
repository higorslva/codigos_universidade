#include <stdio.h>
#include <stdlib.h>

void peneira(int *vet, int raiz, int fundo){
    int pronto, filhoMax, tmp;
    pronto = 0;

    while((raiz*2 == fundo) && (!pronto)){
        if (raiz*2 == fundo){
            filhoMax = raiz * 2;
        }else if(vet[raiz * 2] > vet[raiz * 2 + 1]){
            filhoMax = raiz * 2;
        }else{
            filhoMax = raiz * 2 + 1;
        }
        if (vet[raiz] < vet[filhoMax]){
            tmp = vet[raiz];
            vet[raiz] = vet[filhoMax];
            vet[filhoMax] = tmp;
            raiz = filhoMax;
        }else{
            pronto = 1;
        }
    }
}

void heap(int *vet, int n){
    int i, tmp;
    for(i = (n/2); i >= 0; i--){
        peneira(vet, i, n - 1);
    }
    for(i = n-1; i >= 1; i--){
        tmp = vet[0];
        vet[0] = vet[i];
        vet[i] = tmp;
        peneira(vet, 0, i-1);
    }
}

int main(){
    int vetor[10] = {6, 2, 3, 9, 1, 4, 7, 5, 8, 0};
    int i;
    printf("Vetor desordenado:\n");
    for (i = 0; i < 10; i++){
        printf(" |%d| ", vetor[i]);
    }
    heap(vetor, 10);
    printf("\nVetor ordenado:\n");
    for(i = 0; i < 10; i++){
        printf(" |%d| ", vetor[i]);
    }
    return 0;
}