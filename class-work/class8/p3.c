#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 7

int fun(int *arr, int n, int *ptr) {
    int i;
    int *d = (int *)calloc(10, sizeof(int));
    assert(d);
    for (i = 0; i < n; i++) {
        d[arr[i]]++;
        
    }
    int max = 0;
    for (i = 0; i < 10; i++) {
        if (d[i] > max) {
            max = d[i];
            *ptr = i;
        }
    }
    free(d);
    return max;
}

int main() {
    int arr[] = {1, 6, 3, 3, 6, 3, 3};
    int ptr;
    int result = fun(arr, SIZE, &ptr);
    printf("pointer = %d\n", ptr);
    printf("result = %d\n", result);
}