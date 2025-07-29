#include <stdio.h>

int fA(int num) {
    if (num < 10) {
        return 1;
    }
    return 1 + fA(num / 10);
}

int fB(int num) {
    if (num < 10) {
        return num;
    }
    return (num % 10) + fB(num / 10);
}

void main() {
    int num;
    printf("enter an integer: ");
    scanf("%d", &num);
    int resultA = fA(num);
    printf("%d\n", resultA);
    int resultB = fB(num);
    printf("%d\n", resultB);
}