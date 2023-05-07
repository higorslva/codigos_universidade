#include <stdio.h>
#include <stdlib.h>

struct no {
    int dado;
    struct no *esq, *dir;
};

// A utility function to create a new BST no
struct no* novoNo(int item)
{
    struct no* temp
        = (struct no*)malloc(sizeof(struct no));
    temp->dado = item;
    temp->esq = temp->dir = NULL;
    return temp;
}

// A utility function to do inorder traversal of BST
void preOrdem(struct no* raiz){
    if (raiz != NULL) {
        printf("%d ", raiz->dado);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}
void Ordem(struct no* raiz){
    if (raiz != NULL) {
        Ordem(raiz->esq);
        printf("%d ", raiz->dado);
        Ordem(raiz->dir);
    }
}
void posOrdem(struct no* raiz){
    if (raiz != NULL) {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf("%d ", raiz->dado);
    }
}

// A utility function to insert
// a new no with given dado in BST
struct no* insert(struct no* no, int dado)
{
    // If the tree is empty, return a new no
    if (no == NULL)
        return novoNo(dado);

    // Otherwise, recur down the tree
    if (dado < no->dado)
        no->esq = insert(no->esq, dado);
    else if (dado > no->dado)
        no->dir = insert(no->dir, dado);

    // Return the (unchanged) no pointer
    return no;
}

// Driver Code
int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
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