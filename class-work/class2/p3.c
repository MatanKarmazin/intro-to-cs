#include <stdio.h>
void main() {
    int days, years, months, newDays;
    printf("enter number of days\n");
    scanf("%d", &days);
    years = days / 365;
    months = (days / 30) - years * 12;
    newDays = days - years * 365 - months * 30;
    // printf("%d\n", years);
    // printf("%d\n", months);
    // printf("%d\n", newDays);
    printf("%d days is %d years, %d month, %d days\n", days, years, months, newDays);
}
