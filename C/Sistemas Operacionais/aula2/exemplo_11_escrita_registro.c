#include <stdio.h>
#include <string.h>
/*
Exemplo de escrita de estruturas em arquivo
*/

#define INDEX 15

struct participa{
  char nome[10];
  int aposta;
};

int main() {
  FILE *ponteiro;
  struct participa dados[INDEX];

  strcpy( dados[0].nome, "Hamilton" );
  dados[0].aposta = 200;
  strcpy( dados[1].nome, "Eliezer" );
  dados[1].aposta = 100;
  strcpy( dados[2].nome, "Padre L" );
  dados[2].aposta = 40;
  strcpy( dados[3].nome, "Claudomiro" );
  dados[3].aposta = 1;
  strcpy( dados[4].nome, "Rov JK" );
  dados[4].aposta = 2000;
  
  if( (ponteiro=fopen( "escrita.txt", "w" ) ) != NULL ) {   // conexao fisica

    fwrite( dados, sizeof(struct participa), INDEX, ponteiro );
    fclose( ponteiro );
  }
  else fprintf( stderr, "\n Erro na escrita do arquivo" );

  return 0;
}
