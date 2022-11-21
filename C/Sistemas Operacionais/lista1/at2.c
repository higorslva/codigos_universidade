#include <stdlib.h>
#include <stdio.h>

void moda(float v[]){
  int T = 10;
  int i, j, cont[T];
  float conta, moda;
  
  for (i = 0; i < T; i++){
    for (j = 0; j < T; j++){
      if(v[i] == v[j]){
        cont[i]++;
        if(cont[i]>conta){
          moda=v[i];
        }
      }
    }
    cont[i] = 0;
  }
  if(conta == 0){
    printf("Não existe moda\n");
  }
  else{
    printf("Moda: %.2f\n", moda);
  }
}

void media(float v[]){
  int T = 10;
  float soma=0;
  float media=0;
  int i;
  
  for(i = 0; i < T; i++ ){
    soma = soma + v[i];
  }
  
  media = soma/T;
  printf("Media: %.2f", media);
}

void mediana(float v[]){
  int T = 10;
  int mediana;
  mediana = v[T/2-1];
  printf("Mediana: %i", mediana);
}

float main(){
  float valor, quant = 0, soma = 0;
  while(1){
    printf("Digite um número (666666 para encerrar): ");
    scanf("%f", &valor);
    if (valor == 666666){
      break;
    //}else if(valor < -1){
    //  printf("Digite um valor positivo\n");
    }else{
      soma += valor;
      quant++;
    }
  }
  printf("O valor médio é: %.1f\n", (float) soma/quant);
  printf("Foi digitado %.2f valores", quant);

  return 0;
}