// ponteiro para funcoes

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
  
// criar uma variavel do tipo 'int' e seus parametros
typedef double funcoes_genericas( double x, double y );



double soma( double a, double b ){
  printf("%s: %3.4f \n", __func__, a+b );
  return a+b;
}
double mult( double a, double b ){
  printf("%s: %3.4f \n", __func__, a*b );
  return a*b;
}
double divi( double a, double b ){
  printf("%s: %3.4f \n", __func__, a/b );
  return a/b;
}
/*double sair(){
    return EXIT_SUCCESS;
}*/
// vetor que recebe funcoes de mesmo parm
funcoes_genericas *vetor_funcoes[3];

// vetor de funcoes
void adicionar_funcoes( int index, funcoes_genericas *point_funcao ){
  vetor_funcoes[index] = point_funcao;
}

int main() {
  // adiciona funcoes ao ponteiro
  adicionar_funcoes( 0, soma );
  adicionar_funcoes( 1, mult );
  adicionar_funcoes( 2, divi );
 // adicionar_funcoes( 3, sair );

  int opt ;
  double resultado, num_1, num_2;
  // continua em loop ate digitar um numero valido 1 ou 2
  printf( "Opcao de operacao: (1) soma | (2) multiplicacao | (3) Div | (5) Sair: " );
  scanf( "%d", &opt );

  while( opt !=5  ){       
      printf( "Digite dois numeros: n1 n2 " );
      scanf( "%lf %lf",&num_1, &num_2 );
      printf(" Numeros utilizados: %2.2f %2.2f \n", num_1, num_2 );
      // chama funcao do vetor com parametros
      resultado = (*vetor_funcoes[opt-1])(num_1, num_2);
      printf( " Resultado %3.3f\n", resultado );
  } 
  
  return 0;
}