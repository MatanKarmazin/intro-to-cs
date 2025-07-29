#include <stdio.h>
void main() {
    int num, x, y, z;
    printf("enter a 3 digits number: ");
    scanf("%d", &num);
    x = num % 10;
    y = (num % 100) / 10;
    z = num / 100;
    // printf("the number is %d%d%d\n", z, y, x);
    if (num > 999) {
        printf("Invalid input\n");
    } else if ((z < y) && (y < x)) {
        printf("Very ascending\n");
    } else if ((z < y) && (y == x)) {
        printf("Ascending\n");
    } else if ((z > y) && (y > x)) {
        printf("Very descending\n");
    } else if ((z > y) && (y == x)) {
        printf("Descending\n");
    } else if ((x == y && y == z) || ((z > y) && (y < x))) {
        printf("Digits neither ascending nor descending\n");
    }
}