#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

double *fun(int n) {
    double *a = (double *)malloc(n * sizeof(double));
    assert(a);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }
    return a;
}

int main() {
    double *a;
    a = fun(SIZE);
    free(a);
}