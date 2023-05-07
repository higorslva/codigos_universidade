#include <stdio.h>
#include <stdlib.h>

struct no{
    int dado;
    struct no *esq, *dir;
};

struct no* novoNo(int item){
    struct no* temp = (struct no*)malloc(sizeof(struct no));
    temp->dado = item;
    temp->esq = temp->dir = NULL;
    return temp;
};

struct no* insert(struct no* no, int dado){
    // Se a árvore está vazia, retorna um novo no
    if (no == NULL)
        return novoNo(dado);

    // Caso contrário, retorna para baixo na árvore
    if (dado < no->dado)
        no->esq = insert(no->esq, dado);
    else if (dado > no->dado)
        no->dir = insert(no->dir, dado);

    return no;
};
void preOrdem(struct no* raiz){ // raiz, esq, dir
    if (raiz != NULL) {
        printf("%d ", raiz->dado);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}
void Ordem(struct no* raiz){ // esq, raiz, dir
    if (raiz != NULL) {
        Ordem(raiz->esq);
        printf("%d ", raiz->dado);
        Ordem(raiz->dir);
    }
}
void posOrdem(struct no* raiz){ // esq, dir, raiz
    if (raiz != NULL) {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf("%d ", raiz->dado);
    }
}

int main(){
    /* 6yy
              50
           /      \
          30       70
         /  \     /  \
       20   40   60   80 
    
    */
    struct no* raiz = NULL;
    raiz = insert(raiz, 50);
    insert(raiz, 30);
    insert(raiz, 20);
    insert(raiz, 40);
    insert(raiz, 70);
    insert(raiz, 60);
    insert(raiz, 80);

    // Percorre a árvore em Pré ordem
    printf("Pré ordem: ");
    preOrdem(raiz);
    printf("\n");
    // Percorre a árvore em Ordem
    printf("Ordem:     ");
    Ordem(raiz);
    printf("\n");
    
    // Percorre a árvore em Pós ordem
    printf("Pós ordem: ");
    posOrdem(raiz);
    printf("\n");

    return 0;
}