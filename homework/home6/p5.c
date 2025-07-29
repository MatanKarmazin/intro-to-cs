#include <stdio.h>

int bigger(int num) {
    if (num == 0) {
        return 0;
    }
    int digit, max = 0;
    scanf("%d", &digit);
    int temp = bigger(num - 1);
    if (digit > temp) {
        max = digit;
    } else {
        max = temp;
    }
    return max;
}

void main() {
    int num;
    printf("enter an ineger(n): ");
    scanf("%d", &num);
    printf("enter a sequence of n numbers: ");
    int result = bigger(num);
    printf("%d is the biggest number\n", result);
}