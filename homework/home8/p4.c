#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int *fun(int *arr, int n) {
    int product = 1;
    int i;
    for (i = 0; i < n; i++) {
        product *= arr[i];
    }
    int *d = (int *)malloc(n * sizeof(int));
    assert(d);
    for (i = 0; i < n; i++) {
        d[i] = product / arr[i];
    }
    return d;
}

int main() {
    int arr[] = {1, 2, 2, 4, 1};
    int *d = fun(arr, SIZE);
    for (int i = 0; i < SIZE; i++){
        printf("%2d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++){
        printf("%2d ", d[i]);
    }
    printf("\n");
    return 0;
}