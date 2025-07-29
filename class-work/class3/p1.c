#include <stdio.h>
void main() {
    int a, b, c, max;
    printf("please enter 3 intergers: ");
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("Max (%d, %d, %d) = %d\n", a, b, c, max);
}