#include <stdio.h>

int pel(int num) {
    if (num == 0) {
        return 0;
    }
    if (num == 1) {
        return 1;
    }
    return 2 * pel(num - 1) + pel(num - 2);
}

void main() {
    int n;
    printf("enter an integer (n): ");
    scanf("%d", &n);
    int result = pel(n);
    printf("%d\n", result);
}