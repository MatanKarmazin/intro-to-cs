#include <math.h>
#include <stdio.h>
void main() {
    double a, b, c, x1, x2;
    printf("Please enter the coefficients of the quadratic equation (a,b,c)\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    if (x1 && x2 = ) {
        printf("x1, x2 are: %lf, %lf\n", x1, x2);
    } else {
        printf("x1, x3 are not real numbers");
    }
}