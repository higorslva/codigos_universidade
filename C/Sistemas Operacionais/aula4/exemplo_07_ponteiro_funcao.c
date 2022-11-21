#include <stdio.h>
#include <ctype.h>
#include <string.h>

void imp_data_br(int *dia, int *mes, int *ano);
void imp_data_usa(int *dia, int *mes, int *ano);

int main(){
    int opt;
    do{
        printf("Opção de impressão:\n (1) BR | (2) USA: ");
        scanf("%d", &opt);
    }while(opt != 1 && opt != 2);
    printf("Opção %d \n", opt);

    void (*point)();
    point = opt == 1 ? imp_data_br : imp_data_usa;

    int dia, mes, ano;
    (*point)(&dia, &mes, &ano);

    return 0;
}

void imp_data_br(int *dia, int *mes, int *ano){
    printf("Que dia é hoje? dd/mm/aa ");
    scanf("%d/%d/%d", dia, mes, ano);
    printf("%d/%d/%d\n", *dia, *mes, *ano);
}

void imp_data_usa(int *dia, int *mes, int *ano){
    printf("Que dia é hoje? mm.dd.aa ");
    scanf("%d.%d.%d", mes, dia, ano);
    printf("%d.%d.%d \n", *mes, *dia, *ano);
}