#include <math.h>
#include <stdio.h>

/* int pwrFor(int number, int pwr) {
    int i;
    int result = 1;
    for (i = 1; i <= pwr; i++) {
        result *= number;
    }
    return result;
} */

void main() {
    int x, decimal = 0;
    double counter = 0;
    printf("Enter binary numbers and to stop, enter a non-binary number: ");
    while (1) {
        scanf("%d", &x);
        if (x == 1) {
            decimal += pow(2, counter);
            counter++;
        } else if (x == 0) {
            counter++;
        } else {
            break;
        }
    }
    printf("%d\n", decimal);
}