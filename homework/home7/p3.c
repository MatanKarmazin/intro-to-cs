#include <math.h>
#include <stdio.h>

int fun(int *c, int x, int n) {
    return n * *c * pow(x, n - 1);
}

int main() {
    int c = 4;
    int x = 2;
    int n = 3;
    int result = fun(&c, x, n);
    printf("the values after the function are: c = %d, n = %d\n", c, n);
    printf("the result for x = %d is: %d\n", x, result);
    return 0;
}