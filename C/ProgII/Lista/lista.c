#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct no {
    int valor;
    struct no *proximo;
} No;

// Função para inserir um valor no início da lista
void inserirInicio(No **cabeca, int valor) {
    No *novoNo = malloc(sizeof(No));
    novoNo->valor = valor;
    novoNo->proximo = *cabeca;
    *cabeca = novoNo;
}

// Função para imprimir os valores da lista
void imprimirLista(No *cabeca) {
    No *atual = cabeca;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {
    // Criando uma lista vazia
    No *cabeca = NULL;

    // Inserindo valores na lista
    inserirInicio(&cabeca, 3);
    inserirInicio(&cabeca, 2);
    inserirInicio(&cabeca, 1);

    // Imprimindo os valores da lista
    printf("Valores da lista: ");
    imprimirLista(cabeca);

    return 0;
}
