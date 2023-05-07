#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50 // Definindo o número de entradas

void countingSort(int arr[], int n) {
    int count[101] = {0}, i, j, output[n];

    // Contando a frequência de cada elemento
    for (i = 0; i < n; i++)
        count[arr[i]]++;

    // Alterando count[i] para que ele agora possua a posição correta do elemento na saída
    for (i = 1; i <= 100; i++)
        count[i] += count[i - 1];

    // Construindo a saída
    for (i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copiando a saída para o array original
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

int main() {
    int i, arr[SIZE];
    clock_t t;

    // Gerando dados aleatórios
    srand(42); // Definindo a semente para garantir resultados consistentes
    for (i = 0; i < SIZE; i++)
        arr[i] = rand() % 100 + 1;

    // Exibindo o array original
    printf("Array original:\n");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Ordenando o array com Counting Sort
    t = clock();
    countingSort(arr, SIZE);
    t = clock() - t;

    // Exibindo o array ordenado
    printf("Array ordenado:\n");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}
