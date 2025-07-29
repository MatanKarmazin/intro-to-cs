#include <math.h>
#include <stdio.h>
void main() {
    int x1, y1, x2, y2;
    double dist;
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%d %d", &x2, &y2);
    dist = sqrt(pow((double)(x1 - x2), 2) + pow((double)(y1 - y2), 2));
    printf("The distance is: %.2lf\n", dist);
}