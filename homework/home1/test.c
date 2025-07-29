#include <stdio.h>
void main() {
    int x;
    int y;
    printf("Choose an int \n", x);
    scanf("%d", &x);
    printf("Choose a second int \n", y);
    scanf("%d", &y);
    printf("The int you choose are %d and %d\n", x, y);
    printf("The sum of them are %d\n", x + y);
    printf("The multiplay of them are %d\n", x * y);
    printf("The divide of them are %d\n", x / y);
    printf("the %% is %d\n", x % y);
}
