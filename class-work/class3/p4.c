#include <stdio.h>
void main() {
    int secs;
    printf("please enter seconds: ");
    scanf("%d", &secs);
    int hours, minutes, seconds;
    hours = secs / 3600;
    minutes = (secs / 60);
    if (minutes > 60) {
        minutes = (secs / 60) - 60;
    }
    seconds = (secs % 60);
    printf("%.2d:%.2d:%.2d\n", hours, minutes, seconds);
}