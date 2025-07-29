#include <stdio.h>
#define SIZE 9

int fun(int *arr, int n, int key) {
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (key == arr[mid]) {
            while (mid > 0 && arr[mid - 1] == key) {
                mid--;
            }
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

int main() {
    int arr1[] = {1, 1, 3, 3, 3, 6, 8, 9, 9};
    int key = 3;
    int result1 = fun(arr1, SIZE, key);
    printf("result = %d\n", result1);
    return 0;
}
