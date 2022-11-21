#include <stdio.h>
void impulso( int a ) {
  a = 1;
}
void impulso_vet( int a[10], int total ){
  int i;
  for( i=0; i < total; i++ ){
    a[i] = 1;
    printf("[impulso] %ld %d %d \n", sizeof(a), i, a[i] );
  }
}
int main( ) {
  int teste = 200;
  impulso( teste );
  printf( "Impulso inicial: %d \n", teste );
  int DIM = 10;
  int sinal[ DIM ];
  impulso_vet( sinal, DIM );
  for( int i = 0; i<DIM; i++ ){
    printf("%d.%ld %d \n", i, sizeof( sinal ), sinal[i] );
  }
  return 0;
}
