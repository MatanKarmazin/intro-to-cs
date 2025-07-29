#include <stdio.h>
#define SIZE 5

int funOn(int *arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == i) {
            return 1;
        }
    }
    return -1;
}

int funLogn(int *arr, int n) {
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == mid) {
            return 1;
        }
        if (arr[mid] > mid) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr1[] = {-1, 1, 6, 9, 11};
    int arr2[] = {-1, 0, 6, 9, 11};
    int result1 = funOn(arr1, SIZE);
    int result2 = funOn(arr2, SIZE);
    int result3 = funLogn(arr1, SIZE);
    int result4 = funLogn(arr2, SIZE);
    printf("1 = %d\n2 = %d\n", result1, result2);
    printf("3 = %d\n4 = %d\n", result3, result4);
}