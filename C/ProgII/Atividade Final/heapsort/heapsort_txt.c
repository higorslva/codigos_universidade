#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PHONE_LENGTH 14
#define MAX_NUM_PHONES 100

void swap(char *a, char *b) {
    char temp[MAX_PHONE_LENGTH];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void heapify(char arr[][MAX_PHONE_LENGTH], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && strcmp(arr[l], arr[largest]) > 0) {
        largest = l;
    }

    if (r < n && strcmp(arr[r], arr[largest]) > 0) {
        largest = r;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(char arr[][MAX_PHONE_LENGTH], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    FILE *fp;
    clock_t t;
    char filename[] = "telefones.txt";
    int n = 0;
    char arr[MAX_NUM_PHONES][MAX_PHONE_LENGTH];

    fp = fopen(filename, "r");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    // Lê os números do arquivo e armazena no array
    while (!feof(fp) && n < MAX_NUM_PHONES) {
        fscanf(fp, "%s", arr[n]);
        n++;
    }
    fclose(fp);

    // Ordena o array com o algoritmo heapsort
    t = clock();
    heapSort(arr, n);
    t = clock() - t;

    // Imprime o array ordenado
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    printf("\n");
    printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}