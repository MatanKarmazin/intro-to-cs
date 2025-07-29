#include <stdio.h>

int divider(int number1, int number2) {
    int i, sum = 0;
    for (i = 1; i <= number1 && i <= number2; i++) {
        if ((number1 % i == 0) && (number2 % i == 0)) {
            // printf("before sum = %d\n", i);
            sum += i;
            printf("after sum = %d\n", i);
        }
    }
    return sum;
}

void main() {
    int num1, num2, result;
    printf("enter 2 integers: ");
    scanf("%d%d", &num1, &num2);
    result = divider(num1, num2);
    printf("%d\n", result);
}