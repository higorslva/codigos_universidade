#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de nó da árvore
struct no {
    int dado;
    struct no* esq;
    struct no* dir;
};

// Função para criar um novo nó com um dado valor
struct no* novo_no(int dado) {
    struct no* no = (struct no*)malloc(sizeof(struct no));
    no->dado = dado;
    no->esq = NULL;
    no->dir = NULL;
    return(no);
}

// Função para percorrer a árvore em Pré-ordem (raiz-esquerda-direita)
void preOrdem(struct no* no) {
    if (no == NULL) {
        return;
    }
    printf("%d ", no->dado);
    preOrdem(no->esq);
    preOrdem(no->dir);
}

// Função para percorrer a árvore em Ordem (esquerda-raiz-direita)
void Ordem(struct no* no) {
    if (no == NULL) {
        return;
    }
    Ordem(no->esq);
    printf("%d ", no->dado);
    Ordem(no->dir);
}

// Função para percorrer a árvore em Pós-ordem (esquerda-direita-raiz)
void posOrdem(struct no* no) {
    if (no == NULL) {
        return;
    }
    posOrdem(no->esq);
    posOrdem(no->dir);
    printf("%d ", no->dado);
}

// Função principal
int main() {
    // Criação da árvore
    struct no* raiz = novo_no(1);
    raiz->esq = novo_no(2);
    raiz->dir = novo_no(3);
    raiz->esq->esq = novo_no(4);
    raiz->esq->dir = novo_no(5);
 
    // Percorre a árvore em Pré-ordem
    printf("Pré ordem: ");
    preOrdem(raiz);
    printf("\n");
 
    // Percorre a árvore em Ordem
    printf("Ordem:     ");
    Ordem(raiz);
    printf("\n");
 
    // Percorre a árvore em Pós-ordem
    printf("Pós ordem: ");
    posOrdem(raiz);
    printf("\n");

    return 0;
}