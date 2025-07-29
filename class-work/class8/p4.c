#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int fun(int *arr, int n, int k) {
    int i;
    int *new = (int *)calloc((k + 1), sizeof(int));
    assert(new);
    for (i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] <= k) {
            new[arr[i]]++;
        }
    }
    for (int i = 0; i <= k; i++) {
        if (new[i] != i) {
            return 0;
        }
    }
    free(new);
    return 1;
}

int main() {
    int arr[] = {1, 4, 4, 3, 4, 2, 2, 3, 3, 4};
    int k = 4;
    int result = fun(arr, SIZE, k);
    printf("The result is: %d\n", result);
    return 0;
}