#include <stdio.h>
#define SIZE 6

void printArray(int *arr, int n) {
    if (n <= 0) {
        return;
    }
    printf("%d ", *arr);
    printArray(arr + 1, n - 1);
}

void printArrayBack(int *arr, int n) {
    if (n <= 0) {
        return;
    }
    printArrayBack(arr + 1, n - 1);
    printf("%d ", *arr);
}

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6};
    printArray(arr, SIZE);
    printf("\n");
    printArrayBack(arr, SIZE);
    printf("\n");
    return 0;
}