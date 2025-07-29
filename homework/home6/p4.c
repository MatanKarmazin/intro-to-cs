#include <stdio.h>

int sidra(int num) {
    if (num == 0 || num == 1 || num == 2) {
        return 1;
    }
    if (num % 2 == 0) {
        return sidra(num - 1) + sidra(num - 2) + sidra(num - 3);
    }
    return sidra(num - 1) + sidra(num - 3);
}

void main() {
    int n;
    printf("enter an integer (n): ");
    scanf("%d", &n);
    int result = sidra(n);
    printf("%d\n", result);
}