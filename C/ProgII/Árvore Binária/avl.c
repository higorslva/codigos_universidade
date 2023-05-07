#include<stdio.h>
#include<stdlib.h>

struct no{
	int dado;
	struct no *esq;
	struct no *dir;
	int altura;
};

int altura(struct no *N){
	if (N == NULL)
		return 0;
	return N->altura;
}

int max(int a, int b){
	return (a > b)? a : b;
}

struct no* novoNo(int dado){
	struct no* no = (struct no*) malloc(sizeof(struct no));
	no->dado = dado;
	no->esq = NULL;
	no->dir = NULL;
	no->altura = 1; // new no is initially added at leaf
	return(no);
}

// A utility function to dir rotate subtree rooted with y
// See the diagram given above.
struct no *rotaDireita(struct no *y){
	struct no *x = y->esq;
	struct no *T2 = x->dir;

	// Perform rotation
	x->dir = y;
	y->esq = T2;

	// Update heights
	y->altura = max(altura(y->esq),	altura(y->dir)) + 1;
	x->altura = max(altura(x->esq),	altura(x->dir)) + 1;

	// Return new raiz
	return x;
}

// A utility function to esq rotate subtree rooted with x
// See the diagram given above.
struct no *rotaEsquerda(struct no *x){
	struct no *y = x->dir;
	struct no *T2 = y->esq;

	// Perform rotation
	y->esq = x;
	x->dir = T2;

	// Update heights
	x->altura = max(altura(x->esq), altura(x->dir)) + 1;
	y->altura = max(altura(y->esq),	altura(y->dir)) + 1;

	// Return new raiz
	return y;
}

// Get Balance factor of no N
int getBalance(struct no *N){
	if (N == NULL)
		return 0;
	return altura(N->esq) - altura(N->dir);
}

// Recursive function to insert a dado in the subtree rooted
// with no and returns the new raiz of the subtree.
struct no* insert(struct no* no, int dado){
	/* 1. Perform the normal BST insertion */
	if (no == NULL)
		return(novoNo(dado));

	if (dado < no->dado)
		no->esq = insert(no->esq, dado);
	else if (dado > no->dado)
		no->dir = insert(no->dir, dado);
	else // Equal keys are not allowed in BST
		return no;

	/* 2. Update altura of this ancestor no */
	no->altura = 1 + max(altura(no->esq), altura(no->dir));

	/* 3. Get the balance factor of this ancestor
		no to check whether this no became
		unbalanced */
	int balance = getBalance(no);

	// If this no becomes unbalanced, then
	// there are 4 cases

	// esq esq Case
	if (balance > 1 && dado < no->esq->dado)
		return rotaDireita(no);

	// dir dir Case
	if (balance < -1 && dado > no->dir->dado)
		return rotaEsquerda(no);

	// esq dir Case
	if (balance > 1 && dado > no->esq->dado)
	{
		no->esq = rotaEsquerda(no->esq);
		return rotaDireita(no);
	}

	// dir esq Case
	if (balance < -1 && dado < no->dir->dado)
	{
		no->dir = rotaDireita(no->dir);
		return rotaEsquerda(no);
	}

	/* return the (unchanged) no pointer */
	return no;
}

// A utility function to print preOrdem traversal
// of the tree.
// The function also prints altura of every no


void preOrdem(struct no *raiz){
	if(raiz != NULL){
        printf("%d ", raiz->dado);
		preOrdem(raiz->esq);
		preOrdem(raiz->dir);
	}
}

void Ordem(struct no *raiz){
	if(raiz != NULL){
		Ordem(raiz->esq);
        printf("%d ", raiz->dado);
		Ordem(raiz->dir);
	}
}
void posOrdem(struct no *raiz){
	if(raiz != NULL){
		posOrdem(raiz->esq);
		posOrdem(raiz->dir);
        printf("%d ", raiz->dado);
	}
}

/* Driver program to test above function*/
int main(){
    struct no *raiz = NULL;
    /* Constructing tree given in the above figure */
 	raiz = insert(raiz, 50);
    raiz = insert(raiz, 30);
    raiz = insert(raiz, 20);
    raiz = insert(raiz, 40);
    raiz = insert(raiz, 70);
    raiz = insert(raiz, 60);
    raiz = insert(raiz, 80);


              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

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
