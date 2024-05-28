#include <stdio.h>

int main() {
    double numero = 987654321/123456789; // Número inicial
    int iteracoes = 20;

    printf("Iteração 1: %f\n", numero);

    for (int i = 2; i <= iteracoes; i++) {
        numero *= 2; // Dobra o valor de "numero" a cada iteração
        printf("Iteração %d: %.10f\n", i, numero);
    }

    return 0;
}