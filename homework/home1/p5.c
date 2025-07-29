#include <stdio.h>
void main(){
    int currentYear;
    int age;
    currentYear = 2024;
    printf("What is your age?\n");
    scanf("%d", &age);
    printf("The Year you were born is %d\n", currentYear - age);
}