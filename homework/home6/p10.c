#include <stdio.h>

int f(int num) {
    if (num < 10) {
        return num; 
    }
    if ((num % 10 + f(num / 10)) % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    int num;
    printf("enter an integer: ");
    scanf("%d", &num);
    int z = f(num);
    printf("%d\n", z);
}