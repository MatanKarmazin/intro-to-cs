#include <stdio.h>
void main() {
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);
    if (a % 2 == 0 && b % 2 == 0 && a % b == 0) {
        printf("Valid Numbers\n");
    } else {
        printf("Invalid numbers\n");
    }
}