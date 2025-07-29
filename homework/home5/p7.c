#include <stdio.h>

int divider(int number) {
    int i, sum = 0;
    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            sum += i;
            // printf("after sum = %d\n", i);
        } 
    }
    if (sum % 2 == 1) {
        return 1;
    } else {
        return 0;
    }
    return sum;
}

void main() {
    int num, result;
    printf("enter 2 integers: ");
    scanf("%d", &num);
    result = divider(num);
    printf("%d\n", result);
}