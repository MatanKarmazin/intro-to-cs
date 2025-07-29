#include <stdio.h>

int ex4(int key, int *arr, int size) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key || arr[mid + 1] == key) {
            return 1;
        }
        if (key > arr[mid] && key > arr[mid + 1]) {
            low = mid + 1;
        } else
            high = mid - 1;
        if (key > arr[mid] && key < arr[mid + 1]) {
            high = mid;
        }
    }
    return 0;
}

int main() {
    int arr[] = {7,10,15,13};
    printf("%d\n", ex4(13, arr, 4));
}