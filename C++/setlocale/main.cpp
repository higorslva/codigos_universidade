#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necess�rio para usar setlocale
int main(void)
{
  printf("\n****** Verificando a localidade corrente ********\n\n");
  printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
  printf("N�o � poss�vel usar acentua��o ou � corretamente�\n\n");

  printf("\n****** Alterando para a localidade do sistema ********\n\n");

  //alterando para o padr�o do sistema operacional
  printf("A localidade corrente agora � %s \n",setlocale(LC_ALL,""));
  printf("Agora n�o tem mais problema algum!\n");
  printf("J� posso usar acentua��o e tamb�m o caractere �\n\n\n");

  system("pause");
  return 0;
}
