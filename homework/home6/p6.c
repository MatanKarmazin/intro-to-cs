#include <stdio.h>

int bigger(int num) {
    if (num == 0) {
        return 0;
    }
    int temp, max = 0;
    scanf("%d", &temp);
    int maxInRest = bigger(num - 1);
    if (temp < maxInRest) {
        max = temp;
    } else {
        max = maxInRest;
    }
    return max;
}

void main() {
    int num;
    printf("enter an ineger(n): ");
    scanf("%d", &num);
    printf("enter a sequence of n numbers: ");
    int result = bigger(num);
    printf("%d is the lowest number\n", result);
}