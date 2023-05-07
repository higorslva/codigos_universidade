#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 20

void constroi_heap(int vetor[], int tamanho) {
    int i, pai, filho, aux;
    for (i = 1; i < tamanho; i++) {
        filho = i;
        pai = (filho - 1) / 2;
        while (filho > 0 && vetor[pai] < vetor[filho]) {
            aux = vetor[pai];
            vetor[pai] = vetor[filho];
            vetor[filho] = aux;
            filho = pai;
            pai = (filho - 1) / 2;
        }
    }
}

void heapsort(int vetor[], int tamanho) {
    int i, pai, filho, aux;
    for (i = tamanho - 1; i > 0; i--) {
        aux = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = aux;
        pai = 0;
        filho = 1;
        while (filho < i) {
            if (filho + 1 < i && vetor[filho + 1] > vetor[filho]) {
                filho++;
            }
            if (vetor[filho] > vetor[pai]) {
                aux = vetor[pai];
                vetor[pai] = vetor[filho];
                vetor[filho] = aux;
                pai = filho;
                filho = pai * 2 + 1;
            } else {
                break;
            }
        }
    }
}

int main() {
    int i, vetor[TAMANHO];
    srand(time(NULL)); // inicializa o gerador de números aleatórios
    printf("Sequencia gerada: ");
    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 100 + 1; // gera um número aleatório entre 1 e 100
        printf("%d ", vetor[i]);
    }
    printf("\n");
    constroi_heap(vetor, TAMANHO);
    heapsort(vetor, TAMANHO);
    printf("Sequencia ordenada: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
