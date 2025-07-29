#include <stdio.h>

int lucas(int num) {
    if (num == 0) {
        return 2;
    }
    if (num == 1) {
        return 1;
    }
    return lucas(num - 1) + lucas(num - 2);
}

void main() {
    int num;
    printf("enter an integer (n): ");
    scanf("%d", &num);
    int result = lucas(num);
    printf("%d\n", result);
}