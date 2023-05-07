#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow.\n");
        return;
    }
    top++;
    stack[top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow.\n");
        return -1;
    }
    int value = stack[top];
    top--;
    return value;
}

int main() {
    push(10);
    push(20);
    push(30);

    int popped_value = pop();
    printf("Popped value: %d\n", popped_value);

    return 0;
}