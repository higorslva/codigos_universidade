#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PHONE_LENGTH 14
#define MAX_NUM_PHONES 100

void countingSort(char arr[][MAX_PHONE_LENGTH], int n) {
    char output[n][MAX_PHONE_LENGTH];
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        count[arr[i][4] - '0']++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        strcpy(output[count[arr[i][4] - '0'] - 1], arr[i]);
        count[arr[i][4] - '0']--;
    }

    for (int i = 0; i < n; i++) {
        strcpy(arr[i], output[i]);
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

    // Ordena o array com o algoritmo counting sort
    t = clock();
    countingSort(arr, n);
    t = clock() - t;

    // Imprime o array ordenado
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    printf("\n");
    printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}
