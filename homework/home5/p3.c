#include <math.h>
#include <stdio.h>

int sigma(int digit) {
    int i;
    long result = 0;
    for (i = 0; i <= digit - 1; i++) {
        result = (result * 10) + 1;
    }
    return result;
}

void main() {
    int digit;
    printf("enter a digit: ");
    scanf("%d", &digit);
    long sum = sigma(digit);
    printf("%ld\n", sum);
}