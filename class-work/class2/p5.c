#include <math.h>
#include <stdio.h>
void main() {
    double x;
    printf("enter a number\n");
    scanf("%lf", &x);
    printf("%.lf, %.lf, %.lf, %.lf\n", pow(x, 2), pow(x, 4), pow(x, 6), pow(x, 8));
}