#include <stdio.h>
int isEven(int);
int isOdd(int);

void main() {
    int x;
    printf("enter an integet: ");
    scanf("%d", &x);
    isEven(x);
}

int isEven(int number) {
    if (number % 2 == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return number;
}