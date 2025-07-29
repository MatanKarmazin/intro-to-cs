#include <math.h>
#include <stdio.h>
void main() {
    double a = 1, b = 5, c = 6;
    double x1, x2;
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    printf("%.lf\n", x1);
    printf("%.lf\n", x2);
}