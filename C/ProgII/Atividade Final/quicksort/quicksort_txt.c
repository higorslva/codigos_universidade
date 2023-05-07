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

int partition(char arr[][MAX_PHONE_LENGTH], int low, int high) {
    char pivot[MAX_PHONE_LENGTH];
    strcpy(pivot, arr[high]);
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (strcmp(arr[j], pivot) < 0) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(char arr[][MAX_PHONE_LENGTH], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    FILE *fp;
//    clock_t t;
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

    // Ordena o array com o algoritmo quicksort
  //  t = clock();
    quickSort(arr, 0, n - 1);
    //t = clock() - t;
    // Imprime o array ordenado
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    printf("\n");
    // printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}
