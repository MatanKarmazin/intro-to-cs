#include <stdio.h>
void main() {
    int distance, speed;
    printf("What is the distance in KM between town A to town B?\n");
    scanf("%d", &distance);
    printf("How fast did you drive in KM/h?\n");
    scanf("%d", &speed);
    double x = (double)distance / (double)speed;
    printf("The time that took you is %.2lf in hours and %.2lf in minutes", x, x * 60);
}