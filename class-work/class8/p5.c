#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int fun(int *arr, int n) {
    int i;
    int a = n - 1, b = 0;
    int *d = (int *)calloc(n, sizeof(int));
    assert(d);
    for (i = 0; i < n; i++) {
        d[arr[i]]++;
    }
    for (i = 0; i < n; i++) {
        if (d[i] > d[b]) {
            b = i;
        }
        if (d[i] < d[a] && d[i] > 0) {
            a = i;
        }
    }
    free(d);
    return b - a;
}

int main() {
    int arr[] = {5, 5, 1, 4, 4, 4, 7, 7};
    int result = fun(arr, SIZE);
    printf("result is %d\n", result);

    return 0;
}