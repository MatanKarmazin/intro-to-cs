#include <stdio.h>
void main() {
    int m1, m2, m3, t, x;
    printf("enter the projects grades\n");
    scanf("%d %d %d", &m1, &m2, &m3);
    printf("enter the test grade\n");
    scanf("%d", &t);
    x = ((m1 + m2 + m3) / 3 * 0.2) + t * 0.8;
    printf("%d\n", x);
}