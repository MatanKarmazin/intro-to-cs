#include <stdio.h>
void main() {
    int x, y;
    printf("enter a point in the plane(x,y)\n");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) {
        printf("(%d,%d) is in Quadrant 1(+,+)\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("(%d,%d) is in Quadrant 2(-,+)\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("(%d,%d) is in Quadrant 3(-,-)\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("(%d,%d) is in Quadrant 4(+,-)\n", x, y);
    }
}