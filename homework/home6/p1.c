#include <stdio.h>

double f(int x, int n) {
    double y;
    if (n == 1) {
        return x;
    }
    y = f(x, n / 2);
    if (n % 2 == 0) {
        return y * y;
    } else {
        return y * y * x;
    }
}

void main() {
    double x;
    int n;
    printf("enter an x and n: ");
    scanf("%lf%d", &x, &n);
    printf("%.lf^%d = %.lf\n", x, n, f(x, n));
}