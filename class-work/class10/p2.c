#include <stdio.h>
#define SIZE 8

int fun(int *arr, int n, int key) {
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (key == arr[mid]) {
            return mid;
        }
        if (key > arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int funRec(int *arr, int key, int low, int high) {
    int mid;
    if (low > high) {
        return -1;
    }
    mid = low + (high - low) / 2;
    if (key == arr[mid]) {
        return mid;
    }
    if (key > arr[mid]) {
        return funRec(arr, key, low, mid - 1);
    } else {
        return funRec(arr, key, mid + 1, high);
    }
}

int main() {
    int arr1[] = {9, 7, 7, 5, 3, 3, 3, 1};
    int key = 3;
    int low = 0, high = SIZE - 1;
    int result1 = fun(arr1, SIZE, key);
    int result2 = funRec(arr1, key, low, high);
    printf("Iterative function = %d\n", result1);
    printf("Recursive = %d\n", result2);
    return 0;
}
