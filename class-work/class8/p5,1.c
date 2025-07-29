#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int fun(int *arr, int n) {
    int a = 0, b = 0;
    int i;
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
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    free(d);
    return b - a;
}

int main() {
    int arr[] = {5, 1, 6, 6, 9, 9};
    int result = fun(arr, SIZE);
    printf("result is %d\n", result);

    return 0;
}