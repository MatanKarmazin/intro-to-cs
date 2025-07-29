#include <stdio.h>
#define SIZE 5

void swap(int *arr, int n) {
    int i, temp;
    for (i = 0; i < (n / 2); i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void swapRecu(int *arr, int n) {
    int temp;
    if (n < SIZE / 2) {
        return;
    }
    temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;
    swapRecu(arr + 1, n - 1);
}

int main() {
    int arr[] = {1, 3, 2, 5, 6};
    swap(arr, SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    swapRecu(arr, SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
