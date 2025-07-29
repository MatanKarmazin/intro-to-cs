#include <stdio.h>

void swapMinMax(int *Ptr1num, int *Ptr2num, int *Ptr3num) {
    // Find maximum among the three numbers
    int max = *Ptr1num;
    if (*Ptr2num > max) {
        max = *Ptr2num;
    }
    if (*Ptr3num > max) {
        max = *Ptr3num;
    }

    // Find minimum among the three numbers
    int min = *Ptr1num;
    if (*Ptr2num < min) {
        min = *Ptr2num;
    }
    if (*Ptr3num < min) {
        min = *Ptr3num;
    }

    // Swap values to make Ptr1num point to the maximum and Ptr3num point to the minimum
    if (max == min) {
        // All numbers are the same, no need to swap
        return;
    } else if (*Ptr1num == max) {
        if (*Ptr2num == min) {
            // Swap Ptr1num and Ptr2num
            int temp = *Ptr1num;
            *Ptr1num = *Ptr2num;
            *Ptr2num = temp;
        } else {
            // Swap Ptr1num and Ptr3num
            int temp = *Ptr1num;
            *Ptr1num = *Ptr3num;
            *Ptr3num = temp;
        }
    } else if (*Ptr2num == max) {
        // Swap Ptr2num and Ptr3num
        int temp = *Ptr2num;
        *Ptr2num = *Ptr3num;
        *Ptr3num = temp;
    }
}

int main() {
    int num1 = 6, num2 = 9, num3 = 1;
    printf("before fun: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
    swapMinMax(&num1, &num2, &num3);
    printf("after fun: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    return 0;
}