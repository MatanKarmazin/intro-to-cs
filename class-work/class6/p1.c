#include <stdio.h>

int f(int number) {
    if (number == 0) {
        return 0;
    } else if (number % 2 == 0) {
        return 1;
    } else {
        return f(number / 10);
    }

    // f(number / 10);
    // return 0;
}

void main() {
    int num, result;
    printf("enter an integer: ");
    scanf("%d", &num);
    result = f(num);
    printf("%d\n", result);
}