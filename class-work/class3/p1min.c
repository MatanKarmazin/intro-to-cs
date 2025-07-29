#include <stdio.h>
void main() {
    int a, b, c, min;
    printf("please enter 3 intergers: ");
    scanf("%d%d%d", &a, &b, &c);
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    printf("min (%d, %d, %d) = %d\n", a, b, c, min);
}