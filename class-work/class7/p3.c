#include <stdio.h>
#define SIZE 5

int isAscending(int *arr, int n, int *ascending) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
        if (arr[i] >= arr[i + 1]) {
            *ascending = 0;
            return 1;
        }
    }
    return 1;
}

int isAscendingRecu(int *arr, int n, int *ascending) {
    if (n <= 1) {
        return 1;
    }

    if (arr[n - 1] < arr[n - 2]) {
        return 0;
    }
    if (arr[n - 1] <= arr[n - 2]) {
        *ascending = 0;
    }
    return isAscendingRecu(arr, n - 1, ascending);
}

int main() {
    int ascending = 1, arr[] = {1, 3, 5, 6, 11};
    int result1 = isAscending(arr, SIZE, &ascending);
    printf("the function return %d\nThe functuin transfer %d\n", result1,
           ascending);
    int result2 = isAscendingRecu(arr, SIZE, &ascending);
    printf("the function return %d\nThe functuin transfer %d\n", result2,
           ascending);
    return 0;
}