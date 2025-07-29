#include <stdio.h>
void main() {
    int x;
    printf("please enter an integer: ");
    scanf("%d", &x);
    if (x >= 0) {
        printf("the absolute value is: %d\n", x);
    } else {
        printf("the absolute value is: %d\n", -x);
    }
}