#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(){
  FILE *ponteiro;
  char texto[30];
  if((ponteiro=fopen("arquivo.txt", "r")) != NULL){
    if(fgets(texto, sizeof(texto), ponteiro) != NULL){
      printf("%s\n", texto);
      fclose(ponteiro);
    }else{
      printf("Erro na leitura do arquivo\n");
    }
  }else fprintf(stderr, "\n Erro na abertura do arquivo");
  return 0;
}
