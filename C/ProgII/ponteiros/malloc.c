#include <stdlib.h>
#include <stdio.h>

void main(void){
    int *a, i = 0, tam;

    a = malloc(sizeof(int) * 5);
    tam = sizeof(int);
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++);{
        printf("%d", *(a+i));
    }
    //printf("%d", sizeof(21));
}