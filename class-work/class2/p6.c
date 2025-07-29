#include <stdio.h>
void main() {
    float kmAtoB, carAspeed, carBspeed, flySpeed, flyTime, flyDistance;
    printf("please enter the distance between town A to town B\n");
    scanf("%f", &kmAtoB);
    printf("please enter the speed of car A, car B, and the fly speed\n");
    scanf("%f %f %f", &carAspeed, &carBspeed, &flySpeed);
    flyTime = kmAtoB / (carAspeed + carBspeed); //time = km/speed(both cars have same distance)
    flyDistance = flyTime * flySpeed; 
    printf("The distance of the fly until the cars crash is %.2f\n", flyDistance);
}