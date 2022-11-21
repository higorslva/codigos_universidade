#include <stdio.h>
#include <string.h>
/*
Exemplo de leitura de um registro
*/

#define INDEX 15

struct participa{
  char nome[10];
  int aposta;
};

int main() {
  FILE *ponteiro;
  struct participa dados[INDEX];

    if( ( ponteiro = fopen( "escrita.txt", "r" ) ) != NULL ) {   // conexao fisica

    fread( dados, sizeof(struct participa), INDEX, ponteiro );  // dados recebe conteudo do ponteiro
    fclose( ponteiro );

    printf( "%s %d\n", dados[0].nome, dados[0].aposta );
    printf( "%s %d\n", dados[1].nome, dados[1].aposta );

    //for ( int i = 0; i < INDEX; i++ ) {
//      printf( "Rua: %s \t Numero: %d\n", dados[i].nome, dados[i].aposta );
  //  }
  }else fprintf( stderr, "\n Erro na escrita do arquivo" );
  return 0;
}

