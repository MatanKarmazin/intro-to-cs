#include <stdio.h>

double fun(int number, int digit, int *count) {
    int sum = 0;
    *count = 0;
    while (number != 0) {
        int lastDigit = number % 10;
        if (lastDigit < digit) {
            sum += lastDigit;
            (*count)++;
        }
        number /= 10;
    }
    if (*count == 0) {
        return 0;
    } else {
        return (double)sum / *count;
    }
}

int main() {
    int number = 928743;
    int digit = 4;
    int count;
    double avg = fun(number, digit, &count);
    printf("Average of digits below %d in %d is %.2lf\n", digit, number, avg);
    printf("Number of digits below %d: %d\n", digit, count);
    return 0;
}