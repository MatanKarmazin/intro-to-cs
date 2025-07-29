#include <math.h>
#include <stdio.h>

void main() {
    int x, decimal = 0;
    double counter = 0;
    printf("Enter binary numbers and to stop, enter a non-binary number: ");
    while (1) {
        scanf("%d", &x);
        if (x == 1) {
            // decimal += pow(2, counter);
            counter++;
        } else if (x == 0) {
            counter++;
        } else {
            break;
        }
    }
    while (counter >= 0) {
        // scanf("%d", &x);
        // printf("counter1=%lf\n", counter);
        if (x == 1) {
            decimal += pow(2, (counter - 1));
        }
        counter--;
        // printf("counter2=%lf\n", counter);
    }
    printf("decimal=%d\n", decimal);
}