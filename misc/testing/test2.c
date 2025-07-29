#include <stdio.h>

void main() {
    int binaryDigit, decimal = 0;

    printf("Enter a binary sequence (0 or 1) ending with a non-binary digit: ");

    while (1) {
        scanf("%1d", &binaryDigit);

        if (binaryDigit == 0 || binaryDigit == 1) {
            decimal = decimal * 2 + binaryDigit;
        } else {
            break;
        }
    }

    printf("Decimal equivalent: %d\n", decimal);
}
