#include <stdio.h>
#include <stdlib.h>


int getMax(int list[], int n) {                             //define o numero maximo e respectivamente o numero maximo de chaves
    int mx = list[0];
    int i;
    for (i = 1; i < n; i++)
        if (list[i] > mx)                                   
            mx = list[i];
    return mx;
}

void countSort(int list[], int n, int exp) {
    int output[n];
    int i, count[10] = { 0 };  // INICIANDO UM VETOR PARA CONTAGEM DE OCORRENCIAS E ZERANDO TODAS AS CASAS

    for (i = 0; i < n; i++)      
        count[(list[i] / exp) % 10]++;  //incrementa a posição da casa no digito analisado

    for (i = 1; i < 10; i++)        //Atualiza a posição do vetoo count[i] para a posição do vetor atual no output[i]
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--) {              // criando UM ARRAY TEMPORARIO
        output[count[(list[i] / exp) % 10] - 1] = list[i];
        count[(list[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)  // ATUALIZANDO OS ELEMENTOS NO ARRAY
        list[i] = output[i];
}

void radixsort(int list[], int n) {    
    int m = getMax(list, n);
                                            //CHAMA O COUNTING SORT PARA CADA DIGITO NO MAX
    int exp;
    for (exp = 1; m / exp > 0; exp *= 10)
        countSort(list, n, exp);
}

void print(int list[], int n) {                 // função para printar o vetor ordenado;
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t", list[i]);
}

int main() {
    int list[] = { 121, 432, 564, 23, 1, 45, 788 };
    int i, n = sizeof(list) / sizeof(list[0]);

    printf("Números desordenados: \n");
    for(i = 0; i<8; i++)
        printf("%d\t", list[i] );

    radixsort(list, n);

    printf("\n\nNúmeros ordenados: \n");
    print(list, n);
    printf("\n\n");
    return 0;
}