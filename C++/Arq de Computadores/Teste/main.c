#include <stdio.h>
#include <stdlib.h> //para malloc()
#include <locale.h> //para setlocale
#include <stdbool.h> //para tipos bool
#include <math.h> //para log() e pow()
#include <string.h> //para strcmp()
#include <time.h> //para rand() e srand()

#include "other.h" // Coloquei algumas funções aqui para não poluir o código

// Cores do texto
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"
// 0 - Normal; 1 - validBit Verde; 2 - tag Verde; 3 - validBit Vermelho; 4 - tag Vermelha

void menu1(int *, int *);
void menu2(const int cacheSize, const int memSize, int *cacheBits, int *memBits, bool **cacheAddress, bool **memAddress, bool **cacheData, bool **memData, const bool *validBit, bool **tag, int hits, int misses, double hit_rate, const int color, const int colorLine);

int main(){
    setlocale(LC_ALL, "Portuguese");

    // Para gerar números aleatorios
    unsigned long int max = pow(2,31) -1;
    if(RAND_MAX < max){ // Impede um estouro de pilha
        max = RAND_MAX;
    }
    srand( (unsigned)time(NULL) );
     

    int hits = 0;
    int misses = 0;
    double hit_rate = 0.0f;

    int cacheSize; // Quantidade de endereços na memória cache
    int memSize; // Quantidade de endereços na memória principal
    
    menu1(&cacheSize, &memSize); // Primeiro Menu

    // Quantidade de bits em um endereço de cache
   int cacheBits = log(cacheSize)/log(2); // log de cacheSize na base 2
   
   // Quantidade de bits em um endereço de memória
   int memBits = log(memSize)/log(2); // log de memSize na base 2
   
   // Vetor de endereços da memória cache
    bool ** cacheAddress = malloc(sizeof(bool*) * cacheSize);
    bool  * bufCacheAddress = malloc(sizeof(bool) * cacheSize * cacheBits);
    for(int i=0; i<cacheSize; i++){
        cacheAddress[i] = &bufCacheAddress[cacheBits*i];
    }
    for (int i=0; i<cacheSize; i++){
        //vetor destino para os valores binarios, linha, qtd de bits em uma linha, numero decimal a ser convertido
       decToBin(cacheAddress, i, cacheBits, i);
    }
   
   // Vetor de dados da memória cache
   //bool cacheData[cacheSize][32];
   bool ** cacheData = malloc(sizeof(bool*) * cacheSize);
    bool  * bufCacheData = malloc(sizeof(bool) * cacheSize * 32);
    for(int i=0; i<cacheSize; i++){
        cacheData[i] = &bufCacheData[32*i];
    }
    for(int i=0; i<cacheSize; i++){ // inicializa vetor com valores 0
        for(int j=0; j<32; j++){
            cacheData[i][j] = 0;
        }
    }
   
   bool validBit[cacheSize]; // Vetor de bits válidos da cache
   for(int i=0; i<cacheSize; i++){
        validBit[i] = 0;
    }
   
   // Vetor de tags da cache
   //bool tag[cacheSize][memBits - cacheBits];
   bool ** tag = malloc(sizeof(bool*) * cacheSize);
    bool  * bufTag = malloc(sizeof(bool) * cacheSize * (memBits - cacheBits));
    for(int i=0; i<cacheSize; i++){
        tag[i] = &bufTag[(memBits-cacheBits)*i];
    }
   for(int i=0; i<cacheSize; i++){ // inicializa vetor com valores 0
        for(int j=0; j<memBits-cacheBits; j++){
            tag[i][j] = 0;
        }
    }
   
   // Vetor de endereços da memória principal
   //bool memAddress[memSize][memBits];
   bool ** memAddress = malloc(sizeof(bool*) * memSize);
    bool  * bufMemAddress = malloc(sizeof(bool) * memSize * memBits);
    for(int i=0; i<memSize; i++){
        memAddress[i] = &bufMemAddress[memBits*i];
    }
    for (int i=0; i<memSize; i++){
        //vetor destino para os valores binarios, linha, qtd de bits em uma linha, numero decimal a ser convertido
       decToBin(memAddress, i, memBits, i);
    }
   
   // Vetor de dados da memória principal
   //bool memData[memSize][32];
   bool ** memData = malloc(sizeof(bool*) * memSize);
    bool  * bufMemData = malloc(sizeof(bool) * memSize * 32);
    for(int i=0; i<memSize; i++){
        memData[i] = &bufMemData[32*i];
    }
    for(int i=0; i<memSize; i++){ // inicializa vetor com valores 0
        for(int j=0; j<32; j++){
            memData[i][j] = 0;
        }
    }

    bool flag; // Usado pra sair do loop
    int op; // Utilizado para escolher a ação no menu
    char address[memBits+1]; // Armazena o endereço escolhido
    int addressLine; // Linha do endereço escolhido
    int counter = 0;
    int value;
    int cacheAddressLine = 0;
    int tagVerify;
    do{
        flag = true;

        do{
            menu2(cacheSize, memSize, &cacheBits, &memBits, cacheAddress, memAddress, cacheData,  memData, validBit, tag, hits, misses, hit_rate, 0, 0);
            
            printf("Menu:\n[1] - Inserir dados aleatóriamente na memória\n[2] - Inserir dados manualmente na memória\n[3] - Inserir o endereço de memória a ser referenciado\n[4] - Sair\n");
            scanf("%d", &op);
            fflush_stdin(); // limpa buffer
            clear(); // limpa a tela
        }while(inputVerify(1, 4, op));
        
        switch(op){
        case 1: // Inserir dados aleatóriamente na memória
            
            do{
                printf("Menu:\n[1] - Inserir em um endereço específico\n[2] - Inserir em todos os endereços\n");
                scanf("%d", &op);
                fflush_stdin(); // limpa buffer
                clear(); // limpa a tela
            }while(inputVerify(1, 2, op));
            
            if(op == 1){
                // código repetido
                printf("Insira o endereço do espaço de memória (-1 para cancelar):\n");
                scanf("%s", &address);
                fflush_stdin(); // limpa buffer
                clear();
                        
                if(strcmp(address, "-1") == 0){ // Se address == "-1" volta pro menu
                    break;
                }else{ // Descobre a linha do endereço informado
                    addressLine = -1;
                    counter = 0;
                    for(int i=0; i<memSize && counter<memBits; i++){
                        addressLine++;
                        counter = 0;
                        while(memAddress[i][counter] == (int)address[counter] - '0'){
                            counter++;
                        }
                    }
                }    
                
                decToBin(memData, addressLine, 32, rand());
                
            }else{
                for(int i=0; i<memSize; i++){
                    decToBin(memData, i, 32, rand());
                }
            }
            
        break;
        case 2: // Inserir dados manualmente na memória
            // código repetido
            printf("Insira o endereço do espaço de memória (-1 para cancelar):\n");
            scanf("%s", &address);
            fflush_stdin(); // limpa buffer
            clear();
            
            if(strcmp(address, "-1") == 0){ // Se address == "-1" volta pro menu
                break;
                
            }else{ // Descobre a linha do endereço informado
                addressLine = -1;
                counter = 0;
                for(int i=0; i<memSize && counter<memBits; i++){
                    addressLine++;
                    counter = 0;
                    while(memAddress[i][counter] == (int)address[counter] - '0'){
                        counter++;
                    }
                }
            }
            
            do{
                printf("Insira um valor inteiro entre 0 e %d:\n", max);
                scanf("%d", &value);
                fflush_stdin(); // limpa buffer
                clear();
            }while(inputVerify(0, max, value));
            
            decToBin(memData, addressLine, 32, value);
        break;
        case 3: // Inserir o endereço de memória a ser referenciado
            
            // código repetido
            printf("Insira o endereço do espaço de memória (-1 para cancelar):\n");
            scanf("%s", &address);
            fflush_stdin(); // limpa buffer
            clear();
            
            if(strcmp(address, "-1") == 0){ // Se address == "-1" volta pro menu
                break;
                
            }else{ // Descobre a linha do endereço informado
                addressLine = -1;
                counter = 0;
                for(int i=0; i<memSize && counter<memBits; i++){
                    addressLine++;
                    counter = 0;
                    while(memAddress[i][counter] == (int)address[counter] - '0'){
                        counter++;
                    }
                }
            }
            
            for(int i=0, j, k, l=-1; i<cacheSize; i++){ // Percorre linhas da cache
                j = 0;
                k = memBits - cacheBits;
                
                while(cacheAddress[i][j] == memAddress[addressLine][k] && k < memBits){
                    j++;
                    k++;
                }
                
                l++;
                if(k==memBits){
                    cacheAddressLine = l;
                    break;
                }
            }
            
            if(validBit[cacheAddressLine] == 1){
                // Muda cor do validBit pra verde
                menu2(cacheSize, memSize, &cacheBits, &memBits, cacheAddress, memAddress, cacheData,  memData, validBit, tag, hits, misses, hit_rate, 1, cacheAddressLine);
                getchar();
                clear();
                
                tagVerify = 0;
                for(int i=0; i<memBits-cacheBits; i++){
                    if(tag[cacheAddressLine][i] == memAddress[addressLine][i]){
                        tagVerify++;
                    }
                }
                if(tagVerify == memBits-cacheBits){ // Se tag == bits mais á esquerda do endereço de memória
                    // Muda cor da tag pra verde
                    hits++;
                    menu2(cacheSize, memSize, &cacheBits, &memBits, cacheAddress, memAddress, cacheData,  memData, validBit, tag, hits, misses, hit_rate, 2, cacheAddressLine);
                    getchar();
                    clear();
                }else{
                    // Muda cor da tag pra vermelho
                    misses++;
                    menu2(cacheSize, memSize, &cacheBits, &memBits, cacheAddress, memAddress, cacheData,  memData, validBit, tag, hits, misses, hit_rate, 4, cacheAddressLine);
                    getchar();
                    clear();
                    
                    //Código repetido
                    validBit[cacheAddressLine] = 1;
                    for(int i=0; i<32; i++){
                        if(i<memBits-cacheBits){
                            tag[cacheAddressLine][i] = memAddress[addressLine][i]; // Adiciona nova tag á cache
                        }
                        cacheData[cacheAddressLine][i] = memData[addressLine][i]; // Copia dados da memória para a cache
                    }
                }
            }else{
                // Muda cor do bit de válidade pra vermelho
                misses++;
                menu2(cacheSize, memSize, &cacheBits, &memBits, cacheAddress, memAddress, cacheData,  memData, validBit, tag, hits, misses, hit_rate, 3, cacheAddressLine);
                getchar();
                clear();
                
                //Código repetido
                validBit[cacheAddressLine] = 1;
                for(int i=0; i<32; i++){
                    if(i<memBits-cacheBits){
                        tag[cacheAddressLine][i] = memAddress[addressLine][i]; // Adiciona nova tag á cache
                    }
                    cacheData[cacheAddressLine][i] = memData[addressLine][i]; // Copia dados da memória para a cache
                }
            }
            
        break;
        case 4: // Sair
            flag = false; // Sai do loop
        break;
        default:
            printf("Opção Inválida!");
            getchar();
            clear(); // limpa a tela
        }
        
        //menu2(cacheSize, memSize, &cacheBits, &memBits, cacheAddress, memAddress, cacheData,  memData, validBit, tag, hits, misses, hit_rate, 0, 0);
        
    }while(flag);
    
    return 0;    
}

void menu1(int *cacheSize, int *memSize){

    bool flag = true; // Usado pra sair do loop quando as informações inseridas forem válidas
    do{
        printf("Escolha a quantidade de espaços de memória Cache:\n");
        printf("Disponível: 2 4 8 16\n");
        scanf("%d", cacheSize);
        fflush_stdin(); // limpa buffer
        clear(); // limpa a tela
        
        // Verifica se o tamanho inserido é válido
        if(*cacheSize != 2 && *cacheSize != 4 && *cacheSize != 8 && *cacheSize !=16){
            printf("Tamanho inválido!\n");
            getchar();
            clear(); // limpa a tela
        }else{
            flag = false;
        }
    }while(flag);
    flag = true;
    
    do{
        printf("Escolha a quantidade de espaços de memória Principal:\n");
        printf("Disponível:");
        
        // Informa tamanhos válidos
        for(int i=*cacheSize*2; i<=32; i*=2){
            printf(" %d", i);
        }
        printf("\n");
        scanf("%d", memSize);
        fflush_stdin(); // limpa buffer
        clear(); // limpa a tela
    
        // Verifica se o tamanho inserido é válido
        for(int i=*cacheSize*2; i<=32; i*=2){
            if(*memSize == i){
                flag = false;
            }
        }
        if(flag){
            printf("Tamanho inválido!\n");
            getchar();
            clear(); // limpa a tela
        }
        
    }while(flag);
}

void menu2(const int cacheSize, const int memSize, int *cacheBits, int *memBits, bool **cacheAddress, bool **memAddress, bool **cacheData, bool **memData, const bool *validBit, bool **tag, int hits, int misses, double hit_rate, const int color, const int colorLine){
    if(hits+misses != 0){ // Evita divisão por zero
        hit_rate = (double) hits/(hits+misses)*100;
    }
    //Cache:
    //------------------------------------------------------
    indent(cacheBits); // Recuo
    printf("  Cache:\n");
    indent(cacheBits); // Recuo
    printf("  -----------------------------------------");
    for(int i=0; i<(*memBits)-(*cacheBits); i++){
            printf("-");
    }
    printf("\n");
    
    for (int i=0; i<cacheSize; i++){
        for(int j=0; j<*cacheBits; j++){ // Endereços da Cache
            printf("%d", cacheAddress[i][j]);
        }
        if(i == colorLine){
            if(color == 1){ // Verde
                printf(" | " GREEN "%d" RESET " | ", validBit[i]); // Bit de válidade
            }else if(color == 3){ // Vermelho
                printf(" | " RED "%d" RESET " | ", validBit[i]); // Bit de válidade
            }else{
                printf(" | %d | ", validBit[i]); // Bit de válidade
            }
        }else{
            printf(" | %d | ", validBit[i]); // Bit de válidade
        }
        for(int j=0; j<(*memBits)-(*cacheBits); j++){ // Tags
            if(i == colorLine){
                if(color == 2){ // Verde
                    printf(GREEN "%d" RESET, tag[i][j]);
                }else if(color == 4){ // Vermelho
                    printf(RED "%d" RESET, tag[i][j]);
                }else{
                    printf("%d", tag[i][j]);
                }
            }else{
                printf("%d", tag[i][j]);
            }
        }
        printf(" | ");
        for(int j=0; j<32; j++){ // Dados na Cache
            printf("%d", cacheData[i][j]);
        }
        printf(" |\n");
    }
    
    indent(cacheBits); // Recuo
    printf("  -----------------------------------------");
    for(int i=0; i<(*memBits)-(*cacheBits); i++){
            printf("-");
    }
    printf("\n\n");
    //------------------------------------------------------
    
    // Memória Principal:
    //------------------------------------------------------
    indent(memBits); // Recuo
    printf("  Memória:\n");
    indent(memBits); // Recuo
    printf("  ----------------------------------\n");
    
    for(int i=0; i<memSize; i++){
        for(int j=0; j<*memBits; j++){
            printf("%d", memAddress[i][j]);
        }
        printf(" | ");
        for(int j=0; j<32; j++){ // Dados na Memória
            printf("%d", memData[i][j]);
        }
        printf(" |\n");
    }
    indent(memBits); // Recuo
    printf("  ----------------------------------\n\n");
    //------------------------------------------------------
    
    printf("\thits: %d\n\tmisses: %d\n\thit rate: %.2f\%\n\n", hits, misses, hit_rate);
    
}