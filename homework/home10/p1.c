#include <stdio.h>

int fun(int *arr, int n) {
    int expectedSum = (n * (n + 1)) / 2;
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return expectedSum - sum;
}

int main() {
    int arr[] = {0, 5, 1, 4, 2};
    int n = 5;
    int result = fun(arr, n);
    printf("%d\n", result);
}