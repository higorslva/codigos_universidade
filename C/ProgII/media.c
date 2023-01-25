#include <stdio.h>
int main(){
  float a, b, media, media_turma;
  for (int i = 0; i <= 10; i++){
    printf("Digite a primeira nota: ");
    scanf("%f", &a);
    printf("Digite a segunda nota: ");
    scanf("%f", &b);
    media = (a+b)/2;
    media_turma += media/10;
  }
  printf("Media da turma: %f", media_turma);
  return 0;
}