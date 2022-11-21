#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale
int main(void)
{
  printf("\n****** Verificando a localidade corrente ********\n\n");
  printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
  printf("Não é possível usar acentuação ou ç corretamente…\n\n");

  printf("\n****** Alterando para a localidade do sistema ********\n\n");

  //alterando para o padrão do sistema operacional
  printf("A localidade corrente agora é %s \n",setlocale(LC_ALL,""));
  printf("Agora não tem mais problema algum!\n");
  printf("Já posso usar acentuação e também o caractere ç…\n\n\n");

  system("pause");
  return 0;
}
