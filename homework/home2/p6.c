#include <math.h>
#include <stdio.h>
void main() {
    double an, a1, q;
    int n;
    printf("Please enter a1, d, and n: ");
    scanf("%lf %lf %d", &a1, &q, &n);
    an = a1 * (pow(q, n) - 1);
    double s = an / (q - 1);
    printf("S = %.1lf\n", s);
}