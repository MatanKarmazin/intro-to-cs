#include <math.h>
#include <stdio.h>
void main() {
    int num, x, y, z, sumSQ;
    printf("enter a 3 digits number: ");
    scanf("%d", &num);
    x = num % 10;
    y = (num % 100) / 10;
    z = num / 100;
    sumSQ = pow(x, 2) + pow(y, 2) + pow(z, 2);
    printf("%d\n", sumSQ);
}