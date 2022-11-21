#include <stdio.h>
#define INDEX 17

struct dado{
    char texto[17];
};

int main() {
    FILE* arquivo = fopen("arquivo.txt", "wb"); // b indica modo binário
    if(arquivo == NULL) {
        fprintf(stderr, "Erro ao tentar abrir arquivo.txt.");
        return 1;
    }
    //char *pointer = &dado.texto;
    
    //strcpy(dado.texto, "Teste de escrita");
    
    //struct dado(texto) = "Teste de escrita";
    char texto[64];

    fputs("String de teste", arquivo);
    fseek(arquivo, 0, SEEK_SET);
    fgets(texto, 64, arquivo);
    fclose(arquivo);

    //printf("%s\n", texto); // imprime String de teste

    return 0;
}
