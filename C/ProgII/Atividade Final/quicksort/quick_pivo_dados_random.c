#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 30

void quicksort(int vetor[], int inicio, int fim) {
    int i, j, indice_pivo, pivo, aux;
    indice_pivo = inicio + rand() % (fim - inicio + 1);
    pivo = vetor[indice_pivo];
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
    clock_t t;
    srand(time(NULL)); // inicializa o gerador de números aleatórios
    t = clock();
    printf("Sequencia gerada: ");
    for (i = 0; i < TAMANHO; i++) {
        //vetor[i] = rand() % 100 + 1; // gera um número aleatório entre 1 e 100
        //vetor[i] = i + 1; // gera um número e armazena no vetor
        vetor[i] = TAMANHO - i; //Decrescente
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    quicksort(vetor, 0, TAMANHO - 1);
    
    printf("Sequencia ordenada: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    t = clock() - t;
    printf("\n");
    printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
    return 0;
}
