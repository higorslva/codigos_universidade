#include <stdio.h>
#include <stdlib.h>

void matriz_ponteiro(int mtr[3][4]) {
    int lin, col;
    for (lin = 0; lin < 3; lin++) {
        printf("\n");
        for (col = 0; col < 4; col++) {
            printf("\t%d", mtr[lin][col]);
        }
    }
}

int main() {
    int mtr[3][4];
    int lin, col, cont;
    cont = 0;
    // armazenar o valor de cont em cada posição da matriz
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 4; col++) {
            mtr[lin][col]= cont++;
        }

    }
    matriz_ponteiro(mtr);
}