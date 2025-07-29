#include <stdio.h>
#define SIZE 8

void maxmax(int *arr, int n, int *max_even, int *even, int *max_odd, int *odd) {
    int i;
    *even = 0, *odd = 0;
    max_even = 0, max_odd = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2) {
            if (arr[i] > *max_even) {
                *max_even = arr[i];
                *even = 1;
            }
        } else {
            if (arr[i] > *max_odd) {
                *max_odd = arr[i];
                *odd = 1;
            }
        }
    }
}

int main() {
    int max_even, max_odd, even, odd;
    int arr[SIZE] = {3, 6, 5, 9, 5, 7, 2, 1};
    maxmax(arr, SIZE, &max_even, &even, &max_odd, &odd);
    even ? printf("there is an even number\n")
         : printf("there isn't an even number\n");
    odd ? printf("there is an even number\n")
        : printf("there isn't an even number\n");
    printf("The max even number is %d\nThe max odd number is %d\n", max_even,
           max_odd);
    return 0;
}