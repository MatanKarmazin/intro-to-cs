#include <stdio.h>
void main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if ((x % 2 == 0 && x % 3 == 0 && x % 5 != 0) ||
        (x % 2 != 0 && x % 7 != 0 && x % 11 != 0)) {
        printf("Valid number\n");
    } else {
        printf("Invalid number\n");
    }
}