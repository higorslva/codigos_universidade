#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 // Definindo o número de entradas

void radixSort(int arr[], int n) {
    int max = arr[0], i, exp = 1;
    int output[n];

    // Encontrando o maior número no array
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    // Realizando a ordenação
    while (max / exp > 0) {
        int count[10] = {0};

        // Contando a frequência de cada dígito
        for (i = 0; i < n; i++)
            count[(arr[i] / exp) % 10]++;

        // Alterando count[i] para que ele agora possua a posição correta do elemento na saída
        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        // Construindo a saída
        for (i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        // Copiando a saída para o array original
        for (i = 0; i < n; i++)
            arr[i] = output[i];

        exp *= 10;
    }
}

int main() {
    int i, arr[SIZE];

    // Gerando dados aleatórios entre 68900000 e 68999999
    srand(42); // Definindo a semente para garantir resultados consistentes
    for (i = 0; i < SIZE; i++)
        arr[i] = rand() % 100000 + 68900000;

    // Exibindo o array original
    printf("Array original:\n");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Ordenando o array com Radix Sort
    radixSort(arr, SIZE);

    // Exibindo o array ordenado
    printf("Array ordenado:\n");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}