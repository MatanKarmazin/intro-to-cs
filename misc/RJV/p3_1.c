#include <stdio.h>
#define SIZE 5

void inputArray(int *arr, int size) {
    int i;
    printf("enter %d numbers to the array\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

int isPali(int *arr, int size) {
    int i, j;
    for (i = 0, j = size - 1; i < size / 2; i++, j--) {
        if (arr[i] != arr[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[SIZE];
    inputArray(arr, SIZE);
    isPali(arr, SIZE) ? printf("The array is palindrome\n")
                      : printf("The array is not palindrome\n");
    return 0;
}