#include <stdio.h>


void cria_heap(int *vetor, int inicio, int fim){
    int pai = vetor [inicio];   //vetor auxiliar recebe a primeira posicão da partição
    int filho = inicio * 2 + 1;  // calcula o filho dele
    
    
    // verifica se o pai tem 2 filhos, e caso tenha, quem é o maior.
    while(filho <= fim){    // se o filho for menor  ou igual o final do vetor, quer dizer que eu ainda estou dentro do vetor                                 
        if(filho < fim){    
            if (vetor[filho] < vetor[filho + 1]){           //  pai tem dois filhos? quem é o maior? (filho ou filho + 1?)
                filho = filho + 1;                          // verifica quem dos filhos é maior
            }
        }
        
        //filho é maior que o pai?
        
        // se sim, o filho se torna o pai
        
        //repete o processo
         
        if (pai < vetor[filho]){            //se meu vetor na posição pai é menor que filho, entao ela esta na posição incorreta
            vetor[inicio] = vetor[filho];
            inicio = filho;
            filho = 2 * inicio + 1;
        } else {
            filho = fim + 1;
        }
    }
        //o antigo pai ocupa o lugar do ultimo filho analisado
    vetor[inicio] = pai;
}

void heap_sort(int *vetor, int tam){
    int troca;
    int meio = (tam - 1)/2;
    
    //cria a heap a partir dos dados
    for(int i = meio; i >= 0; i--){
        cria_heap(vetor, i, tam - 1);
    }
    
    //  pega o maior elemento da heap e coloca
    //  na sua posição correspondente no vetor
    
    for(int i = tam - 1; i >= 1; i--){
        troca = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = troca;
    
    //  reconstroi a heap
    cria_heap(vetor, 0, i - 1);
    
    }
}






int main(){
    
    int vetor [6] = {8, 3, 1, 42, 12, 5};
    
    heap_sort(vetor, 6);
    
    for (int i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }
    
    return 0;
}