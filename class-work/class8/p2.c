#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int *fun(int n) {
    int i;
    int *a = (int *)malloc((n + 1) * sizeof(int));
    assert(a);
    a[0] = 0;
    a[1] = 1;
    for (i = 2; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    return a;
}

void printArray(int *a, int n) {
    int i;
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int *a;
    a = fun(SIZE);
    printArray(a, SIZE);
    free(a);
}