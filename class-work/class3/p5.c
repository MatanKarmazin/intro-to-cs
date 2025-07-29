#include <stdio.h>
void main() {
    int day, month, year;
    printf("enter a date(DD/MM/YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
         month == 10) &&
        (day < 31)) {
        day += 1;
        printf("%.2d/%.2d/%.4d\n", day, month, year);
    } else if ((month == 1 || month == 3 || month == 5 || month == 7 ||
                month == 8 || month == 10) &&
               (day == 31)) {
        day = 1;
        month += 1;
        printf("%.2d/%.2d/%.4d\n", day, month, year);
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) &&
               (day < 30)) {
        day = day + 1;
        printf("%.2d/%.2d/%.4d\n", day, month, year);
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) &&
               (day == 30)) {
        day = 1;
        month = month + 1;
        printf("%.2d/%.2d/%.4d\n", day, month, year);
    } else if (month == 12 && day == 31) {
        day = 1;
        month = 1;
        year = year + 1;
        printf("%.2d/%.2d/%.4d\n", day, month, year);
    } else if ((month == 12) && (day < 31)) {
        day = day + 1;
        printf("%.2d/%.2d/%.4d\n", day, month, year);
    } else if ((month == 2) && (day == 28) && (year % 4 == 0)) {
        day = day + 1;
        printf("%.2d/%.2d/%.4d\n", day, month, year);
    } else if ((month == 2) && (day == 28 && (year % 4 != 0))) {
        day = 1;
        month = month + 1;
        printf("%.2d/%.2d/%.4d\n", day, month, year);
    } else if ((month == 2) && (day < 28)) {
        day = day + 1;
        printf("%.2d/%.2d/%.4d\n", day, month, year);
    } else {
        printf("Invalid date\n");
    }
}