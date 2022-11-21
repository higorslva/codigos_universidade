
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>

int main(){

setlocale(LC_ALL, "Portuguese");

    double area;
    double op;
    double tjl;

     printf("\n\t\t\t\t QUANTIDADE DE TIJOLOS POR M^2\n\n");

 do{

 	   printf("\t Digite área total, em m^2, dos cômodos que deseja construir \n\n\n\t\t>>>\t");
     scanf("%lf", &area);

     printf("\n\n");

 	   printf("\t Escolha o tipo de tijolo que deseja usar\n");
     printf("\t OBS: Um tijolo de tem por padrão as medidas definidas como: e x h x b \n\t (espessura, altura e comprimento, em centímetros.) \n");
     printf("\n\t 1 - Tijolo 6 Furos (9 x 14 x 19)\n");
     printf("\n\t 2 - Tijolo 8 Furos (9 x 19 x 19)\n");
     printf("\n\t 3 - Tijolo 9 Furos (11,5 x 14 x 24)\n\n");

     printf("\n\n \t\t >>> \t");

     scanf("%lf", &tjl);

     printf("\n\n");

	    if(tjl==1){

		float qtdtjl_6 = ((1/(0.14*0.19))*area);
        printf("A quantidade necessária de tijolos, em m^2, é: %.2f \n\n", qtdtjl_6 );

		}else if(tjl==2){

            float qtdtjl_8 = ((1/(0.19*0.19))*area);
            printf("A quantidade necessária de tijolos, em m^2, é: %.2f \n\n", qtdtjl_8);

		}else if (tjl==3){

            float qtdtjl_9 = ((1/(0.14*0.24))*area);

            printf("A quantidade necessária de tijolos, em m^2, é: %.2f \n\n", qtdtjl_9);

		}else{

         		do{

         		printf("\n\n\t\t ERROR: Digite uma opção válida.\n\n");
				scanf("%lf", &tjl);

         		for( ; tjl<=3; ){

         		if(tjl==1){

				float qtdtjl_6 = ((1/(0.14*0.19))*area);
        		printf("A quantidade necessária de tijolos, em m^2, é: %.2f \n\n", qtdtjl_6 );

				}else if(tjl==2) {

           		float qtdtjl_8 = ((1/(0.19*0.19))*area);
            	printf("A quantidade necessária de tijolos, em m^2, é: %.2f \n\n", qtdtjl_8);

				}else if (tjl==3){

            	float qtdtjl_9 = ((1/(0.14*0.24))*area);
            	printf("A quantidade necessária de tijolos, em m^2, é: %.2f \n\n", qtdtjl_9);}

			 	}

         		printf("ERROR: Digite uma opção válida");
				scanf("%lf", &tjl);

              	} while(tjl>3);


			printf("\t Deseja realizar outra operação?\n");
			printf("\n\t 1 - SIM\n\n");
			printf("\n\t 2 - NÃO\n\n");
			scanf("%lf", &op);

   			 }

	printf("\t Deseja realizar outra operação?\n");
			printf("\n\t 1 - SIM\n\n");
			printf("\n\t 2 - NÃO\n\n");
			scanf("%lf", &op);

	} while(op==1);

    		printf("Obrigado por utilizar nosso programa!!!");

return(0);

}
