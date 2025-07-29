#include <stdio.h>
void main() {
    int num, x, y, z;
    printf("enter a 3 digits number\n");
    scanf("%d", &num);
    x = num % 10;
    y = (num % 100) / 10;
    z = num / 100;
    printf("the \"sum\" of the digits is %d\n", z + y + x);
}