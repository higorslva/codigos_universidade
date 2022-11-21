#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

int main(){
  FILE *ponteiro;
  int buff;
  
  if((ponteiro = fopen("arquivo.txt", "r"))!=NULL){
    while((buff=fgetc(ponteiro)) != EOF){
      printf("%c.", buff); 
   }
   printf("\n");
    fclose(ponteiro);
  }
  else fprintf(stderr, "\n Erro na abertura do arquivo");
  printf("%x.", buff);
  
  return 0;
}
