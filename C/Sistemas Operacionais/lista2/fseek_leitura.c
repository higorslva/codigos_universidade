#include <stdio.h>
#include <string.h>

#define INDEX 10

struct dados{
  char texto[10];
};

int main(){
  FILE *ptr;
  struct dados teste[INDEX];
  if((ptr = fopen("escrita.txt", "r")) != NULL){
    fread(teste, sizeof(struct dados), INDEX, ptr);
    fclose(ptr);
    
    printf("%s\n", teste[0].texto);
    printf("%s\n", teste[1].texto);
  }else{
    fprintf(stderr, "\n Erro na leitura do arquivo");
  }
    return 0;
}
