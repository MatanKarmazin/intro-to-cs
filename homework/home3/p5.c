#include <stdio.h>
void main() {
    int currYear = 2024, currMonth = 1, currDay = 13;
    int birthYear, birthMonth, birthDay, age;
    printf("enter you birthday date (DD.MM.YYYY)\n");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);
    if ((currMonth < birthMonth) ||
        (currMonth == birthMonth && currDay < birthDay)) {
        age = currYear - birthYear - 1;
    } else {
        age = currYear - birthYear;
    }
    printf("Your age is %d\n", age);
}