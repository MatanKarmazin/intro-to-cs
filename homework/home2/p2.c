#include <math.h>
#include <stdio.h>
void main() {
    double radios, area, perimeter, volume;
    printf("Please enter a radios of a circle: ");
    scanf("%lf", &radios);
    area = M_PI * radios * radios;
    perimeter = 2 * M_PI * radios;
    volume = 4 / 3 * M_PI * radios * radios * radios;
    printf("The area of the circle is %.2lf\n", area);
    printf("The perimeter of the circle is %.2lf\n", perimeter);
    printf("The volume of the circle is %.2lf\n", volume);
}