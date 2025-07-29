#include <math.h>
#include <stdio.h>
void main() {
    double a, num;
    printf("Please enter an edge of a Square\n");
    scanf("%lf", &a);
    num = sqrt(pow(a, 2) + pow(a, 2));
    printf("the diagonal length is %.4lf\n", num);
}