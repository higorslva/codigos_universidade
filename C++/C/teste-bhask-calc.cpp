#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main ()
{
	float a, b, c, delta, x1, x2;
	system("color 0f");
	printf("\nCalculadora de bhaskara, seu corno\n");
	printf("\n\nRouba nao, comedia, sou o Batman\n");
	printf("\nDigite o valor de a: ");
	scanf("%f",&a); //valor de a
	
	printf("Digite o valor de b: ");
	scanf("%f",&b); //valor de b
	
	printf("Digite o valor de c: ");
	scanf("%f",&c); //valor de c
	
	delta=((b*b)-4*a*c);
	
	delta=sqrt(delta);
	
	x1=(-b)+delta/2*a;
	x2=(-b)-delta/2*a;
	printf("Valor de x1= %2.f\nValor de x2= %2.f",x1,x2);
	getchar();
	getchar();
}
