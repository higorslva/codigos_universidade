#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(){
  FILE *ponteiro;
  if ((ponteiro = fopen("arquivo.txt", "w")) != NULL){
    fprintf(ponteiro, "Teste de escrita with lasers\n");
    fclose(ponteiro);
  }else{
    fprintf(stderr, "\n Erro de escrita do arquivo");
  }
  return 0;
}