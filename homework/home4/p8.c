#include <stdio.h>

double power(double q, int n){
    int i;
    double result = 1;
    for (i = 1;i <= n;i++){
        result *= q;
    }
    return result;
}

void main() {
    double an, a1, q, s;
    int n;
    printf("enter a1, q, and n: ");
    scanf("%lf%lf%d", &a1, &q, &n);
    an = a1 * power(q, (n-1));
    s = (a1 * (power(q, n) -1)) / (q - 1);
    printf("an = %.1f\n", an);
    printf("S = %.1f\n", s);
}