#include <stdio.h>
void main() {
    double an, a1, d;
    int n;
    printf("Please enter a1, d, and n: ");
    scanf("%lf %lf %d", &a1, &d, &n);
    an = a1 + d * ((double)n - 1);
    printf("an for n=%d is %.3lf\n", n, an);
}