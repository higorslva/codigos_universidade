#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 20

void quicksort(int vetor[], int inicio, int fim) {
    int i, j, meio, pivo, aux;
    meio = (inicio + fim) / 2;
    pivo = vetor[meio];
    i = inicio;
    j = fim;
    do {
        while (vetor[i] < pivo) i++;
        while (vetor[j] > pivo) j--;
        if (i <= j) {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);
    if (inicio < j) quicksort(vetor, inicio, j);
    if (i < fim) quicksort(vetor, i, fim);
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
    quicksort(vetor, 0, TAMANHO - 1);
    printf("Sequencia ordenada: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
