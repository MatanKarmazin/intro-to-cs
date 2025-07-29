#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int *fun(int *a, int *b) {
    int *c = (int*)malloc(3 * sizeof(int));
    assert(c);
    c[0] = a[1]*b[2] - a[2]*b[1];
    c[1] = a[2]*b[0] - a[0]*b[2];
    c[2] = a[0]*b[1] - a[1]*b[0];
    return c;
}

void printArray(int *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int arrA[] = {1, 2, 1};
    int arrB[] = {3, 3, 3};
    int *arrC = fun(arrA, arrB);
    printArray(arrC, 3);
    free(*arrC);
    return 0;
}