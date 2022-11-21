#include <stdio.h>

void soma(float x, float y){
	float resultado = x+y;
	printf("A soma é: %.2f\n", resultado);
}

int main(){
	float x, y;
	printf("Insira um número: ");
	scanf("%f", &x);
	printf("Insira o segundo número: ");
	scanf("%f", &y);
	
	soma(x,y);
  
	return(0);
}