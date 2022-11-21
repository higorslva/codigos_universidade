#include <stdio.h>
#include <stdlib.h>

void binary(){
    int x;
    int bin [8];
    int num = x;
    for (x = 7; x >= 0; x--){
      if (num % 2 == 0)
         bin[x] = 0;
      else
         bin[x] = 1;
      num = num / 2;
   }

   for (x = 0; x < 8; x++)
       printf("%d", bin[x]);

}

int main()
{
   int x;

   printf("Digite o número (base decimal) para ser convertido: ");
   scanf("%d", &x);

    binary();

   printf("\n");

   return 0;
}
