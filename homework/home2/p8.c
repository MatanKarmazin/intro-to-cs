#include <stdio.h>
void main() {
    double d;
    printf("enter a real number: ");
    scanf("%lf", &d);
    d = d - (int)d;
    printf("d = %.2lf\n", d);
}