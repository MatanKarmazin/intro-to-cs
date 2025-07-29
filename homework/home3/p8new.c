#include <math.h>
#include <stdio.h>
void main() {
    double a, b, c;
    double root, x1, x2;
    printf(
        "Please enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    root = b * b - 4 * a * c;
    if (root >= 0) {
        x1 = (-b + sqrt(root)) / (2 * a);
        x2 = (-b - sqrt(root)) / (2 * a);
        printf("x1, x2 are: %.2lf, %.2lf\n", x1, x2);
    } else {
        printf("x1, x2 are not real numbers\n");
    }