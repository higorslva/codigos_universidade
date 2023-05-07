#include <stdio.h>
#include <stdlib.h>

typedef struct s {
    int i;
    char c;
} S;

int main() {
    S s = {0, 'H' - 'A'};
    int* arr = (int*)calloc(13, sizeof(int));
    arr[2] = 1;
    arr[3] = 2;
    arr[4] = 2;
    arr[5] = 7;
    arr[6] = 11;
    arr[7] = 0;
    arr[8] = 1;
    arr[9] = 0;
    arr[10] = 3;
    arr[11] = 0;
    arr[12] = 1;

    while (s.i < arr[5] + arr[6]) {
        if (s.i == arr[2]) {
            s.i += arr[3];
        } else if (s.i == arr[5]) {
            putchar(' ');
            s.i += arr[6];
        } else if (s.i == arr[7]) {
            s.c = 'a' + (arr[0] ^ arr[10]);
            putchar(s.c);
            s.i += arr[8];
        } else if (s.i == arr[11]) {
            s.c = 'A' + (arr[1] ^ arr[9]);
            putchar(s.c);
            s.i += arr[12];
        } else {
            s.c = 'l' - 'L' + 72;
            putchar(s.c);
            s.i++;
        }
    }

    free(arr);

    return 0;
}
