#include <math.h>
#include <stdio.h>

int decimal(int num) {
     int position = 0; // Initialize position as 0
    if (num == 0) {
        return 0; // Base case
    }
    int digits = num % 10;
    int currentBitValue = digits * pow(2, position);
    position++; // Increment position for the next digit
    return currentBitValue + decimal(num / 10);
}

void main() {
    int num = 1101;
    printf("Binary number: %d\n", num);
    int temp = decimal(num);
    printf("Decimal representation: %d\n", temp);
}
