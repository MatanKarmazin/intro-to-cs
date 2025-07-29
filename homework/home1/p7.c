#include <stdio.h>
void main() {
    long id;
    double hourPay;
    int hoursDay, daysWeek, currentYear, startYear;
    currentYear = 2024;
    printf("Hello Bob\n");
    printf("Enter your ID\n");
    scanf("%lf", &id);
    printf("What year did you start work?\n");
    scanf("%d", &startYear);
    printf("What was your hourly pay?\n");
    scanf("%lf", &hourPay);
    printf("How much you worked in a day?\n");
    scanf("%d", &hoursDay);
    printf("How many days did you worked in a week?\n");
    scanf("%d", &daysWeek);
    double x = (currentYear - startYear) *
               (hourPay * (double)hoursDay * (double)daysWeek * 4);
    printf("Bob %.lf, you will expect to earn %lf$\n", id, x);
}