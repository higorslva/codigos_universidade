#include <stdio.h>

int main () 
{
	int idade; 
	printf("\nQual a sua idade? ");
	scanf("%d", &idade);
	if(idade >=18 && idade <=70)
	printf("corno kkk");

	else if(idade <= 15)
	printf("HOMEM SANCTO");

	else if(idade >=16 && idade <=17)
	printf("Vai ser corno certeza kkk");

	else if(idade >=71 && idade <=120)
	printf("foi corno kkkk");

	else if(idade >=121)
	printf("jurassico");

printf("\n\n");
system("pause");
return 0;
}
