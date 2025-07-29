#include <stdio.h>

int sum(int num1, int num2, int num3) {
    int sigma;
    if ((num1 >= 0 && num1 <= 9) && (num2 >= 0 && num2 <= 9) &&
        (num3 >= 0 && num3 <= 9)) {
        sigma = num1 * 100 + num2 * 10 + num3;
        printf("%d\n", sigma);
    } else {
        sigma = 0;
        printf("%d\n", sigma);
    }
    return sigma;
}

void main() {
    int num1, num2, num3;
    printf("enter 3 integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    sum(num1, num2, num3);
}