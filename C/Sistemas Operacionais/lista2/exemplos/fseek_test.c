#include <stdio.h>
#include <string.h>
#define INDEX 10

struct escrita{
  char texto[10];
};

int main(){
  FILE *ptr;
  struct escrita dados[INDEX];
  
  strcpy(dados[0].texto, "Teste ");
  strcpy(dados[1].texto, " de ");
  strcpy(dados[2].texto, " escrita ");
  strcpy(dados[3].texto, " with ");
  strcpy(dados[4].texto, " lasers!");
  
  if((ptr=fopen("escrita.txt", "w")) != NULL){
    fwrite( dados, sizeof(struct escrita), INDEX, ptr);
    fclose(ptr);
  }
  else fprintf(stderr, "\n Erro na escrita do arquivo");
  
  return 0;
}